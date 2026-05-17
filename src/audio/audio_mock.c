#include "audio.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#pragma pack(push, 1)
typedef struct {
    char     riff[4];       /* "RIFF" */
    uint32_t file_size;     /* file size - 8 */
    char     wave[4];       /* "WAVE" */
    char     fmt[4];        /* "fmt " */
    uint32_t fmt_size;      /* 16 */
    uint16_t audio_fmt;     /* 1 = PCM */
    uint16_t num_channels;  /* 2 */
    uint32_t sample_rate;
    uint32_t byte_rate;     /* sample_rate * num_channels * bits_per_sample/8 */
    uint16_t block_align;   /* num_channels * bits_per_sample/8 */
    uint16_t bits_per_sample;
    char     data[4];       /* "data" */
    uint32_t data_size;
} wav_header_t;
#pragma pack(pop)

int audio_write_wav(const char *filename, const int16_t *data_l, const int16_t *data_r,
                    int num_samples, int sample_rate) {
    FILE *f = fopen(filename, "wb");
    if (!f) return -1;

    uint32_t data_size = num_samples * 2 * 2; /* stereo 16-bit */
    wav_header_t hdr;
    memcpy(hdr.riff, "RIFF", 4);
    hdr.file_size = 36 + data_size;
    memcpy(hdr.wave, "WAVE", 4);
    memcpy(hdr.fmt, "fmt ", 4);
    hdr.fmt_size = 16;
    hdr.audio_fmt = 1;
    hdr.num_channels = 2;
    hdr.sample_rate = sample_rate;
    hdr.byte_rate = sample_rate * 4;
    hdr.block_align = 4;
    hdr.bits_per_sample = 16;
    memcpy(hdr.data, "data", 4);
    hdr.data_size = data_size;

    fwrite(&hdr, sizeof(hdr), 1, f);

    /* Interleave L/R samples */
    for (int i = 0; i < num_samples; i++) {
        int16_t frames[2] = { data_l[i], data_r[i] };
        fwrite(frames, sizeof(int16_t), 2, f);
    }

    fclose(f);
    return sizeof(hdr) + data_size;
}
