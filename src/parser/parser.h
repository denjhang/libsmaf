#ifndef PARSER_H
#define PARSER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "../smaf_common.h"

/* SMAF chunk types */
#define SMAF_CHUNK_MMMD  0x4D4D4D44  /* "MMMD" */
#define SMAF_CHUNK_CNTI  0x434E5449  /* "CNTI" */
#define SMAF_CHUNK_OPDA  0x4F504441  /* "OPDA" */
#define SMAF_CHUNK_MTR   0x4D545200  /* "MTR0"-"MTRf" */
#define SMAF_CHUNK_MTSQ  0x4D747371  /* "Mtsq" */
#define SMAF_CHUNK_MTSU  0x4D747375  /* "Mtsu" */
#define SMAF_CHUNK_MMMG  0x4D4D4D47  /* "MMMG" */
#define SMAF_CHUNK_MWA   0x4D776100  /* "Mwa* " wave chunks */

/* Score format types */
#define SCORE_FMT_HANDYPHONE  0
#define SCORE_FMT_MOBILE_CMP  1
#define SCORE_FMT_MOBILE_STD  2

/* Event types */
#define EVT_NOTE_ON    0x90
#define EVT_NOTE_OFF   0x80
#define EVT_CC         0xB0
#define EVT_PC         0xC0
#define EVT_PITCH_BEND 0xE0
#define EVT_SYSEX      0xF0
#define EVT_END_TRACK  0xFF

/* CC numbers */
#define CC_VOLUME     7
#define CC_PAN       10
#define CC_EXPRESSION 11
#define CC_BANK_SELECT 0
#define CC_MODULATION  1
#define CC_SUSTAIN    64
#define CC_ALL_NOTES_OFF 123

/* Parsed FM voice (from Setup Data SysEx) */
typedef struct {
    uint8_t  prog;           /* program number */
    uint8_t  alg;            /* algorithm 0-7 */
    uint8_t  fb;             /* feedback 0-7 */
    uint8_t  panpot;         /* 0-31 */
    uint8_t  lfo;            /* LFO setting */
    uint8_t  bo;             /* basic octave */
    uint8_t  num_ops;        /* 2 or 4 operators */
    uint8_t  drum_key;       /* drum note number (0 = melodic) */
    uint8_t  voice_type;     /* 0=FM, 1=WT/PCM, 2=AL */
    uint8_t  raw[31];        /* raw voice data */
    uint8_t  raw_len;        /* 17 or 31 */
} smaf_voice_t;

/* Parsed wave/PCM data */
typedef struct {
    uint8_t  prog;
    uint8_t  type;           /* 0=raw 8-bit, 2=8->16 signed, 4=8->16 unsigned */
    uint8_t  *data;          /* decoded wave data (allocated) */
    uint32_t data_len;       /* length in samples */
    uint8_t  bits;           /* 8 or 16 */
} smaf_wave_t;

/* Parsed score event */
typedef struct {
    uint32_t delta_time;     /* ticks before this event */
    uint8_t  type;           /* event type (0x80, 0x90, 0xB0, 0xC0, 0xE0, 0xF0) */
    uint8_t  channel;        /* channel 0-15 */
    uint8_t  note;           /* note number (for note events) */
    uint8_t  velocity;       /* velocity (for note on) */
    uint8_t  cc_number;      /* CC number (for CC events) */
    uint8_t  cc_value;       /* CC value */
    uint8_t  program;        /* program number (for PC) */
    uint16_t pitch_bend;     /* 14-bit pitch bend */
    uint32_t gate_time;      /* gate time in ticks (note duration) */
    uint8_t  sysex_len;      /* sysex data length */
    uint8_t  sysex_data[64]; /* sysex data */
} smaf_score_event_t;

/* Parsed MTR track */
typedef struct {
    uint8_t  format_type;    /* 0, 1, or 2 */
    uint8_t  timebase_d;     /* duration timebase */
    uint8_t  timebase_g;     /* gate time timebase */
    uint8_t  seq_type;
    uint8_t  channel_status[16]; /* per-channel status byte */

    smaf_voice_t    *voices;     /* extracted FM voices */
    int             num_voices;
    int             voice_cap;

    smaf_wave_t     *waves;      /* extracted wave data */
    int             num_waves;
    int             wave_cap;

    smaf_score_event_t *events;  /* score events */
    int             num_events;
    int             event_cap;
} smaf_track_t;

/* Parsed MMF file */
typedef struct {
    uint8_t  *data;          /* pointer to original file data (not owned) */
    uint32_t data_len;

    /* CNTI info */
    char     title[128];
    char     artist[128];
    char     genre[64];

    /* Tracks */
    smaf_track_t *tracks;
    int         num_tracks;

    /* Global waves (from MMMG) */
    smaf_wave_t *global_waves;
    int         num_global_waves;
} smaf_file_t;

/* Parse an MMF file from memory. Does not take ownership of data. */
smaf_result_t smaf_parse(smaf_file_t *mf, const uint8_t *data, size_t len);

/* Free parsed file resources (does not free the file_t itself) */
void smaf_parse_free(smaf_file_t *mf);

/* Read big-endian 32-bit from buffer */
static inline uint32_t read_be32(const uint8_t *p) {
    return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) |
           ((uint32_t)p[2] << 8) | p[3];
}

/* Read big-endian 16-bit */
static inline uint16_t read_be16(const uint8_t *p) {
    return ((uint16_t)p[0] << 8) | p[1];
}

#endif /* PARSER_H */
