#include "parser.h"
#include <stdlib.h>
#include <string.h>

/* Recursively parse SMAF chunks. */

/* Decode FM voice from 30-byte register data.
   Layout from go-smaf vm35fm.go:
     byte 0: DrumKey
     byte 1: PANPOT(5)/BO(2)
     byte 2: LFO(2)/PE(1)/ALG(3)
     byte 3-9: Op1 (7 bytes)
     byte 10-16: Op2 (7 bytes)
     byte 17-23: Op3 (7 bytes) — only if 4-op
     byte 24-30: Op4 (7 bytes) — only if 4-op

   Per operator (7 bytes):
     byte 0: SR(4)/XOF(1)/SUS(1)/KSR(1)
     byte 1: RR(4)/DR(4)
     byte 2: AR(4)/SL(4)
     byte 3: TL(6)/KSL(2)
     byte 4: DAM(3)/EAM(1)/DVB(2)/EVB(1)
     byte 5: MULTI(4)/DT(3)
     byte 6: WS(5)/FB(3)
*/
static void decode_fm_voice(smaf_voice_t *voice, uint8_t prog, const uint8_t *data, int len) {
    voice->prog = prog;
    voice->raw_len = (uint8_t)(len > 31 ? 31 : len);
    memcpy(voice->raw, data, voice->raw_len);

    if (len < 3) return;

    voice->panpot = (data[1] >> 3) & 0x1F;
    voice->bo = data[1] & 0x03;
    voice->lfo = (data[2] >> 6) & 0x03;
    voice->alg = data[2] & 0x07;
    voice->num_ops = (voice->alg < 2) ? 2 : 4;
}

/* Add a voice to the track */
static void track_add_voice(smaf_track_t *trk, const smaf_voice_t *v) {
    if (trk->num_voices >= trk->voice_cap) {
        trk->voice_cap = trk->voice_cap ? trk->voice_cap * 2 : 16;
        trk->voices = realloc(trk->voices, trk->voice_cap * sizeof(smaf_voice_t));
    }
    trk->voices[trk->num_voices++] = *v;
}

/* Add a wave to the track */
static void track_add_wave(smaf_track_t *trk, const smaf_wave_t *w) {
    if (trk->num_waves >= trk->wave_cap) {
        trk->wave_cap = trk->wave_cap ? trk->wave_cap * 2 : 8;
        trk->waves = realloc(trk->waves, trk->wave_cap * sizeof(smaf_wave_t));
    }
    trk->waves[trk->num_waves++] = *w;
}

/* Parse Setup Data (Mtsu) — extracts f0 SysEx voice data.
   Supports both MA-3 (43 79 06 7F) and MA-5/7 (43 79 07 7F) headers. */
static void parse_setup_data(smaf_track_t *trk, const uint8_t *data, int len) {
    int pos = 0;
    while (pos < len) {
        uint8_t b = data[pos++];

        if (b == 0xFF && pos < len) {
            pos++;
            continue;
        }

        if (b == 0xF0) {
            if (pos >= len) break;
            uint8_t msg_len = data[pos++];

            if (msg_len < 6) { pos += msg_len; continue; }

            const uint8_t *msg = data + pos;

            /* Check SMAF voice header: 43 79 XX 7F (XX=06 for MA-3, 07 for MA-5/7) */
            if (msg_len > 5 && msg[0] == 0x43 && msg[1] == 0x79 &&
                msg[3] == 0x7F) {

                uint8_t dev_id = msg[2]; /* 06=MA-3, 07=MA-5/7 */
                uint8_t msg_type = msg[4];

                if (dev_id == 0x07) {
                    /* MA-5/MA-7 format: type-based dispatch */
                    /* Type 01 7c: FM voice */
                    if (msg_type == 0x01 && msg_len > 7 && msg[5] == 0x7C) {
                        uint8_t prog = msg[6];
                        int vlen = msg_len - 7;
                        if (vlen > 0) {
                            smaf_voice_t voice;
                            decode_fm_voice(&voice, prog, msg + 7, vlen);
                            track_add_voice(trk, &voice);
                        }
                    }
                    /* Type 03/07/08: WT wave data */
                    else if (msg_type == 0x03 || msg_type == 0x07 || msg_type == 0x08) {
                        if (msg_len > 6) {
                            smaf_wave_t wave;
                            memset(&wave, 0, sizeof(wave));
                            wave.prog = msg[5];
                            wave.type = msg_type;
                            int wlen = msg_len - 6;
                            wave.data = malloc(wlen);
                            if (wave.data) {
                                memcpy(wave.data, msg + 6, wlen);
                                wave.data_len = wlen;
                                wave.bits = 8;
                                track_add_wave(trk, &wave);
                            }
                        }
                    }
                } else if (dev_id == 0x06) {
                    /* MA-3 format: voice data follows header directly
                       F0 <len> 43 79 06 7F <msg_type> <data...> F7
                       msg_type 7F = voice assign (voice data follows)
                       msg_type 07 = WT voice */
                    if (msg_type == 0x7F && msg_len > 5) {
                        /* VM3 voice: bank(1) + voice_data(24 or 31 bytes) */
                        int vlen = msg_len - 5;
                        if (vlen > 0) {
                            smaf_voice_t voice;
                            decode_fm_voice(&voice, 0, msg + 5, vlen);
                            track_add_voice(trk, &voice);
                        }
                    } else if (msg_type == 0x07 && msg_len > 6) {
                        /* WT wave in MA-3 format */
                        smaf_wave_t wave;
                        memset(&wave, 0, sizeof(wave));
                        wave.prog = msg[5];
                        wave.type = msg_type;
                        int wlen = msg_len - 6;
                        wave.data = malloc(wlen);
                        if (wave.data) {
                            memcpy(wave.data, msg + 6, wlen);
                            wave.data_len = wlen;
                            wave.bits = 8;
                            track_add_wave(trk, &wave);
                        }
                    }
                }
            }

            pos += msg_len;
            if (pos < len && data[pos] == 0xF7) pos++;
        }
    }
}

/* Read variable-length integer (7-bit per byte, MSB=continuation) */
static uint32_t read_varlen(const uint8_t *p, int *pos, int len, bool allow_3byte) {
    uint32_t val = 0;
    int max_bytes = allow_3byte ? 3 : 2;
    for (int i = 0; i < max_bytes && *pos < len; i++) {
        uint8_t b = p[(*pos)++];
        val = (val << 7) | (b & 0x7F);
        if ((b & 0x80) == 0) break;
    }
    return val;
}

/* Add a score event */
static void track_add_event(smaf_track_t *trk, const smaf_score_event_t *e) {
    if (trk->num_events >= trk->event_cap) {
        trk->event_cap = trk->event_cap ? trk->event_cap * 2 : 256;
        trk->events = realloc(trk->events, trk->event_cap * sizeof(smaf_score_event_t));
    }
    trk->events[trk->num_events++] = *e;
}

/* Parse Score track events (Format 2: MobileStandard) */
static void parse_score_format2(smaf_track_t *trk, const uint8_t *data, int len) {
    int pos = 0;
    uint32_t delta = 0;
    uint8_t last_vel[16] = {0};

    while (pos < len) {
        /* Read delta time */
        delta = read_varlen(data, &pos, len, true);

        if (pos >= len) break;

        uint8_t status = data[pos++];

        /* Handle 0xFF meta events FIRST (before 0xF0 check since 0xFF & 0xF0 == 0xF0) */
        if (status == 0xFF) {
            if (pos >= len) break;
            uint8_t meta_type = data[pos++];
            if (pos >= len) break;
            int meta_len = (int)read_varlen(data, &pos, len, true);
            if (meta_type == 0x2F) {
                /* End of track — stop parsing */
                break;
            }
            if (meta_type == 0x00) {
                /* NOP — skip */
            }
            pos += meta_len;
            continue;
        }

        uint8_t type = status & 0xF0;
        uint8_t ch = status & 0x0F;

        smaf_score_event_t evt;
        memset(&evt, 0, sizeof(evt));
        evt.delta_time = delta;
        evt.type = status;
        evt.channel = ch;

        switch (type) {
            case 0x90: /* Note On with velocity */
                if (pos >= len) break;
                evt.note = data[pos++];
                if (pos >= len) break;
                evt.velocity = data[pos++];
                last_vel[ch] = evt.velocity;
                evt.gate_time = read_varlen(data, &pos, len, true);
                break;

            case 0x80: /* Note On (reuse last velocity) */
                if (pos >= len) break;
                evt.note = data[pos++];
                evt.velocity = last_vel[ch];
                evt.gate_time = read_varlen(data, &pos, len, true);
                break;

            case 0xB0: /* Control Change */
                if (pos + 1 >= len) break;
                evt.cc_number = data[pos++];
                evt.cc_value = data[pos++];
                break;

            case 0xC0: /* Program Change */
                if (pos >= len) break;
                evt.program = data[pos++];
                break;

            case 0xE0: /* Pitch Bend */
                if (pos + 1 >= len) break;
                evt.pitch_bend = data[pos] | ((uint16_t)data[pos+1] << 7);
                pos += 2;
                break;

            case 0xF0: /* SysEx */
            {
                if (pos >= len) break;
                int sysex_len = (int)read_varlen(data, &pos, len, true);
                evt.sysex_len = (sysex_len > 64) ? 64 : (uint8_t)sysex_len;
                if (pos + sysex_len > len) break;
                memcpy(evt.sysex_data, data + pos, evt.sysex_len);
                pos += sysex_len;
                if (pos < len && data[pos] == 0xF7) pos++; /* skip F7 */
                break;
            }

            case 0xD0: /* Channel Pressure — skip 1 byte */
                if (pos >= len) break;
                pos++;
                break;

            case 0xA0: /* Poly Aftertouch — skip 2 bytes */
                if (pos + 1 >= len) break;
                pos += 2;
                break;

            default:
                continue;
        }

        track_add_event(trk, &evt);
    }
}

/* Parse Score track events (Format 0: HandyPhone) */
static void parse_score_format0(smaf_track_t *trk, const uint8_t *data, int len) {
    int pos = 0;
    uint32_t delta = 0;

    while (pos < len) {
        delta = read_varlen(data, &pos, len, false);
        if (pos >= len) break;

        uint8_t b = data[pos++];
        smaf_score_event_t evt;
        memset(&evt, 0, sizeof(evt));
        evt.delta_time = delta;

        if (b == 0x00) {
            /* Control event */
            if (pos >= len) break;
            uint8_t b2 = data[pos++];
            uint8_t ctrl_type = b2 & 0x07;
            uint8_t ctrl_data = (b2 >> 3) & 0x1F;

            switch (ctrl_type) {
                case 0x00: /* Fine Tune */
                    /* Not implemented for basic playback */
                    break;
                case 0x01: /* Pitch Bend */
                    evt.type = EVT_PITCH_BEND | 0;
                    evt.channel = (ctrl_data >> 2) & 0x03;
                    evt.pitch_bend = 0x2000; /* center */
                    break;
                case 0x02: /* Modulation */
                    break;
                case 0x03: /* Extended control */
                {
                    if (pos >= len) break;
                    uint8_t ext = data[pos++];
                    uint8_t ext_type = ext & 0x07;
                    uint8_t ext_val = (ext >> 3) & 0x1F;
                    uint8_t ch = ctrl_data & 0x03;

                    switch (ext_type) {
                        case 0x00: /* Program Change */
                            evt.type = EVT_PC | ch;
                            evt.channel = ch;
                            evt.program = ext_val;
                            break;
                        case 0x01: /* Volume */
                            evt.type = EVT_CC | ch;
                            evt.channel = ch;
                            evt.cc_number = CC_VOLUME;
                            evt.cc_value = ext_val * 8; /* 5-bit → 0-248 */
                            break;
                        case 0x02: /* Panpot */
                            evt.type = EVT_CC | ch;
                            evt.channel = ch;
                            evt.cc_number = CC_PAN;
                            evt.cc_value = ext_val * 8;
                            break;
                        case 0x03: /* Expression */
                            evt.type = EVT_CC | ch;
                            evt.channel = ch;
                            evt.cc_number = CC_EXPRESSION;
                            evt.cc_value = ext_val * 8;
                            break;
                    }
                    break;
                }
            }
            track_add_event(trk, &evt);
        } else {
            /* Note event: CCOONNNN
               CC = channel (0-3)
               OO = octave offset (0-3), base octave = 3
               NNNN = note (0-15) */
            uint8_t ch = (b >> 6) & 0x03;
            uint8_t oct = (b >> 4) & 0x03;
            uint8_t note = b & 0x0F;

            evt.type = EVT_NOTE_ON | ch;
            evt.channel = ch;
            evt.note = (oct + 3) * 12 + note;
            evt.velocity = 127; /* HandyPhone has fixed velocity */
            evt.gate_time = read_varlen(data, &pos, len, false);
            track_add_event(trk, &evt);
        }
    }
}

/* Parse a single MTR chunk */
static void parse_mtr_chunk(smaf_file_t *mf, const uint8_t *data, uint32_t chunk_size) {
    if (chunk_size < 4) return;

    smaf_track_t *trk = &mf->tracks[mf->num_tracks++];
    memset(trk, 0, sizeof(smaf_track_t));

    /* Track header: format(1) + seq_type(1) + timebase_d(1) + timebase_g(1) */
    trk->format_type = data[0];
    trk->seq_type = data[1];
    trk->timebase_d = data[2];
    trk->timebase_g = data[3];

    int pos = 4;

    /* Channel status bytes:
       Format 0 (HPS): 2 bytes packed (4 bits per channel × 4 channels)
       Format 1/2 (Mobile): 16 bytes (1 byte per channel) */
    int ch_status_len;
    if (trk->format_type >= SCORE_FMT_MOBILE_CMP) {
        ch_status_len = 16;
    } else {
        ch_status_len = 2;
    }
    for (int i = 0; i < ch_status_len && pos < (int)chunk_size; i++) {
        trk->channel_status[i] = data[pos++];
    }

    /* Parse sub-chunks within MTR */
    while (pos + 8 <= (int)chunk_size) {
        uint32_t sig = read_be32(data + pos);
        uint32_t sub_size = read_be32(data + pos + 4);
        pos += 8;

        if (pos + (int)sub_size > (int)chunk_size) break;

        if (sig == 0x4D747375) { /* "Mtsu" = Setup Data */
            parse_setup_data(trk, data + pos, sub_size);
        } else if (sig == 0x4D747371) { /* "Mtsq" = Score sequence */
            if (trk->format_type == SCORE_FMT_MOBILE_STD) {
                parse_score_format2(trk, data + pos, sub_size);
            } else if (trk->format_type == SCORE_FMT_HANDYPHONE) {
                parse_score_format0(trk, data + pos, sub_size);
            }
        }

        pos += sub_size;
    }
}

/* Parse CNTI (Content Info) chunk */
static void parse_cnti(smaf_file_t *mf, const uint8_t *data, uint32_t len) {
    if (len < 6) return;

    uint8_t cnti_type = data[0];
    uint16_t str_len = read_be16(data + 4);

    const uint8_t *str_data = data + 6;
    if (str_len > len - 6) str_len = len - 6;

    /* cnti_type: 0x01=title, 0x02=artist, 0x03=genre, etc. */
    char *dest = NULL;
    int dest_max = 0;
    switch (cnti_type) {
        case 0x01: dest = mf->title; dest_max = sizeof(mf->title); break;
        case 0x02: dest = mf->artist; dest_max = sizeof(mf->artist); break;
        case 0x03: dest = mf->genre; dest_max = sizeof(mf->genre); break;
        default: return;
    }

    int copy_len = (str_len < (uint16_t)dest_max) ? str_len : dest_max - 1;
    memcpy(dest, str_data, copy_len);
    dest[copy_len] = '\0';
}

/* Recursive chunk parser */
static void parse_chunks(smaf_file_t *mf, const uint8_t *data, uint32_t len, int depth) {
    uint32_t pos = 0;

    /* Allocate track array on first call */
    if (depth == 0) {
        mf->num_tracks = 0;
        /* Count MTR chunks to pre-allocate */
        int mtr_count = 0;
        uint32_t p = 0;
        while (p + 8 <= len) {
            uint32_t sig = read_be32(data + p);
            if ((sig & 0xFFFFFFF0) == 0x4D545200) mtr_count++; /* MTR0-f */
            uint32_t sz = read_be32(data + p + 4);
            p += 8 + sz;
        }
        mf->tracks = calloc(mtr_count + 1, sizeof(smaf_track_t));
    }

    while (pos + 8 <= len) {
        uint32_t sig = read_be32(data + pos);
        uint32_t sz = read_be32(data + pos + 4);
        pos += 8;

        if (pos + sz > len) break;

        switch (sig) {
            case SMAF_CHUNK_CNTI:
                parse_cnti(mf, data + pos, sz);
                break;

            default:
                /* Check if it's an MTR chunk (MTR0 through MTRf) */
                if ((sig & 0xFFFFFFF0) == 0x4D545200) {
                    parse_mtr_chunk(mf, data + pos, sz);
                } else {
                    /* Recurse into sub-chunks */
                    parse_chunks(mf, data + pos, sz, depth + 1);
                }
                break;
        }

        pos += sz;
    }
}

smaf_result_t smaf_parse(smaf_file_t *mf, const uint8_t *data, size_t len) {
    if (!data || len < 12) return SMAF_ERR_INVALID;

    uint32_t sig = read_be32(data);
    if (sig != SMAF_CHUNK_MMMD) return SMAF_ERR_FORMAT;

    memset(mf, 0, sizeof(*mf));
    mf->data = (uint8_t *)data;
    mf->data_len = (uint32_t)len;

    /* Skip MMMD header (8 bytes), parse sub-chunks */
    parse_chunks(mf, data + 8, (uint32_t)(len - 8), 0);

    return SMAF_OK;
}

void smaf_parse_free(smaf_file_t *mf) {
    for (int t = 0; t < mf->num_tracks; t++) {
        smaf_track_t *trk = &mf->tracks[t];
        free(trk->voices);
        for (int w = 0; w < trk->num_waves; w++) {
            free(trk->waves[w].data);
        }
        free(trk->waves);
        free(trk->events);
    }
    free(mf->tracks);
    for (int w = 0; w < mf->num_global_waves; w++) {
        free(mf->global_waves[w].data);
    }
    free(mf->global_waves);
    memset(mf, 0, sizeof(*mf));
}
