#ifndef AUDIO_H
#define AUDIO_H

#include <stdint.h>
#include <stddef.h>

/* Write a 16-bit stereo WAV file. Returns bytes written or -1 on error. */
int audio_write_wav(const char *filename, const int16_t *data_l, const int16_t *data_r,
                    int num_samples, int sample_rate);

#endif /* AUDIO_H */
