#include "seq.h"
#include <stdlib.h>
#include <string.h>

static void seq_process_event(seq_state_t *seq, const smaf_score_event_t *evt) {
    uint8_t ch = evt->channel;
    uint8_t type = evt->type & 0xF0;

    switch (type) {
        case 0x90: /* Note On with velocity */
        {
            if (ch >= 16) break;

            /* Allocate a synth channel */
            int fm_ch = smaf_fm_alloc_channel(seq->synth);

            if (fm_ch >= 0) {
                /* Apply voice parameters if program has a mapped voice */
                if (seq->voice_map[seq->program[ch]] >= 0) {
                    int vi = seq->voice_map[seq->program[ch]];
                    smaf_fm_set_voice(seq->synth, fm_ch,
                                      seq->track->voices[vi].raw,
                                      seq->track->voices[vi].raw_len);
                }

                smaf_fm_set_volume(seq->synth, fm_ch, seq->volume[ch]);
                smaf_fm_set_pan(seq->synth, fm_ch, seq->pan[ch]);
                smaf_fm_note_on(seq->synth, fm_ch, evt->note, evt->velocity);
            }

            /* Track active note for gate time */
            if (seq->num_active < SEQ_MAX_ACTIVE_NOTES) {
                seq_note_t *n = &seq->active_notes[seq->num_active++];
                n->active = true;
                n->channel = ch;
                n->note = evt->note;
                n->remaining_ticks = evt->gate_time;
                n->fm_ch = fm_ch;
                n->wt_ch = -1;
            }

            seq->last_velocity[ch] = evt->velocity;
            break;
        }

        case 0x80: /* Note On (reuse velocity) */
        {
            if (ch >= 16) break;
            int fm_ch = smaf_fm_alloc_channel(seq->synth);

            if (fm_ch >= 0) {
                if (seq->voice_map[seq->program[ch]] >= 0) {
                    int vi = seq->voice_map[seq->program[ch]];
                    smaf_fm_set_voice(seq->synth, fm_ch,
                                      seq->track->voices[vi].raw,
                                      seq->track->voices[vi].raw_len);
                }
                smaf_fm_set_volume(seq->synth, fm_ch, seq->volume[ch]);
                smaf_fm_set_pan(seq->synth, fm_ch, seq->pan[ch]);
                smaf_fm_note_on(seq->synth, fm_ch, evt->note, seq->last_velocity[ch]);
            }

            if (seq->num_active < SEQ_MAX_ACTIVE_NOTES) {
                seq_note_t *n = &seq->active_notes[seq->num_active++];
                n->active = true;
                n->channel = ch;
                n->note = evt->note;
                n->remaining_ticks = evt->gate_time;
                n->fm_ch = fm_ch;
                n->wt_ch = -1;
            }
            break;
        }

        case 0xB0: /* Control Change */
        {
            switch (evt->cc_number) {
                case CC_VOLUME:
                    seq->volume[ch] = evt->cc_value;
                    break;
                case CC_PAN:
                    seq->pan[ch] = evt->cc_value;
                    break;
                case CC_EXPRESSION:
                    /* Expression scales volume, not directly supported yet */
                    break;
                case CC_BANK_SELECT:
                    seq->bank[ch] = evt->cc_value;
                    break;
                case CC_ALL_NOTES_OFF:
                    /* Kill all notes on this channel */
                    for (int i = 0; i < seq->num_active; i++) {
                        if (seq->active_notes[i].channel == ch) {
                            if (seq->active_notes[i].fm_ch >= 0) {
                                smaf_fm_note_off(seq->synth, seq->active_notes[i].fm_ch);
                            }
                            if (seq->active_notes[i].wt_ch >= 0) {
                                smaf_wt_note_off(seq->synth, seq->active_notes[i].wt_ch);
                            }
                            seq->active_notes[i].active = false;
                        }
                    }
                    break;
            }
            break;
        }

        case 0xC0: /* Program Change */
        {
            seq->program[ch] = evt->program;
            break;
        }

        case 0xE0: /* Pitch Bend */
        {
            seq->pitch_bend[ch] = evt->pitch_bend;
            /* Apply pitch bend to active notes on this channel */
            for (int i = 0; i < seq->num_active; i++) {
                if (seq->active_notes[i].active &&
                    seq->active_notes[i].channel == ch &&
                    seq->active_notes[i].fm_ch >= 0) {
                    /* Pitch bend: center=0x2000, range ±2 semitones */
                    int32_t bend = (int32_t)evt->pitch_bend - 0x2000;
                    int32_t detune = (bend * 4) >> 14; /* ±4 cents */
                    seq->synth->fm[seq->active_notes[i].fm_ch].op[0].dt = (detune > 0) ? detune : 0;
                }
            }
            break;
        }

        case 0xF0: /* SysEx — skip in playback */
            break;
    }
}

static void seq_process_active_notes(seq_state_t *seq, uint32_t ticks_elapsed) {
    for (int i = 0; i < seq->num_active; i++) {
        seq_note_t *n = &seq->active_notes[i];
        if (!n->active) continue;

        if (ticks_elapsed >= n->remaining_ticks) {
            /* Gate time expired — note off */
            if (n->fm_ch >= 0) {
                smaf_fm_note_off(seq->synth, n->fm_ch);
            }
            if (n->wt_ch >= 0) {
                smaf_wt_note_off(seq->synth, n->wt_ch);
            }
            n->active = false;
        } else {
            n->remaining_ticks -= ticks_elapsed;
        }
    }

    /* Compact active notes array */
    int write = 0;
    for (int i = 0; i < seq->num_active; i++) {
        if (seq->active_notes[i].active) {
            if (write != i) seq->active_notes[write] = seq->active_notes[i];
            write++;
        }
    }
    seq->num_active = write;
}

void seq_init(seq_state_t *seq, smaf_synth_t *synth, const smaf_track_t *track, uint32_t sample_rate) {
    memset(seq, 0, sizeof(*seq));
    seq->synth = synth;
    seq->track = track;
    seq->playing = true;
    seq->end_of_track = false;

    /* Initialize channel state */
    for (int i = 0; i < 16; i++) {
        seq->volume[i] = 100;
        seq->pan[i] = 64;
        seq->program[i] = 0;
        seq->pitch_bend[i] = 0x2000;
    }

    /* Build voice map from track voices */
    for (int i = 0; i < 128; i++) seq->voice_map[i] = -1;
    for (int i = 0; i < track->num_voices; i++) {
        uint8_t prog = track->voices[i].prog;
        if (prog < 128) seq->voice_map[prog] = i;
    }

    /* Build wave map */
    for (int i = 0; i < 128; i++) seq->wave_map[i] = -1;
    for (int i = 0; i < track->num_waves; i++) {
        uint8_t prog = track->waves[i].prog;
        if (prog < 128) seq->wave_map[prog] = i;
    }

    /* Calculate timing: timebase → milliseconds per tick → samples per tick */
    uint32_t ms_per_tick;
    switch (track->timebase_d) {
        case 0x00: ms_per_tick = 1; break;
        case 0x01: ms_per_tick = 2; break;
        case 0x02: ms_per_tick = 4; break;
        case 0x03: ms_per_tick = 5; break;
        case 0x10: ms_per_tick = 10; break;
        case 0x11: ms_per_tick = 20; break;
        case 0x12: ms_per_tick = 40; break;
        case 0x13: ms_per_tick = 50; break;
        default:   ms_per_tick = 4; break;
    }
    /* samples_per_tick = ms_per_tick × sample_rate / 1000 */
    seq->samples_per_tick = (uint32_t)((uint64_t)ms_per_tick * sample_rate / 1000);

    /* If track has events, set next_tick to first event's delta_time */
    if (track->num_events > 0) {
        seq->next_tick = track->events[0].delta_time;
    } else {
        seq->end_of_track = true;
    }
}

void seq_advance(seq_state_t *seq, int n_samples) {
    if (!seq->playing || seq->end_of_track) return;

    seq->sample_counter += n_samples;
    uint32_t ticks_this_advance = 0;

    /* Convert samples to ticks */
    while (seq->sample_counter >= seq->samples_per_tick) {
        seq->sample_counter -= seq->samples_per_tick;
        seq->tick_counter++;
        ticks_this_advance++;

        /* Process any events at this tick */
        while (seq->event_pos < seq->track->num_events) {
            const smaf_score_event_t *evt = &seq->track->events[seq->event_pos];

            if (evt->delta_time <= seq->tick_counter) {
                seq_process_event(seq, evt);
                seq->event_pos++;
            } else {
                break;
            }
        }

        /* Check end of track */
        if (seq->event_pos >= seq->track->num_events) {
            if (seq->num_active == 0) {
                seq->end_of_track = true;
                return;
            }
        }
    }

    /* Process gate time for active notes */
    if (ticks_this_advance > 0) {
        seq_process_active_notes(seq, ticks_this_advance);
    }

    /* Check if all notes have finished after last event */
    if (seq->event_pos >= seq->track->num_events && seq->num_active == 0) {
        seq->end_of_track = true;
    }
}

bool seq_is_done(const seq_state_t *seq) {
    return seq->end_of_track;
}
