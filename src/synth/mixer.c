#include "synth.h"
#include <string.h>

/* Simple saturating clamp */
static inline int16_t clamp16(int32_t v) {
    if (v > 32767) return 32767;
    if (v < -32768) return -32768;
    return (int16_t)v;
}

/* Mix 32-bit accumulator buffers to 16-bit stereo output.
   Applies master volume and soft-clipping. */
void smaf_mixer_mix(const int32_t *in_L, const int32_t *in_R,
                    int16_t *out_L, int16_t *out_R, int n_samples, int16_t master_vol) {
    for (int i = 0; i < n_samples; i++) {
        int32_t sL = (in_L[i] * master_vol) >> 15;
        int32_t sR = (in_R[i] * master_vol) >> 15;
        out_L[i] = clamp16(sL);
        out_R[i] = clamp16(sR);
    }
}
