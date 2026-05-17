#include "parser.h"
#include <stdlib.h>
#include <string.h>

/* Recursively parse SMAF chunks. */

/* Expand VM3Exclusive interleaved voice data to standard 31-byte format.
   Input: 36 bytes raw VM3Exclusive data (4 global shadow + 4×8 op bytes).
   Output: 31 bytes standard format (3 global + 4×7 op bytes).

   VM3Exclusive raw layout (go-smaf vm35fm.go comment):
     Index 0:  global shadow byte (holds high bits for indices 2,3)
     Index 1:  DrumKey (8 bits)
     Index 2:  PANPOT(5)/unused(1)/BO(2)
     Index 3:  LFO(2)/PE(1)/unused(3)/ALG(3)
     Index 4-11:   Op0 block (8 bytes)
     Index 12-19:  Op1 block (8 bytes)
     Index 20-27:  Op2 block (8 bytes)
     Index 28-35:  Op3 block (8 bytes)

   Each op block (8 bytes):
     offset 0: shadow byte (holds high bits for offsets 1-4)
     offset 1: SR(3)|ML3|WS4|SR_XOF|SUS|KSR
     offset 2: DAM|EAM|DVB|EVB|RR(4)
     offset 3: ML(4)|DT(3)|AR(4)
     offset 4: WS(4)|FB(4)|SL(4)
     offset 5: shadow2 byte (holds high bits for offsets 6-7)
     offset 6: MULTI(4)|unused(1)|DT(3)
     offset 7: WS(4)|FB(3)|TL(4)

   After expansion (go-smaf vm35fm.go lines 238-268):
     Shadow bits are ORed into the data bytes they belong to.
   Then extraction takes:
     Global: raw[1:4] (3 bytes)
     Per op:  raw[4+op*8 : 8+op*8] (4 bytes) + raw[9+op*8 : 12+op*8] (3 bytes) = 7 bytes

   Standard output layout (31 bytes):
     byte 0: DrumKey
     byte 1: PANPOT(5)/unused(1)/BO(2)
     byte 2: LFO(2)/PE(1)/unused(3)/ALG(3)
     Per op (7 bytes):
       byte 0: SR(4)/XOF(1)/unused(1)/SUS(1)/KSR(1)
       byte 1: RR(4)/DR(4)
       byte 2: AR(4)/SL(4)
       byte 3: TL(6)/KSL(2)
       byte 4: DAM(3)/EAM(1)/DVB(2)/EVB(1)
       byte 5: MULTI(4)/unused(1)/DT(3)
       byte 6: WS(5)/FB(3)
*/
static void expand_vm3_exclusive(const uint8_t *raw, int raw_len, uint8_t *out) {
    uint8_t buf[36];
    memset(buf, 0, 36);
    int n = raw_len > 36 ? 36 : raw_len;
    memcpy(buf, raw, n);

    /* Global shadow expansion (raw[0] → raw[2], raw[3]) */
    buf[2] |= (buf[0] << 2) & 0x80;
    buf[3] |= (buf[0] << 3) & 0x80;

    /* Per-operator shadow expansion */
    for (int op = 0; op < 4; op++) {
        /* Shadow at raw[op*8] → merge into raw[4+op*8..7+op*8] */
        uint8_t sh = buf[op * 8];
        buf[4 + op * 8 + 0] |= (sh << 4) & 0x80;
        buf[4 + op * 8 + 1] |= (sh << 5) & 0x80;
        buf[4 + op * 8 + 2] |= (sh << 6) & 0x80;
        buf[4 + op * 8 + 3] |= (sh << 7) & 0x80;
        /* Shadow2 at raw[8+op*8] → merge into raw[10+op*8..11+op*8] */
        uint8_t sh2 = buf[8 + op * 8];
        buf[10 + op * 8 + 0] |= (sh2 << 2) & 0x80;
        buf[10 + op * 8 + 1] |= (sh2 << 3) & 0x80;
    }

    /* Extract standard 31-byte voice format */
    out[0] = buf[1];  /* DrumKey */
    out[1] = buf[2];  /* PANPOT/BO */
    out[2] = buf[3];  /* LFO/ALG */

    for (int op = 0; op < 4; op++) {
        int dst = 3 + op * 7;
        out[dst + 0] = buf[4 + op * 8 + 0];  /* SR/XOF/SUS/KSR */
        out[dst + 1] = buf[4 + op * 8 + 1];  /* RR/DR */
        out[dst + 2] = buf[4 + op * 8 + 2];  /* AR/SL */
        out[dst + 3] = buf[4 + op * 8 + 3];  /* TL/KSL */
        out[dst + 4] = buf[9 + op * 8 + 0];  /* DAM/EAM/DVB/EVB (note: skip shadow2 at 8+op*8) */
        out[dst + 5] = buf[10 + op * 8 + 0]; /* MULTI/DT */
        out[dst + 6] = buf[11 + op * 8 + 0]; /* WS/FB */
    }
}

/* Decode FM voice from expanded standard format (17 or 31 bytes). */
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

static void track_add_voice(smaf_track_t *trk, const smaf_voice_t *v) {
    if (trk->num_voices >= trk->voice_cap) {
        trk->voice_cap = trk->voice_cap ? trk->voice_cap * 2 : 16;
        trk->voices = realloc(trk->voices, trk->voice_cap * sizeof(smaf_voice_t));
    }
    trk->voices[trk->num_voices++] = *v;
}

static void track_add_wave(smaf_track_t *trk, const smaf_wave_t *w) {
    if (trk->num_waves >= trk->wave_cap) {
        trk->wave_cap = trk->wave_cap ? trk->wave_cap * 2 : 8;
        trk->waves = realloc(trk->waves, trk->wave_cap * sizeof(smaf_wave_t));
    }
    trk->waves[trk->num_waves++] = *w;
}

/* Parse Setup Data (Mtsu) — extracts SysEx voice/wave data.

   SysEx format in Mtsu (go-smaf exclusive.go):
     [optional 0xFF padding] 0xF0 <length> <data: length-1 bytes> 0xF7

   go-smaf reads: length byte, then length-- (so data is length-1 bytes),
   then reads data, then reads 0xF7 terminator.

   Supports:
   - MA-3 VM3Exclusive: F0 <L> 43 79 06 7F 01 <bankM> <bankL> <pc> <drumNote> <voiceType> <raw_voice_data> F7
     raw_voice_data is 36 bytes of VM3Exclusive interleaved format (NO 7-bit encoding).
   - MA-5/7 lib format: F0 <L> 43 79 07 7F 01 <standard_voice_data> F7
     voice_data is in standard 31-byte (4-op) or 17-byte (2-op) format. */
static void parse_setup_data(smaf_track_t *trk, const uint8_t *data, int len) {
    int pos = 0;
    while (pos < len) {
        uint8_t b = data[pos++];

        /* Skip 0xFF padding bytes (go-smaf scoretrack_setupdata.go line 52-59) */
        if (b == 0xFF) continue;

        if (b != 0xF0) continue;

        if (pos >= len) break;
        uint8_t raw_len = data[pos++];

        /* Actual data length = raw_len - 1 (go-smaf: length--) */
        int msg_len = raw_len - 1;
        if (msg_len < 5) {
            pos += msg_len;
            if (pos < len && data[pos] == 0xF7) pos++;
            continue;
        }

        const uint8_t *msg = data + pos;

        /* Check Yamaha SMAF manufacturer ID: 43 79 XX 7F */
        if (msg_len >= 5 && msg[0] == 0x43 && msg[1] == 0x79 && msg[3] == 0x7F) {
            uint8_t dev_id = msg[2]; /* 06=MA-3, 07=MA-5/7 */

            if (dev_id == 0x06 && msg_len >= 10 && msg[4] == 0x01) {
                /* MA-3 VM3Exclusive voice assign:
                   43 79 06 7F 01 <bankM> <bankL> <pc> <drumNote> <voiceType> <raw_data...>
                   go-smaf exclusive.go line 109-128:
                     msg[5] = BankMSB
                     msg[6] = BankLSB
                     msg[7] = Program Change
                     msg[8] = DrumNote (0 = melodic)
                     msg[9] = VoiceType (0=FM, 1=PCM/WT, 2=AL)
                     msg[10:] = raw VM3Exclusive voice data (36 bytes for FM) */
                uint8_t pc = msg[7];
                uint8_t voice_type = msg[9];

                if (voice_type == 0 && msg_len >= 46) {
                    /* FM voice: expand VM3Exclusive interleaved format to standard 31 bytes */
                    int raw_voice_len = msg_len - 10;
                    if (raw_voice_len >= 36) {
                        uint8_t standard[31];
                        expand_vm3_exclusive(msg + 10, raw_voice_len, standard);

                        smaf_voice_t voice;
                        memset(&voice, 0, sizeof(voice));
                        voice.drum_key = msg[8];
                        decode_fm_voice(&voice, pc, standard, 31);
                        track_add_voice(trk, &voice);
                    }
                }
                /* Other voiceType (1=WT, 2=AL) not handled yet */
            }
            else if (dev_id == 0x07 && msg_len >= 5 && msg[4] == 0x01) {
                /* MA-5/MA-7 lib format: 43 79 07 7F 01 <standard_voice_data>
                   Data is already in standard 31-byte or 17-byte format */
                int vlen = msg_len - 5;
                if (vlen >= 17) {
                    smaf_voice_t voice;
                    memset(&voice, 0, sizeof(voice));
                    decode_fm_voice(&voice, 0, msg + 5, vlen);
                    track_add_voice(trk, &voice);
                }
            }
        }

        pos += msg_len;
        if (pos < len && data[pos] == 0xF7) pos++;
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

static void track_add_event(smaf_track_t *trk, const smaf_score_event_t *e) {
    if (trk->num_events >= trk->event_cap) {
        trk->event_cap = trk->event_cap ? trk->event_cap * 2 : 256;
        trk->events = realloc(trk->events, trk->event_cap * sizeof(smaf_score_event_t));
    }
    trk->events[trk->num_events++] = *e;
}

/* Parse Score track events (Format 2: MobileStandard / MA-3).
   Standard MIDI-like events with variable-length delta time. */
static void parse_score_format2(smaf_track_t *trk, const uint8_t *data, int len) {
    int pos = 0;
    uint32_t delta = 0;
    uint8_t last_vel[16] = {0};

    while (pos < len) {
        delta = read_varlen(data, &pos, len, true);
        if (pos >= len) break;

        uint8_t status = data[pos++];

        if (status == 0xFF) {
            if (pos >= len) break;
            uint8_t meta_type = data[pos++];
            if (pos >= len) break;
            int meta_len = (int)read_varlen(data, &pos, len, true);
            if (meta_type == 0x2F) break;
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
            case 0x90: /* Note On */
                if (pos >= len) break;
                evt.note = data[pos++];
                if (pos >= len) break;
                evt.velocity = data[pos++];
                last_vel[ch] = evt.velocity;
                evt.gate_time = read_varlen(data, &pos, len, true);
                break;

            case 0x80: /* Note On (reuse velocity) */
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
                if (pos < len && data[pos] == 0xF7) pos++;
                break;
            }

            case 0xD0: if (pos >= len) break; pos++; break;
            case 0xA0: if (pos + 1 >= len) break; pos += 2; break;

            default:
                continue;
        }

        track_add_event(trk, &evt);
    }
}

/* Parse Score track events (Format 0: HandyPhone / MA-1/MA-2).
   Compact CCOONNNN note encoding, 2/3-byte control events. */
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
                case 0x00: break; /* Fine Tune */
                case 0x01: /* Pitch Bend */
                    evt.type = EVT_PITCH_BEND | 0;
                    evt.channel = (ctrl_data >> 2) & 0x03;
                    evt.pitch_bend = 0x2000;
                    break;
                case 0x02: break; /* Modulation */
                case 0x03: /* Extended control */
                {
                    if (pos >= len) break;
                    uint8_t ext = data[pos++];
                    uint8_t ext_type = ext & 0x07;
                    uint8_t ext_val = (ext >> 3) & 0x1F;
                    uint8_t ch = ctrl_data & 0x03;
                    switch (ext_type) {
                        case 0x00:
                            evt.type = EVT_PC | ch;
                            evt.channel = ch;
                            evt.program = ext_val;
                            break;
                        case 0x01:
                            evt.type = EVT_CC | ch;
                            evt.channel = ch;
                            evt.cc_number = CC_VOLUME;
                            evt.cc_value = ext_val * 8;
                            break;
                        case 0x02:
                            evt.type = EVT_CC | ch;
                            evt.channel = ch;
                            evt.cc_number = CC_PAN;
                            evt.cc_value = ext_val * 8;
                            break;
                        case 0x03:
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
        } else if (b == 0xFF) {
            /* Exclusive or NOP (MegaGRRL NextEvent2_PlayS) */
            if (pos >= len) break;
            uint8_t b2 = data[pos++];
            if (b2 == 0x00) {
                track_add_event(trk, &evt); /* NOP */
            } else if (b2 == 0xF0) {
                /* Exclusive message: length byte, then skip data + F7 */
                if (pos >= len) break;
                uint8_t excl_len = data[pos++];
                pos += excl_len;
                if (pos < len && data[pos] == 0xF7) pos++;
            }
        } else {
            /* Note event: CCOONNNN
               MegaGRRL Note_ON2: bKey = ((oct + bType) * 12) + key
               bType default = 4 for melody. Then: if < 12 → 0, > 139 → 127, else -= 12 */
            uint8_t ch = (b >> 6) & 0x03;
            uint8_t oct = (b >> 4) & 0x03;
            uint8_t note_val = b & 0x0F;

            uint8_t midi_note = (uint8_t)(((oct + 4) * 12) + note_val);
            if (midi_note < 12)
                midi_note = 0;
            else if (midi_note > 139)
                midi_note = 127;
            else
                midi_note = (uint8_t)(midi_note - 12);

            evt.type = EVT_NOTE_ON | ch;
            evt.channel = ch;
            evt.note = midi_note;
            evt.velocity = 127;
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

    trk->format_type = data[0];
    trk->seq_type = data[1];
    trk->timebase_d = data[2];
    trk->timebase_g = data[3];

    int pos = 4;

    /* Channel status: 16 bytes for MA-3, 2 bytes for MA-1/2 */
    int ch_status_len = (trk->format_type == 0) ? 2 : 16;
    for (int i = 0; i < ch_status_len && pos < (int)chunk_size; i++) {
        trk->channel_status[i] = data[pos++];
    }

    /* Parse sub-chunks (Mtsu, Mtsq, Mtsp, Mwa) */
    while (pos + 8 <= (int)chunk_size) {
        uint32_t sig = read_be32(data + pos);
        uint32_t sub_size = read_be32(data + pos + 4);
        pos += 8;

        if (pos + (int)sub_size > (int)chunk_size) break;

        if (sig == 0x4D747375) { /* "Mtsu" */
            parse_setup_data(trk, data + pos, sub_size);
        } else if (sig == 0x4D747371) { /* "Mtsq" */
            if (trk->format_type == SCORE_FMT_MOBILE_STD)
                parse_score_format2(trk, data + pos, sub_size);
            else if (trk->format_type == SCORE_FMT_HANDYPHONE)
                parse_score_format0(trk, data + pos, sub_size);
        }

        pos += sub_size;
    }
}

static void parse_cnti(smaf_file_t *mf, const uint8_t *data, uint32_t len) {
    if (len < 6) return;
    uint8_t cnti_type = data[0];
    uint16_t str_len = read_be16(data + 4);
    const uint8_t *str_data = data + 6;
    if (str_len > len - 6) str_len = len - 6;

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

static void parse_chunks(smaf_file_t *mf, const uint8_t *data, uint32_t len, int depth) {
    uint32_t pos = 0;

    if (depth == 0) {
        mf->num_tracks = 0;
        int mtr_count = 0;
        uint32_t p = 0;
        while (p + 8 <= len) {
            uint32_t sig = read_be32(data + p);
            if ((sig & 0xFFFFFFF0) == 0x4D545200) mtr_count++;
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
                if ((sig & 0xFFFFFFF0) == 0x4D545200)
                    parse_mtr_chunk(mf, data + pos, sz);
                else
                    parse_chunks(mf, data + pos, sz, depth + 1);
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

    parse_chunks(mf, data + 8, (uint32_t)(len - 8), 0);
    return SMAF_OK;
}

void smaf_parse_free(smaf_file_t *mf) {
    for (int t = 0; t < mf->num_tracks; t++) {
        smaf_track_t *trk = &mf->tracks[t];
        free(trk->voices);
        for (int w = 0; w < trk->num_waves; w++)
            free(trk->waves[w].data);
        free(trk->waves);
        free(trk->events);
    }
    free(mf->tracks);
    for (int w = 0; w < mf->num_global_waves; w++)
        free(mf->global_waves[w].data);
    free(mf->global_waves);
    memset(mf, 0, sizeof(*mf));
}
