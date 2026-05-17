#include "synth.h"

/* 16-bit pseudo-random noise generator (LCG)
   Used for noise waveform in WT synth */
static uint32_t noise_state = 1;

int16_t smaf_noise_generate(void) {
    /* LCG: x = x * 1103515245 + 12345, return bits 16-31 */
    noise_state = noise_state * 1103515245 + 12345;
    return (int16_t)(noise_state >> 16);
}

void smaf_noise_seed(uint32_t seed) {
    noise_state = seed ? seed : 1;
}
