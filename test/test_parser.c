/* Parser test — parse MMF files and dump structure */

#include "../include/smaf.h"
#include "../src/parser/parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int dump_mmf(const char *filename) {
    FILE *f = fopen(filename, "rb");
    if (!f) {
        printf("  Cannot open %s\n", filename);
        return 1;
    }

    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);

    uint8_t *data = malloc(size);
    if (!data) { fclose(f); return 1; }
    fread(data, 1, size, f);
    fclose(f);

    printf("\n=== %s (%ld bytes) ===\n", filename, size);

    smaf_file_t mf;
    smaf_result_t res = smaf_parse(&mf, data, size);
    if (res != SMAF_OK) {
        printf("  Parse failed: %d\n", res);
        free(data);
        return 1;
    }

    if (mf.title[0]) printf("  Title: %s\n", mf.title);
    if (mf.artist[0]) printf("  Artist: %s\n", mf.artist);

    printf("  Tracks: %d\n", mf.num_tracks);

    for (int t = 0; t < mf.num_tracks; t++) {
        smaf_track_t *trk = &mf.tracks[t];
        printf("  Track %d: format=%d timebase_d=0x%02x timebase_g=0x%02x\n",
               t, trk->format_type, trk->timebase_d, trk->timebase_g);
        printf("    Voices: %d, Waves: %d, Events: %d\n",
               trk->num_voices, trk->num_waves, trk->num_events);

        for (int v = 0; v < trk->num_voices && v < 4; v++) {
            smaf_voice_t *voice = &trk->voices[v];
            printf("    Voice %d: prog=%d alg=%d fb=%d pan=%d ops=%d\n",
                   v, voice->prog, voice->alg, voice->fb, voice->panpot, voice->num_ops);
        }

        /* Show first few events */
        for (int e = 0; e < trk->num_events && e < 8; e++) {
            smaf_score_event_t *evt = &trk->events[e];
            printf("    Event %d: dt=%u type=0x%02x ch=%d", e, evt->delta_time, evt->type, evt->channel);
            if ((evt->type & 0xF0) == 0x90 || (evt->type & 0xF0) == 0x80) {
                printf(" note=%d vel=%d gate=%u", evt->note, evt->velocity, evt->gate_time);
            } else if ((evt->type & 0xF0) == 0xB0) {
                printf(" cc=%d val=%d", evt->cc_number, evt->cc_value);
            } else if ((evt->type & 0xF0) == 0xC0) {
                printf(" prog=%d", evt->program);
            }
            printf("\n");
        }
        if (trk->num_events > 8) printf("    ... %d more events\n", trk->num_events - 8);
    }

    smaf_parse_free(&mf);
    free(data);
    return 0;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        /* Scan ringtones directory */
        printf("Usage: test_parser <mmf_file> [mmf_file2 ...]\n");
        printf("No arguments — scanning ringtones/ for a few MMF files...\n");

        const char *search_dirs[] = {
            "../ringtones",
            "../ringtones/LG",
            "../ringtones/Samsung",
            "../ringtones/MA-3",
            "../mmfs",
            NULL
        };

        int tested = 0;
        for (int d = 0; search_dirs[d] && tested < 10; d++) {
            char cmd[512];
            snprintf(cmd, sizeof(cmd), "ls %s/*.mmf 2>/dev/null | head -3", search_dirs[d]);
            FILE *p = popen(cmd, "r");
            if (!p) continue;
            char line[256];
            while (fgets(line, sizeof(line), p) && tested < 10) {
                line[strcspn(line, "\r\n")] = '\0';
                if (line[0]) {
                    dump_mmf(line);
                    tested++;
                }
            }
            pclose(p);
        }

        if (tested == 0) {
            printf("No MMF files found. Pass files as arguments.\n");
        }
        return 0;
    }

    int failures = 0;
    for (int i = 1; i < argc; i++) {
        failures += dump_mmf(argv[i]);
    }
    return failures;
}
