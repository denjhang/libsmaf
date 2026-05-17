/* Playback test — load MMF, render to WAV */

#include "../include/smaf.h"
#include "../src/parser/parser.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *evt_type_name(uint8_t type) {
    switch (type & 0xF0) {
        case 0x90: return "NoteOn";
        case 0x80: return "NoteOff";
        case 0xB0: return "CC";
        case 0xC0: return "PC";
        case 0xE0: return "PitchBend";
        case 0xF0: return "SysEx";
        default:   return "Unknown";
    }
}

static void dump_parse(const uint8_t *data, size_t len) {
    smaf_file_t mf;
    smaf_result_t res = smaf_parse(&mf, data, len);
    if (res != SMAF_OK) { printf("  Parse failed: %d\n", res); return; }

    if (mf.title[0]) printf("  Title: %s\n", mf.title);
    printf("  Tracks: %d\n", mf.num_tracks);

    for (int t = 0; t < mf.num_tracks; t++) {
        smaf_track_t *trk = &mf.tracks[t];
        printf("  Track %d: format=%d timebase_d=0x%02x timebase_g=0x%02x\n",
               t, trk->format_type, trk->timebase_d, trk->timebase_g);
        printf("    Voices: %d, Events: %d\n", trk->num_voices, trk->num_events);

        for (int v = 0; v < trk->num_voices; v++) {
            smaf_voice_t *voice = &trk->voices[v];
            printf("    Voice %d: prog=%d alg=%d fb=%d pan=%d ops=%d type=%s\n",
                   v, voice->prog, voice->alg, voice->fb, voice->panpot, voice->num_ops,
                   voice->voice_type == 0 ? "FM" : voice->voice_type == 1 ? "WT" : "AL");
        }

        for (int e = 0; e < trk->num_events; e++) {
            smaf_score_event_t *evt = &trk->events[e];
            printf("    [%d] dt=%-5u %s ch=%d", e, evt->delta_time,
                   evt_type_name(evt->type), evt->channel);
            if ((evt->type & 0xF0) == 0x90 || (evt->type & 0xF0) == 0x80) {
                printf(" note=%d vel=%d gate=%u", evt->note, evt->velocity, evt->gate_time);
            } else if ((evt->type & 0xF0) == 0xB0) {
                printf(" cc=%d val=%d", evt->cc_number, evt->cc_value);
            } else if ((evt->type & 0xF0) == 0xC0) {
                printf(" prog=%d", evt->program);
            }
            printf("\n");
        }
    }
    smaf_parse_free(&mf);
}

static int play_to_wav(const char *mmf_path, const char *wav_path) {
    printf("\n=== %s ===\n", mmf_path);

    FILE *f = fopen(mmf_path, "rb");
    if (!f) { printf("  Cannot open %s\n", mmf_path); return 1; }
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    uint8_t *data = malloc(size);
    fread(data, 1, size, f);
    fclose(f);
    printf("  File size: %ld bytes\n", size);

    /* Dump parse info */
    dump_parse(data, size);

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

    /* Amplitude analysis */
    int32_t peak = 0;
    double rms_sum = 0.0;
    for (int i = 0; i < total; i++) {
        int32_t absL = all_L[i] < 0 ? -(int32_t)all_L[i] : all_L[i];
        int32_t absR = all_R[i] < 0 ? -(int32_t)all_R[i] : all_R[i];
        if (absL > peak) peak = absL;
        if (absR > peak) peak = absR;
        rms_sum += (double)all_L[i] * all_L[i] + (double)all_R[i] * all_R[i];
    }
    double rms = (total > 0) ? sqrt(rms_sum / (total * 2)) : 0.0;
    printf("  Peak=%d/%d, RMS=%.0f (%s)\n", peak, 32767, rms,
           peak == 0 ? "SILENT" : peak > 30000 ? "LOUD" : peak > 10000 ? "OK" : "WEAK");

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
