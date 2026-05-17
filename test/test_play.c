/* Playback test — load MMF, render to WAV */

#include "../include/smaf.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int play_to_wav(const char *mmf_path, const char *wav_path) {
    printf("Playing %s -> %s\n", mmf_path, wav_path);

    FILE *f = fopen(mmf_path, "rb");
    if (!f) { printf("  Cannot open %s\n", mmf_path); return 1; }
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    uint8_t *data = malloc(size);
    fread(data, 1, size, f);
    fclose(f);

    smaf_player_t *player = smaf_player_create(22050);
    if (!player) { printf("  Failed to create player\n"); free(data); return 1; }

    smaf_result_t res = smaf_player_load(player, data, size);
    if (res != SMAF_OK) {
        printf("  Load failed: %d\n", res);
        smaf_player_destroy(player);
        free(data);
        return 1;
    }

    res = smaf_player_play(player);
    if (res != SMAF_OK) {
        printf("  Play failed: %d\n", res);
        smaf_player_destroy(player);
        free(data);
        return 1;
    }

    int block_size = 1024;
    int16_t *buf_L = malloc(block_size * sizeof(int16_t));
    int16_t *buf_R = malloc(block_size * sizeof(int16_t));

    int max_samples = 22050 * 60;
    int16_t *all_L = malloc(max_samples * sizeof(int16_t));
    int16_t *all_R = malloc(max_samples * sizeof(int16_t));
    int total = 0;

    while (smaf_player_state(player) == SMAF_STATE_PLAYING && total < max_samples) {
        int n = smaf_player_render(player, buf_L, buf_R, block_size);
        if (n <= 0) break;
        if (total + n > max_samples) n = max_samples - total;
        memcpy(all_L + total, buf_L, n * sizeof(int16_t));
        memcpy(all_R + total, buf_R, n * sizeof(int16_t));
        total += n;
    }

    printf("  Rendered %d samples (%.1f seconds)\n", total, (float)total / 22050.0f);

    if (total > 0) {
        FILE *wf = fopen(wav_path, "wb");
        if (wf) {
            uint32_t data_size = total * 4;
            uint32_t file_size = 36 + data_size;
            fwrite("RIFF", 1, 4, wf);
            fwrite(&file_size, 4, 1, wf);
            fwrite("WAVE", 1, 4, wf);
            fwrite("fmt ", 1, 4, wf);
            uint32_t fmt_size = 16;
            fwrite(&fmt_size, 4, 1, wf);
            uint16_t audio_fmt = 1;
            fwrite(&audio_fmt, 2, 1, wf);
            uint16_t num_ch = 2;
            fwrite(&num_ch, 2, 1, wf);
            uint32_t sr = 22050;
            fwrite(&sr, 4, 1, wf);
            uint32_t byte_rate = 22050 * 4;
            fwrite(&byte_rate, 4, 1, wf);
            uint16_t block_align = 4;
            fwrite(&block_align, 2, 1, wf);
            uint16_t bits = 16;
            fwrite(&bits, 2, 1, wf);
            fwrite("data", 1, 4, wf);
            fwrite(&data_size, 4, 1, wf);
            for (int i = 0; i < total; i++) {
                int16_t frame[2] = { all_L[i], all_R[i] };
                fwrite(frame, sizeof(int16_t), 2, wf);
            }
            fclose(wf);
            printf("  Written %s\n", wav_path);
        }
    }

    smaf_player_destroy(player);
    free(data);
    free(buf_L);
    free(buf_R);
    free(all_L);
    free(all_R);
    return 0;
}

int main(int argc, char **argv) {
    smaf_init();
    if (argc < 2) {
        printf("Usage: test_play <mmf_file> [output.wav]\n");
        printf("Default output: output.wav\n");
        return 1;
    }
    const char *wav_path = (argc > 2) ? argv[2] : "output.wav";
    return play_to_wav(argv[1], wav_path);
}
