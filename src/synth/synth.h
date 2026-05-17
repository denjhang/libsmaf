#ifndef SYNTH_H
#define SYNTH_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifndef SMAF_MAX_FM_CHANNELS
#define SMAF_MAX_FM_CHANNELS   16
#endif
#ifndef SMAF_MAX_WT_CHANNELS
#define SMAF_MAX_WT_CHANNELS    8
#endif

#define WAVE_SIZE       1024
#define WAVE_SIZE_BITS  10
#define PHASE_BITS      32
#define PHASE_FRAC      32  /* phase is 0..2^32-1 representing 0..1.0 full cycle */

/* FM operator */
typedef struct {
    uint32_t phase;          /* Q32 phase accumulator (0 = start of waveform) */
    uint32_t phase_inc;      /* phase increment per sample */
    const int16_t *wave;     /* waveform table pointer (1024 entries, int16_t) */

    /* Envelope — uses dB-domain exponential approach matching fmfm.core */
    int32_t  current_level;  /* Q15 linear amplitude (0..32767) */
    int32_t  tl_coef;        /* Q15 linear TL coefficient (0..32767, pre-computed from TL dB) */
    int32_t  ksl_tl_coef;    /* Q15 linear KSL*TL coefficient */
    int32_t  sustain_level;  /* Q15 linear sustain level */
    int32_t  ar_inc;         /* attack: linear increment per sample toward 32767 */
    int32_t  dr_coef;        /* decay: Q15 multiplier per sample (decay rate) */
    int32_t  sr_coef;        /* sustain: Q15 multiplier per sample */
    int32_t  rr_coef;        /* release: Q15 multiplier per sample */

    uint8_t  tl;             /* raw TL register (0-63) */
    uint8_t  ar;             /* raw AR register (0-15) */
    uint8_t  dr;             /* raw DR register (0-15) */
    uint8_t  sr;             /* raw SR register (0-15) */
    uint8_t  rr;             /* raw RR register (0-15) */
    uint8_t  sl;             /* raw SL register (0-15) */
    uint8_t  ksl;            /* key scale level (0-3) */
    uint8_t  ksr;            /* key scale rate (0-1) */
    uint8_t  multi;          /* frequency multiplier (0-15) */
    uint8_t  dt;             /* detune (0-7) */
    uint8_t  fb;             /* feedback (0-7) — only used for op[0] and op[2] */
    uint8_t  ws;             /* waveform select */
    uint8_t  am;             /* AM (tremolo) enable */
    uint8_t  vb;             /* vibrato enable */
    uint8_t  xof;            /* key off enable (0=keyOff works, 1=keyOff ignored) */

    int32_t  output;         /* current operator output */
    bool     active;         /* operator is sounding */
    uint8_t  eg_stage;       /* 0=off, 1=attack, 2=decay, 3=sustain, 4=release */
} smaf_fm_op_t;

/* FM channel — 4 operators */
typedef struct {
    bool     active;
    bool     keyon;
    uint8_t  algorithm;      /* 0-7 */
    uint8_t  note;
    uint8_t  velocity;
    uint8_t  panpot;
    uint8_t  feedback;       /* 0-7, channel-level feedback */
    uint8_t  bo;             /* beat offset (0-1) */
    int16_t  pan_L;          /* Q15 */
    int16_t  pan_R;          /* Q15 */
    uint8_t  volume;         /* 0-127 */
    uint8_t  expression;     /* 0-127 */
    int32_t  attenuation;    /* Q15 pre-computed vol*exp*vel attenuation */

    smaf_fm_op_t op[4];
    int32_t  fb_state1;      /* feedback accumulator for op[0] (previous sample) */
    int32_t  fb_state1_cur;  /* feedback accumulator for op[0] (current sample) */
    int32_t  fb_out1;        /* blended feedback output for op[0] */
    int32_t  fb_state3;      /* feedback accumulator for op[2] */
    int32_t  fb_state3_cur;
    int32_t  fb_out3;        /* blended feedback output for op[2] */
    int16_t  fb_blend_prev;  /* Q15 feedback blend factor (previous) */
    int16_t  fb_blend_curr;  /* Q15 feedback blend factor (current) */
    int32_t  feedback_coef1; /* Q15 feedback coefficient for op[0] */
    int32_t  feedback_coef3; /* Q15 feedback coefficient for op[2] */
} smaf_fm_channel_t;

/* WT (wave table) channel */
typedef struct {
    bool     active;
    bool     keyon;
    const int8_t *wave;
    uint32_t wave_len;
    uint32_t phase;          /* 16.16 fixed point */
    uint32_t phase_inc;
    int16_t  volume;
    int16_t  pan_L;
    int16_t  pan_R;
    int16_t  level;
} smaf_wt_channel_t;

/* ADPCM state for stream decoding */
typedef struct {
    int16_t  predictor;
    uint16_t step;
} smaf_adpcm_state_t;

/* Synth instance */
typedef struct {
    uint32_t sample_rate;
    smaf_fm_channel_t fm[SMAF_MAX_FM_CHANNELS];
    smaf_wt_channel_t wt[SMAF_MAX_WT_CHANNELS];
} smaf_synth_t;

/* --- Tables --- */
void smaf_synth_init_tables(uint32_t sample_rate);
const int16_t *smaf_fm_get_wave(int ws);
uint32_t smaf_get_note_phase(uint8_t note);
const int16_t *smaf_get_sine_table(void);

/* Feedback coefficient table: Q15 fixed-point */
extern int32_t smaf_feedback_table[8];
/* Volume attenuation table: Q15 (indexed by vol>>2, 0-31) */
extern int32_t smaf_volume_table[32];
/* TL coefficient table: Q15 (indexed by TL 0-63) */
extern int32_t smaf_tl_table[64];
/* SL coefficient table: Q15 (indexed by SL 0-15) */
extern int32_t smaf_sl_table[16];
/* KSL table: Q15 [ksl=0-3][block=0-7][fnum>>5=0-31] */
extern int32_t smaf_ksl_table[4][8][32];
/* DT coefficient table: Q15 for frequency offset [dt=0-7][ksn=0-15] */
extern int32_t smaf_dt_table[8][16];
/* MULTI table: pre-scaled phase multipliers (mult * 2) */
extern const uint32_t smaf_mult_table[16];
/* Pan table: Q15 [pan=0-127][L/R] */
extern int16_t smaf_pan_table[128][2];
/* Decay rate base: amplitude dB per second at rate=4 for [ksr=0-1][ksn=0-15] */
extern const double smaf_decay_db_at4_f[2][16];
/* Attack time at rate=1: seconds for [ksr=0-1][ksn=0-8] */
extern const double smaf_attack_time_at1_f[2][9];

/* --- Noise --- */
int16_t smaf_noise_generate(void);
void smaf_noise_seed(uint32_t seed);

/* --- ADPCM --- */
void smaf_adpcm_decode_init(smaf_adpcm_state_t *st);
int16_t smaf_adpcm_decode_nibble(smaf_adpcm_state_t *st, uint8_t nibble);

/* --- Synth --- */
void smaf_synth_init(smaf_synth_t *synth, uint32_t sample_rate);
void smaf_synth_shutdown(smaf_synth_t *synth);
void smaf_synth_render(smaf_synth_t *synth, int32_t *out_L, int32_t *out_R, int n_samples);

int smaf_fm_alloc_channel(smaf_synth_t *synth);
void smaf_fm_note_on(smaf_synth_t *synth, int ch, uint8_t note, uint8_t velocity);
void smaf_fm_note_off(smaf_synth_t *synth, int ch);
void smaf_fm_set_voice(smaf_synth_t *synth, int ch, const uint8_t *params, int len);
void smaf_fm_set_volume(smaf_synth_t *synth, int ch, uint8_t vol);
void smaf_fm_set_pan(smaf_synth_t *synth, int ch, uint8_t pan);
void smaf_fm_set_expression(smaf_synth_t *synth, int ch, uint8_t val);
void smaf_fm_set_velocity(smaf_synth_t *synth, int ch, uint8_t vel);

int smaf_wt_note_on(smaf_synth_t *synth, const int8_t *wave, uint32_t wave_len,
                    uint8_t note, uint8_t velocity, uint8_t pan);
void smaf_wt_note_off(smaf_synth_t *synth, int ch);

#endif /* SYNTH_H */
