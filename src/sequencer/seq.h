#ifndef SEQ_H
#define SEQ_H

#include <stdint.h>
#include <stdbool.h>
#include "../parser/parser.h"
#include "../synth/synth.h"

/* Active note tracking for gate time */
typedef struct {
    bool     active;
    uint8_t  channel;
    uint8_t  note;
    uint32_t remaining_ticks; /* gate time remaining */
    int      fm_ch;           /* which FM channel is playing this note (-1 if none) */
    int      wt_ch;           /* which WT channel is playing this note */
} seq_note_t;

#define SEQ_MAX_ACTIVE_NOTES 32

/* Sequencer state */
typedef struct {
    smaf_synth_t     *synth;
    const smaf_track_t *track;

    int              event_pos;      /* current position in event array */
    uint32_t         tick_counter;   /* current tick position */
    uint32_t         tick_accum;     /* fractional tick accumulator for sub-tick timing */
    uint32_t         next_tick;      /* tick at which next event fires */
    uint32_t         samples_per_tick; /* derived from timebase and sample rate */
    uint32_t         sample_counter; /* samples elapsed since last tick */
    uint32_t         ticks_per_sample_q16; /* fixed-point ticks per sample (16.16) */
    uint32_t         sample_remainder; /* for accurate tick timing */

    bool             playing;
    bool             end_of_track;

    /* Active note tracking */
    seq_note_t       active_notes[SEQ_MAX_ACTIVE_NOTES];
    int              num_active;

    /* Channel state */
    uint8_t          last_velocity[16];
    uint8_t          program[16];     /* current program per channel */
    uint8_t          volume[16];      /* volume per channel (0-127) */
    uint8_t          pan[16];         /* pan per channel (0-127) */
    uint16_t         pitch_bend[16];  /* pitch bend per channel */
    uint8_t          bank[16];        /* bank select per channel */

    /* Voice mapping: program → voice index in track */
    int              voice_map[128];  /* -1 if no voice loaded */
    int              num_voices_mapped;

    /* Wave mapping */
    int              wave_map[128];   /* -1 if no wave */
} seq_state_t;

/* Initialize sequencer for a track */
void seq_init(seq_state_t *seq, smaf_synth_t *synth, const smaf_track_t *track, uint32_t sample_rate);

/* Advance sequencer by n_samples. Returns 0 when done. */
void seq_advance(seq_state_t *seq, int n_samples);

/* Check if sequencer has reached end of track */
bool seq_is_done(const seq_state_t *seq);

#endif /* SEQ_H */
