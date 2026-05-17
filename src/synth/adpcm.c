#include "synth.h"

/* Yamaha MA-7 ADPCM step table — from Ghidra oscSlot_4
   8 entries, used for step size adaptation */
static const uint16_t adpcm_step_table[8] = {
    0x3980, 0x3980, 0x3980, 0x3980,
    0x4CC0, 0x6640, 0x8000, 0x9980
};

void smaf_adpcm_decode_init(smaf_adpcm_state_t *st) {
    st->predictor = 0;
    st->step = 0x7F;
}

/* Decode one 4-bit nibble of Yamaha MA-7 ADPCM.
   Algorithm extracted from Ghidra oscSlot_4:
     sign = bit 3 of nibble
     index = bits 0-2 of nibble
     new_step = clamp(old_step * step_table[index] >> 14, 0x7F, 0x6000)
     delta = step/8 + bit0*(step/4) + bit1*(step/2) + bit2*step
     if (sign) delta = -delta
     predictor = clamp(predictor + delta, -32768, 32767) */
int16_t smaf_adpcm_decode_nibble(smaf_adpcm_state_t *st, uint8_t nibble) {
    uint8_t sign = (nibble >> 3) & 1;
    uint8_t idx = nibble & 7;

    /* Step size adaptation */
    uint32_t new_step = ((uint32_t)st->step * adpcm_step_table[idx]) >> 14;
    if (new_step < 0x7F) new_step = 0x7F;
    if (new_step > 0x6000) new_step = 0x6000;

    /* Delta calculation */
    int32_t delta = (int32_t)st->step >> 3;
    if (nibble & 1) delta += st->step >> 2;
    if (nibble & 2) delta += st->step >> 1;
    if (nibble & 4) delta += st->step;
    if (sign) delta = -delta;

    /* Predictor update */
    int32_t pred = (int32_t)st->predictor + delta;
    if (pred > 0x7FFF) pred = 0x7FFF;
    if (pred < -0x8000) pred = -0x8000;

    st->predictor = (int16_t)pred;
    st->step = (uint16_t)new_step;
    return (int16_t)pred;
}

/* Decode a buffer of ADPCM data (high nibble first, then low nibble per byte) */
void smaf_adpcm_decode_buffer(smaf_adpcm_state_t *st, const uint8_t *in, int16_t *out, int n_samples) {
    int si = 0;
    for (int i = 0; i < n_samples && si * 2 < n_samples; i++) {
        out[i] = smaf_adpcm_decode_nibble(st, (in[i >> 1] >> 4) & 0xF);
        i++;
        if (i < n_samples) {
            out[i] = smaf_adpcm_decode_nibble(st, in[i >> 1] & 0xF);
        }
    }
}
