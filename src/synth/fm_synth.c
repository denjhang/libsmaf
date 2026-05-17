#include "synth.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* EG stages */
#define EG_OFF      0
#define EG_ATTACK   1
#define EG_DECAY    2
#define EG_SUSTAIN  3
#define EG_RELEASE  4

/* Epsilon: 1/32768 in Q15 */
#define EG_EPSILON  1

/* Modulator multiplier from fmfm.core: modulator output * 4.0 before feeding */
#define MOD_MULT_Q15 131072  /* 4.0 * 32768 */

/* ---- Helper: compute KSL*TL coefficient ---- */
static void update_ksl_tl(smaf_fm_op_t *op, int fnum, int block, int bo) {
    int blkbo = block + 1 - bo;
    if (blkbo < 0) blkbo = 0;
    else if (blkbo > 7) blkbo = 7;
    int fnum5 = fnum >> 5;
    if (fnum5 > 31) fnum5 = 31;
    if (op->ksl > 3) op->ksl = 0;
    int32_t ksl = smaf_ksl_table[op->ksl][blkbo][fnum5];
    /* ksl_tl = ksl * tl / 32767 (Q15 multiply) */
    op->ksl_tl_coef = (int32_t)((int64_t)ksl * op->tl_coef >> 15);
}

/* ---- Helper: compute envelope rates ---- */
static void update_envelope_rates(smaf_fm_op_t *op, int ksn, uint32_t sample_rate) {
    int ksr_idx = op->ksr ? 1 : 0;

    /* Attack: linear ramp from 0 to 1.0 (32767 in Q15)
       fmfm.core setActualAR:
         ksn_for_ar = (keyScaleNumber >> 1) + (keyScaleNumber & 1)  // maps 0-15 to 0-8
         sec = attackTimeSecAt1[ksr][ksn_for_ar] / 2^(ar-1)
         arDiffPerSample = 1.0 / (sec * sampleRate) */
    if (op->ar <= 0) {
        op->ar_inc = 0;
    } else {
        int ksn_ar = (ksn >> 1) + (ksn & 1);
        if (ksn_ar > 8) ksn_ar = 8;
        double at1 = smaf_attack_time_at1_f[ksr_idx][ksn_ar];
        double sec = at1 / pow(2.0, op->ar - 1);
        if (sec < 1e-9) sec = 1e-9;
        double inc = 1.0 / (sec * (double)sample_rate);
        op->ar_inc = (int32_t)(inc * 32767.0);
        if (op->ar_inc < 1) op->ar_inc = 1;
    }

    /* Decay/Sustain/Release: exponential decay
       fmfm.core setActualDR/SR/RR:
         dbPerSecAt4 = decayDBPerSecAt4[ksr][keyScaleNumber] / 2.0
         dbPerSample = dbPerSecAt4 * 2^rate / 16.0 / sampleRate
         coef = 10^(-dbPerSample / 10)
       The /2 converts amplitude dB to energy dB; /10 converts energy dB to linear.
       Result equals 10^(-amplitude_db_per_sample / 20) as amplitude multiplier. */
    if (ksn > 15) ksn = 15;

    {
        uint8_t rates[3] = {op->dr, op->sr, op->rr};
        int32_t *coefs[3] = {&op->dr_coef, &op->sr_coef, &op->rr_coef};
        for (int r = 0; r < 3; r++) {
            uint8_t rate = rates[r];
            if (rate == 0) { *coefs[r] = 32767; continue; }
            double db_at4 = smaf_decay_db_at4_f[ksr_idx][ksn] / 2.0;
            double db_per_sample = db_at4 * pow(2.0, (double)rate) / 16.0 / (double)sample_rate;
            double coef_d = pow(10.0, -db_per_sample / 10.0);
            *coefs[r] = (int32_t)(coef_d * 32767.0);
            if (*coefs[r] < 1) *coefs[r] = 1;
            if (*coefs[r] > 32767) *coefs[r] = 32767;
        }
    }
}

/* ---- Per-operator envelope: advance one sample ---- */
static inline int32_t op_get_envelope(smaf_fm_op_t *op) {
    int32_t result;

    switch (op->eg_stage) {
    case EG_ATTACK:
        op->current_level += op->ar_inc;
        if (op->current_level >= 32767) {
            op->current_level = 32767;
            op->eg_stage = EG_DECAY;
            /* Fall through to decay */
        } else {
            break;
        }
        /* fallthrough */
    case EG_DECAY:
        if (op->sustain_level < op->current_level) {
            /* current_level = current_level * dr_coef / 32767 */
            op->current_level = (int32_t)((int64_t)op->current_level * op->dr_coef >> 15);
            break;
        }
        op->eg_stage = EG_SUSTAIN;
        /* fallthrough */
    case EG_SUSTAIN:
        if (op->sr_coef >= 32766) {
            /* SR=0: no decay in sustain, stay at current level */
            break;
        }
        if (op->current_level > EG_EPSILON) {
            op->current_level = (int32_t)((int64_t)op->current_level * op->sr_coef >> 15);
        } else {
            op->current_level = 0;
            op->eg_stage = EG_OFF;
        }
        break;

    case EG_RELEASE:
        if (op->current_level > EG_EPSILON) {
            op->current_level = (int32_t)((int64_t)op->current_level * op->rr_coef >> 15);
        } else {
            op->current_level = 0;
            op->eg_stage = EG_OFF;
        }
        break;

    case EG_OFF:
    default:
        return 0;
    }

    result = op->current_level;
    /* Apply KSL*TL attenuation: result *= ksl_tl / 32767 */
    result = (int32_t)((int64_t)result * op->ksl_tl_coef >> 15);
    return result;
}

/* ---- Single operator: advance phase, get envelope, return output ---- */
static inline int32_t op_next(smaf_fm_op_t *op, int32_t modulator) {
    /* Advance phase */
    op->phase += op->phase_inc;

    /* Check if operator is off */
    if (op->eg_stage == EG_OFF) return 0;

    /* Get envelope */
    int32_t env = op_get_envelope(op);

    /* Wave table lookup with modulation
       fmfm.core: sampleIndex = uint64(phaseFrac64) >> WaveformIndexShift
       sampleIndex += uint64((modulator + WaveformLen) * WaveformLen)
       return Waveforms[ws][sampleIndex & 1023] * envelope
       modulator in fmfm.core is float, in Q15 for us.
       modulator range: -32768..32767 → maps to waveform index offset.
       (modulator + WaveLen) shifts to positive, *WaveLen scales.
       In our Q15 space: mod_offset = (modulator + 32768) * WAVE_SIZE >> 15
       but we need to match the exact wrapping behavior. */
    uint32_t phase_idx = op->phase >> (PHASE_BITS - WAVE_SIZE_BITS); /* top 10 bits */
    if (modulator != 0) {
        /* Match fmfm.core: (modulator + WaveformLen) * WaveformLen
           modulator is Q15 (-32768..32767), WaveformLen=1024
           (mod + 1024) * 1024 wraps around, then mask with 1023
           We scale modulator to the same range as float modulator:
           float mod range ≈ -1.0 to 1.0, ours is -32768 to 32767 */
        int64_t mod_scaled = ((int64_t)modulator + WAVE_SIZE) * WAVE_SIZE;
        phase_idx = (phase_idx + (uint32_t)(mod_scaled)) & (WAVE_SIZE - 1);
    }

    if (!op->wave) return 0;
    int32_t wave_val = op->wave[phase_idx & (WAVE_SIZE - 1)];

    /* Apply envelope */
    return (int32_t)((int64_t)wave_val * env >> 15);
}

/* ---- Channel key on/off helpers ---- */
static void channel_key_on(smaf_fm_channel_t *ch) {
    if (ch->keyon) return;
    ch->keyon = true;
    for (int i = 0; i < 4; i++) {
        smaf_fm_op_t *op = &ch->op[i];
        if (op->ar > 0) {
            op->eg_stage = EG_ATTACK;
        } else {
            op->eg_stage = EG_OFF;
        }
        op->current_level = 0;
        op->phase = 0;
    }
}

static void channel_key_off(smaf_fm_channel_t *ch) {
    if (!ch->keyon) return;
    ch->keyon = false;
    for (int i = 0; i < 4; i++) {
        smaf_fm_op_t *op = &ch->op[i];
        if (op->eg_stage != EG_OFF && op->xof == 0) {
            op->eg_stage = EG_RELEASE;
        }
    }
}

/* Check if channel is completely silent (all carriers in EG_OFF) */
static bool channel_is_off(smaf_fm_channel_t *ch) {
    /* Carrier matrix matching fmfm.core CarrierMatrix exactly */
    static const uint8_t carrier_mat[8][4] = {
        {0,1,0,0}, {1,1,0,0}, {1,1,1,1}, {0,0,0,1},
        {0,0,0,1}, {0,1,0,1}, {1,0,0,1}, {1,0,1,1},
    };
    for (int i = 0; i < 4; i++) {
        if (carrier_mat[ch->algorithm][i] && ch->op[i].eg_stage != EG_OFF)
            return false;
    }
    return true;
}

/* ---- Channel render: one sample, returns (L, R) as Q15 ---- */
static inline void channel_next(smaf_fm_channel_t *ch, int32_t *out_L, int32_t *out_R) {
    smaf_fm_op_t *op1 = &ch->op[0];
    smaf_fm_op_t *op2 = &ch->op[1];
    smaf_fm_op_t *op3 = &ch->op[2];
    smaf_fm_op_t *op4 = &ch->op[3];

    int32_t op1out = 0, op2out = 0, op3out = 0, op4out = 0;
    int32_t result = 0;

    /* Feedback for op[0] — fmfm.core: feedbackOut = prev*blendPrev + curr*blendCurr
       where blendCurr = 0.5 * 48000/sampleRate, clamped to 1.0 */
    int32_t fb1 = 0;
    if (ch->feedback_coef1 != 0) {
        fb1 = ch->fb_out1;
    }
    /* Feedback for op[2] (4-op algorithms 5,7) */
    int32_t fb3 = 0;
    if (ch->feedback_coef3 != 0) {
        fb3 = ch->fb_out3;
    }

    switch (ch->algorithm) {
    case 0:
        /* (FB)1 -> 2 -> OUT */
        if (op2->eg_stage == EG_OFF) break;
        op1out = op_next(op1, fb1);
        result = op_next(op2, (int32_t)((int64_t)op1out * MOD_MULT_Q15 >> 15));
        break;

    case 1:
        /* (FB)1 -> | -> OUT
              2 -> | */
        if (op1->eg_stage == EG_OFF && op2->eg_stage == EG_OFF) break;
        op1out = op_next(op1, fb1);
        op2out = op_next(op2, 0);
        result = op1out + op2out;
        break;

    case 2:
        /* (FB)1 -> | -> OUT
              2 -> |
           (FB)3 -> |
              4 -> | */
        if (op1->eg_stage == EG_OFF && op2->eg_stage == EG_OFF &&
            op3->eg_stage == EG_OFF && op4->eg_stage == EG_OFF) break;
        op1out = op_next(op1, fb1);
        op2out = op_next(op2, 0);
        op3out = op_next(op3, fb3);
        op4out = op_next(op4, 0);
        result = op1out + op2out + op3out + op4out;
        break;

    case 3:
        /* (FB)1 ------> | -> 4 -> OUT
              2 -> 3 -> | */
        if (op4->eg_stage == EG_OFF) break;
        op1out = op_next(op1, fb1);
        op2out = op_next(op2, 0);
        op3out = op_next(op3, (int32_t)((int64_t)op2out * MOD_MULT_Q15 >> 15));
        result = op_next(op4, (int32_t)((int64_t)(op1out + op3out) * MOD_MULT_Q15 >> 15));
        break;

    case 4:
        /* (FB)1 -> 2 -> 3 -> 4 -> OUT */
        if (op4->eg_stage == EG_OFF) break;
        op1out = op_next(op1, fb1);
        op2out = op_next(op2, (int32_t)((int64_t)op1out * MOD_MULT_Q15 >> 15));
        op3out = op_next(op3, (int32_t)((int64_t)op2out * MOD_MULT_Q15 >> 15));
        result = op_next(op4, (int32_t)((int64_t)op3out * MOD_MULT_Q15 >> 15));
        break;

    case 5:
        /* (FB)1 -> 2 -> | -> OUT
           (FB)3 -> 4 -> | */
        if (op2->eg_stage == EG_OFF && op4->eg_stage == EG_OFF) break;
        op1out = op_next(op1, fb1);
        op2out = op_next(op2, (int32_t)((int64_t)op1out * MOD_MULT_Q15 >> 15));
        op3out = op_next(op3, fb3);
        op4out = op_next(op4, (int32_t)((int64_t)op3out * MOD_MULT_Q15 >> 15));
        result = op2out + op4out;
        break;

    case 6:
        /* (FB)1 -----------> | -> OUT
              2 -> 3 -> 4 -> | */
        if (op1->eg_stage == EG_OFF && op4->eg_stage == EG_OFF) break;
        op1out = op_next(op1, fb1);
        op2out = op_next(op2, 0);
        op3out = op_next(op3, (int32_t)((int64_t)op2out * MOD_MULT_Q15 >> 15));
        op4out = op_next(op4, (int32_t)((int64_t)op3out * MOD_MULT_Q15 >> 15));
        result = op1out + op4out;
        break;

    case 7:
        /* (FB)1 ------> | -> OUT
              2 -> 3 -> |
              4 ------> | */
        if (op1->eg_stage == EG_OFF && op3->eg_stage == EG_OFF &&
            op4->eg_stage == EG_OFF) break;
        op1out = op_next(op1, fb1);
        op2out = op_next(op2, 0);
        op3out = op_next(op3, (int32_t)((int64_t)op2out * MOD_MULT_Q15 >> 15));
        op4out = op_next(op4, 0);
        result = op1out + op3out + op4out;
        break;
    }

    /* Update feedback state — fmfm.core pattern:
       feedbackPrev = feedbackCurr
       feedbackCurr = opNout * feedbackCoef
       feedbackOut = feedbackPrev * blendPrev + feedbackCurr * blendCurr */
    if (ch->feedback_coef1 != 0) {
        ch->fb_state1 = ch->fb_state1_cur;
        ch->fb_state1_cur = (int32_t)((int64_t)op1out * ch->feedback_coef1 >> 15);
        ch->fb_out1 = (int32_t)((int64_t)ch->fb_state1 * ch->fb_blend_prev >> 15)
                    + (int32_t)((int64_t)ch->fb_state1_cur * ch->fb_blend_curr >> 15);
    }
    if (ch->feedback_coef3 != 0) {
        ch->fb_state3 = ch->fb_state3_cur;
        ch->fb_state3_cur = (int32_t)((int64_t)op3out * ch->feedback_coef3 >> 15);
        ch->fb_out3 = (int32_t)((int64_t)ch->fb_state3 * ch->fb_blend_prev >> 15)
                    + (int32_t)((int64_t)ch->fb_state3_cur * ch->fb_blend_curr >> 15);
    }

    /* Apply channel attenuation (volume * expression * velocity) */
    result = (int32_t)((int64_t)result * ch->attenuation >> 15);

    /* Apply pan */
    *out_L += (int32_t)((int64_t)result * ch->pan_L >> 15);
    *out_R += (int32_t)((int64_t)result * ch->pan_R >> 15);
}

/* ---- Compute fnum/block from MIDI note + pitch ---- */
static void compute_fnum_block(uint8_t note, int pitch, uint32_t sample_rate,
                               int *out_fnum, int *out_block) {
    /* fmfm.core: freq = 440 * 2^((note-57) + (pitch-64)/32) / 12)
       A3 = note 57 in fmfm.core (MIDI note 57 = A3)
       But MIDI standard: A4 = note 69 = 440Hz
       fmfm.core uses A3Note = 9 + 12*4 = 57 → A3 = 440Hz?? No, that's A3 = 220Hz
       Wait: A3Note = 57, A3Freq = 440.0
       In MIDI, note 57 is A3 (220Hz). But they set A3Freq = 440.
       Let me check: fmfm.core: n = float64(note-A3Note) + float64(pitch-64)/32.0
       freq = A3Freq * 2^(n/12)
       If note=69 (A4), n = 69-57 = 12, freq = 440 * 2^(12/12) = 880Hz?? That's A5!
       Hmm, that seems wrong. Let me look again...
       Actually A3Note = 9 + 12*4 = 57. In standard MIDI, note 57 = A3 = 220Hz.
       But A3Freq = 440.0. So with note=69 (A4=440Hz):
       n = 69-57 + (64-64)/32 = 12
       freq = 440 * 2^(12/12) = 880Hz
       That's wrong for MIDI. Unless their MIDI note numbering is different?
       Or maybe the controller.go converts MIDI notes differently.
       Looking at writeFrequency: n = float64(note-ymfdata.A3Note) + float64(pitch-64)/32.0
       With note=69, A3Note=57: n=12, freq=440*2=880Hz.
       But A4 should be 440Hz. So either A3Note should be 69, or A3Freq should be 220.
       Actually in some Japanese synth conventions, A3=440Hz (Yamaha convention where A3=A440).
       So for our implementation, we should use A4=440Hz, MIDI note 69.
       Let me adjust: our note 69 should give 440Hz.
       n = note - 69 + (pitch-64)/32
       freq = 440 * 2^(n/12) */

    double n = (double)(note - 69) + (double)(pitch - 64) / 32.0;
    double freq = 440.0 * pow(2.0, n / 12.0);

    int block = (note + 3 - 12) / 12;  /* Note: fmfm uses (note+3-12)/12 */
    if (block < 0) block = 0;
    else if (block > 7) block = 7;

    /* FNUMCoef = (1<<19) / 48000 * 0.5 = 5.49164...
       But we're not at 48kHz. Adapt: FNUMCoef = (1<<19) / sample_rate * 0.5
       fnumF64 = freq * FNUMCoef
       fnum = (int)(fnumF64 * 2 + (1<<(block-1))) >> block */
    double fnum_coef = (double)(1 << 19) / (double)sample_rate * 0.5;
    double fnum_f64 = freq * fnum_coef;
    int fnum = (int)(fnum_f64 * 2.0 + (1 << block) * 0.5) >> block;

    if (fnum < 0) fnum = 0;
    while (fnum > 1023 && block < 7) {
        block++;
        fnum >>= 1;
    }
    if (fnum > 1023) fnum = 1023;

    *out_fnum = fnum;
    *out_block = block;
}

/* ---- Set operator frequency from fnum/block/bo/mult/dt ---- */
static void set_op_frequency(smaf_fm_op_t *op, int fnum, int block, int bo,
                              uint32_t sample_rate) {
    /* Key scale number: ksn = (block+1-bo)*2 + (fnum>>9) */
    int ksn = (block + 1 - bo) * 2 + (fnum >> 9);
    if (ksn < 0) ksn = 0;
    else if (ksn > 15) ksn = 15;

    /* Base frequency: fnum * 2^(block+3-bo) / (16 * FNUMCoef * 48000)
       In fmfm.core: baseFreq = fnum<<(block+3-bo) / (16.0 * FNUMCoef)
       where FNUMCoef = (1<<19)/48000*0.5
       This simplifies to: baseFreq = fnum * 2^(block+3-bo) / 16 / ((1<<19)/48000*0.5)
       = fnum * 2^(block+3-bo) * 48000 * 2 / (16 * (1<<19))
       = fnum * 2^(block+3-bo+1) * 48000 / (16 * 524288)
       = fnum * 2^(block+4-bo) * 48000 / 8388608
       Actually let me just compute freq directly:
       baseFreq = fnum * 2^(block+3-bo) / (16 * (1<<19) / sample_rate * 0.5)
       Hmm, this is getting complicated with sample rate differences.

       Let's use our note_phase_table directly for the base frequency,
       then apply DT and MULT. */
    (void)block;
    (void)bo;

    /* Base phase increment from note_phase_table (already set by note_on) */
    uint32_t base_phase = op->phase_inc; /* already set */

    /* Apply DT: add frequency offset
       dt_hz[dt][ksn] gives Hz offset. Convert to phase increment:
       phase_offset = dt_hz * 2^32 / sample_rate */
    if (op->dt > 0 && op->dt < 8) {
        int dt_hz_val = smaf_dt_table[op->dt][ksn]; /* Q8 Hz */
        /* phase_offset = (dt_hz_val/256) * 2^32 / sample_rate */
        uint32_t phase_offset = (uint32_t)((uint64_t)dt_hz_val * 4294967296ULL / ((uint64_t)sample_rate * 256));
        base_phase += phase_offset;
    }

    /* Apply MULT: phase_inc = base_phase * mult_table[multi] / 2
       fmfm.core: phaseIncFrac64 = phaseIncFrac64.MulUint64(MultTable2[multi]) >> 1
       Our phase is 32-bit, so: phase_inc = (base_phase * mult_table[multi]) >> 1
       But we need to be careful about overflow. base_phase is ~28 bits.
       mult_table max = 30. So product = ~33 bits. >>1 = 32 bits. OK. */
    if (op->multi > 0) {
        base_phase = (uint32_t)(((uint64_t)base_phase * smaf_mult_table[op->multi]) >> 1);
    }
    /* multi=0 means 1 in OPL3/MA-5, mult_table[0]=1, so no special case needed */

    op->phase_inc = base_phase;
}

/* ---- Update channel attenuation (volume * expression * velocity) ---- */
static void update_attenuation(smaf_fm_channel_t *ch) {
    int vol_idx = ch->volume >> 2;
    int exp_idx = ch->expression >> 2;
    int vel_idx = ch->velocity >> 2;
    if (vol_idx > 31) vol_idx = 31;
    if (exp_idx > 31) exp_idx = 31;
    if (vel_idx > 31) vel_idx = 31;

    /* attenuation = vol_table[vol] * exp_table[exp] * vel_table[vel] / 32767^2
       But since each table entry is already Q15 (0..32767):
       attenuation = (vol * exp / 32767) * vel / 32767
       Use 64-bit intermediate */
    int64_t a = ((int64_t)smaf_volume_table[vol_idx] * smaf_volume_table[exp_idx]) >> 15;
    ch->attenuation = (int32_t)((a * smaf_volume_table[vel_idx]) >> 15);
}

/* ---- Recompute feedback coefficients ---- */
static void update_feedback(smaf_fm_channel_t *ch) {
    ch->feedback_coef1 = smaf_feedback_table[ch->op[0].fb];
    ch->feedback_coef3 = smaf_feedback_table[ch->op[2].fb];
}

/* ===================== PUBLIC API ===================== */

void smaf_synth_init(smaf_synth_t *synth, uint32_t sample_rate) {
    memset(synth, 0, sizeof(*synth));
    synth->sample_rate = sample_rate;
    smaf_synth_init_tables(sample_rate);
}

void smaf_synth_shutdown(smaf_synth_t *synth) {
    (void)synth;
}

int smaf_fm_alloc_channel(smaf_synth_t *synth) {
    /* First try to find a completely free channel */
    for (int i = 0; i < SMAF_MAX_FM_CHANNELS; i++) {
        if (!synth->fm[i].active) return i;
    }
    return -1;
}

void smaf_fm_note_on(smaf_synth_t *synth, int ch, uint8_t note, uint8_t velocity) {
    if (ch < 0 || ch >= SMAF_MAX_FM_CHANNELS) return;
    smaf_fm_channel_t *c = &synth->fm[ch];

    c->active = true;
    c->note = note;
    c->velocity = velocity;

    /* Compute fnum/block for this note */
    int fnum, block;
    compute_fnum_block(note, 64, synth->sample_rate, &fnum, &block);

    /* Set frequency for each operator */
    for (int i = 0; i < 4; i++) {
        smaf_fm_op_t *op = &c->op[i];
        if (!op->active) continue;

        /* Set base phase from note */
        op->phase_inc = smaf_get_note_phase(note);

        /* Apply DT and MULT */
        set_op_frequency(op, fnum, block, c->bo, synth->sample_rate);

        /* Update envelope rates with current ksn */
        int ksn = (block + 1 - c->bo) * 2 + (fnum >> 9);
        if (ksn < 0) ksn = 0;
        else if (ksn > 15) ksn = 15;

        /* Update envelope rates with current ksn */
        update_envelope_rates(op, ksn, synth->sample_rate);

        /* Update KSL */
        update_ksl_tl(op, fnum, block, c->bo);
    }

    /* Update channel attenuation */
    update_attenuation(c);
    update_feedback(c);

    /* Reset feedback state */
    c->fb_state1 = 0;
    c->fb_state1_cur = 0;
    c->fb_out1 = 0;
    c->fb_state3 = 0;
    c->fb_state3_cur = 0;
    c->fb_out3 = 0;

    /* Feedback blend: fmfm.core uses sample-rate-dependent interpolation
       blendCurr = 0.5 * 48000 / sampleRate, clamped to 1.0
       blendPrev = 1.0 - blendCurr */
    double blend_curr_d = 0.5 * 48000.0 / (double)synth->sample_rate;
    if (blend_curr_d > 1.0) blend_curr_d = 1.0;
    double blend_prev_d = 1.0 - blend_curr_d;
    c->fb_blend_curr = (int16_t)(blend_curr_d * 32767.0);
    c->fb_blend_prev = (int16_t)(blend_prev_d * 32767.0);

    /* Key on */
    channel_key_on(c);
}

void smaf_fm_note_off(smaf_synth_t *synth, int ch) {
    if (ch < 0 || ch >= SMAF_MAX_FM_CHANNELS) return;
    channel_key_off(&synth->fm[ch]);
}

/* ---- Set voice from raw byte array (matching vm35fm.go layout) ---- */
void smaf_fm_set_voice(smaf_synth_t *synth, int ch, const uint8_t *p, int len) {
    if (ch < 0 || ch >= SMAF_MAX_FM_CHANNELS) return;
    if (len < 3) return;
    smaf_fm_channel_t *c = &synth->fm[ch];

    /* Reset channel */
    c->active = false;
    c->keyon = false;
    c->fb_state1 = 0; c->fb_state1_cur = 0; c->fb_out1 = 0;
    c->fb_state3 = 0; c->fb_state3_cur = 0; c->fb_out3 = 0;
    for (int i = 0; i < 4; i++) {
        c->op[i].eg_stage = EG_OFF;
        c->op[i].current_level = 0;
    }

    /* Voice layout from vm35fm.go:
       byte 0: DrumKey (8 bits)
       byte 1: PANPOT(5)/unused(1)/BO(2) — bits 7-3 = PANPOT, bit 2 = unused, bits 1-0 = BO
       byte 2: LFO(2)/PE(1)/unused(3)/ALG(3) — bits 7-6 = LFO, bit 5 = PE, bits 2-0 = ALG
       byte 3-9: Op1 (7 bytes)
       byte 10-16: Op2 (7 bytes)
       byte 17-23: Op3 (7 bytes) — only if 4-op (alg >= 2)
       byte 24-30: Op4 (7 bytes) — only if 4-op (alg >= 2)

       Per operator (7 bytes), from vm35fm.go:
       byte 0: SR(4)/XOF(1)/unused(1)/SUS(1)/KSR(1) — bits 7-4=SR, bit 3=XOF, bit 2=unused, bit 1=SUS, bit 0=KSR
       byte 1: RR(4)/DR(4) — bits 7-4 = RR, bits 3-0 = DR
       byte 2: AR(4)/SL(4) — bits 7-4 = AR, bits 3-0 = SL
       byte 3: TL(6)/KSL(2) — bits 7-2 = TL (6 bits, 0-63), bits 1-0 = KSL
       byte 4: unused(1)/DAM(2)/EAM(1)/unused(1)/DVB(2)/EVB(1)
       byte 5: MULTI(4)/unused(1)/DT(3) — bits 7-4 = MULTI, bits 2-0 = DT
       byte 6: WS(5)/FB(3) — bits 7-3 = WS, bits 2-0 = FB
    */

    uint8_t alg = p[2] & 0x07;
    c->algorithm = alg;
    c->panpot = (p[1] >> 3) & 0x1F;
    c->bo = p[1] & 0x03; /* BO is bits 1-0 */

    /* Set pan from panpot — fmfm.core: pan = chpan + (panpot-15)*4
       Our chpan defaults to 64 (center) */
    int pan = 64 + (c->panpot - 15) * 4;
    if (pan < 0) pan = 0;
    else if (pan > 127) pan = 127;
    c->pan_L = smaf_pan_table[pan][0];
    c->pan_R = smaf_pan_table[pan][1];

    int num_ops = (alg < 2) ? 2 : 4;
    static const int op_offsets[4] = {3, 10, 17, 24};

    for (int i = 0; i < num_ops; i++) {
        int off = op_offsets[i];
        if (off + 6 >= len) break;

        smaf_fm_op_t *op = &c->op[i];

        /* Byte 0: SR(4)/XOF(1)/unused(1)/SUS(1)/KSR(1)
           vm35fm.go: SR = data[0] >> 4, XOF = data[0]&0x08 != 0,
           SUS = data[0]&0x02 != 0, KSR = data[0]&0x01 != 0 */
        op->sr    = (p[off] >> 4) & 0xF;
        op->xof   = (p[off] >> 3) & 0x1;
        /* SUS bit (data[0]&0x02) is the "keep sustain rate after key off" flag,
           NOT the sustain level value. SL comes from byte 2 bits 3-0. */
        op->ksr   = p[off] & 0x1;

        /* Byte 1: RR/DR */
        op->rr    = (p[off+1] >> 4) & 0xF;
        op->dr    = p[off+1] & 0xF;

        /* Byte 2: AR/SL */
        op->ar    = (p[off+2] >> 4) & 0xF;
        /* SL uses bits 3-0 here as the full sustain level (0-15).
           The single bit from byte 0 (SUS field) is not used for SL value.
           Looking at go-smaf more carefully:
           SL is stored in byte 2 bits 3-0 (4 bits, 0-15) */
        op->sl    = p[off+2] & 0xF;

        /* Byte 3: TL/KSL — exact go-smaf decoding:
           op.TL  = int(data[3] >> 2)   // bits 7-2, 6-bit value 0-63
           op.KSL = int(data[3] & 3)     // bits 1-0, 2-bit value 0-3 */
        op->tl    = (p[off+3] >> 2) & 0x3F;
        op->ksl   = p[off+3] & 0x3;

        /* TL coefficient: Q15 linear from dB */
        op->tl_coef = smaf_tl_table[op->tl];

        /* SL coefficient: Q15 linear from dB */
        op->sustain_level = smaf_sl_table[op->sl];

        /* Byte 4: unused(1)/DAM(2)/EAM(1)/unused(1)/DVB(2)/EVB(1)
           vm35fm.go: DAM=data[4]>>5&3, EAM=data[4]&0x10, DVB=data[4]>>1&3, EVB=data[4]&0x01 */
        op->vb    = (p[off+4] >> 1) & 0x3; /* DVB */

        /* Byte 5: MULTI(4)/unused(1)/DT(3) — vm35fm.go: MULTI=data[5]>>4, DT=data[5]&7 */
        op->multi = (p[off+5] >> 4) & 0xF;
        op->dt    = p[off+5] & 0x7;

        /* Byte 6: WS/FB */
        op->ws    = (p[off+6] >> 3) & 0x1F;
        op->fb    = p[off+6] & 0x7;

        op->wave = smaf_fm_get_wave(op->ws);
        op->active = true;
        op->eg_stage = EG_OFF;
        op->current_level = 0;
    }

    /* Mark unused operators inactive */
    for (int i = num_ops; i < 4; i++) {
        c->op[i].active = false;
        c->op[i].eg_stage = EG_OFF;
    }

    /* Update feedback and attenuation */
    update_feedback(c);
    c->volume = 100;
    c->expression = 127;
    update_attenuation(c);
}

void smaf_fm_set_volume(smaf_synth_t *synth, int ch, uint8_t vol) {
    if (ch < 0 || ch >= SMAF_MAX_FM_CHANNELS) return;
    synth->fm[ch].volume = vol;
    update_attenuation(&synth->fm[ch]);
}

void smaf_fm_set_pan(smaf_synth_t *synth, int ch, uint8_t pan) {
    if (ch < 0 || ch >= SMAF_MAX_FM_CHANNELS) return;
    if (pan > 127) pan = 127;
    synth->fm[ch].pan_L = smaf_pan_table[pan][0];
    synth->fm[ch].pan_R = smaf_pan_table[pan][1];
}

void smaf_fm_set_expression(smaf_synth_t *synth, int ch, uint8_t val) {
    if (ch < 0 || ch >= SMAF_MAX_FM_CHANNELS) return;
    synth->fm[ch].expression = val;
    update_attenuation(&synth->fm[ch]);
}

void smaf_fm_set_velocity(smaf_synth_t *synth, int ch, uint8_t vel) {
    if (ch < 0 || ch >= SMAF_MAX_FM_CHANNELS) return;
    synth->fm[ch].velocity = vel;
    update_attenuation(&synth->fm[ch]);
}

/* ---- Main render loop ---- */
void smaf_synth_render(smaf_synth_t *synth, int32_t *out_L, int32_t *out_R, int n_samples) {
    /* Render FM channels */
    for (int ch = 0; ch < SMAF_MAX_FM_CHANNELS; ch++) {
        smaf_fm_channel_t *c = &synth->fm[ch];
        if (!c->active) continue;

        /* Check if channel is completely done */
        if (!c->keyon && channel_is_off(c)) {
            c->active = false;
            continue;
        }

        /* Render n samples for this channel */
        for (int s = 0; s < n_samples; s++) {
            channel_next(c, &out_L[s], &out_R[s]);
        }
    }

    /* Render WT channels */
    for (int ch = 0; ch < SMAF_MAX_WT_CHANNELS; ch++) {
        smaf_wt_channel_t *w = &synth->wt[ch];
        if (!w->active) continue;

        if (!w->keyon) {
            w->level -= 500;
            if (w->level <= 0) {
                w->level = 0;
                w->active = false;
                continue;
            }
        } else {
            int32_t new_level = (int32_t)w->level + 2000;
            w->level = (new_level > 32767) ? 32767 : (int16_t)new_level;
        }

        for (int s = 0; s < n_samples; s++) {
            w->phase += w->phase_inc;
            uint32_t idx = w->phase >> 16;
            uint32_t frac = w->phase & 0xFFFF;

            if (idx + 1 < w->wave_len) {
                int32_t s0 = w->wave[idx];
                int32_t s1 = w->wave[idx + 1];
                int32_t interp = (s0 * (0x10000 - frac) + s1 * frac) >> 16;
                int32_t sample = (interp * w->level * w->volume) >> 15 >> 15;
                out_L[s] += (sample * w->pan_L) >> 15;
                out_R[s] += (sample * w->pan_R) >> 15;
            } else {
                w->phase = 0;
            }
        }
    }
}

/* ---- WT synth ---- */
int smaf_wt_note_on(smaf_synth_t *synth, const int8_t *wave, uint32_t wave_len,
                    uint8_t note, uint8_t velocity, uint8_t pan) {
    for (int i = 0; i < SMAF_MAX_WT_CHANNELS; i++) {
        if (!synth->wt[i].active) {
            smaf_wt_channel_t *w = &synth->wt[i];
            w->active = true;
            w->keyon = true;
            w->wave = wave;
            w->wave_len = wave_len;
            w->phase = 0;
            uint32_t base_phase = smaf_get_note_phase(note);
            w->phase_inc = base_phase >> 6;
            w->volume = (velocity * 258);
            w->level = 0;
            if (pan <= 64) {
                w->pan_L = 32767;
                w->pan_R = (int16_t)(pan * 512);
            } else {
                w->pan_L = (int16_t)((127 - pan) * 512);
                w->pan_R = 32767;
            }
            return i;
        }
    }
    return -1;
}

void smaf_wt_note_off(smaf_synth_t *synth, int ch) {
    if (ch >= 0 && ch < SMAF_MAX_WT_CHANNELS) {
        synth->wt[ch].keyon = false;
    }
}
