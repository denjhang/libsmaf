/**
 * 64-bit MMF Player using IPC to 32-bit MA DLL helper
 * This allows 64-bit applications to play MMF files using Yamaha MA DLLs
 */

#include "ma_dll_64.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Parse MMF metadata
static void parse_mmf_metadata(const uint8_t* data, int size, char* title, char* artist) {
    const char* tags[] = {"ST:", "AN:"};
    char* targets[] = {title, artist};

    for (int i = 0; i < 2; i++) {
        int search_start = (size > 4096) ? size - 4096 : 0;
        for (int j = search_start; j < size - 4; j++) {
            if (memcmp(data + j, tags[i], 3) == 0) {
                int len = 0;
                j += 3;
                while (j < size && data[j] >= 0x20 && data[j] <= 0x7E && len < 255) {
                    targets[i][len++] = data[j++];
                }
                targets[i][len] = '\0';
                break;
            }
        }
    }
}

// Read file
uint8_t* read_file(const char* path, int* size) {
    FILE* f = fopen(path, "rb");
    if (!f) return NULL;

    fseek(f, 0, SEEK_END);
    int sz = ftell(f);
    fseek(f, 0, SEEK_SET);

    uint8_t* data = malloc(sz);
    if (!data) {
        fclose(f);
        return NULL;
    }

    if (fread(data, 1, sz, f) != (size_t)sz) {
        free(data);
        fclose(f);
        return NULL;
    }

    fclose(f);
    *size = sz;
    return data;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("smaf_play64 - 64-bit MMF Player (uses 32-bit helper process)\n");
        printf("Plays MMF files through system audio using Yamaha MA DLLs\n\n");
        printf("Usage: %s <input.mmf> [options]\n", argv[0]);
        printf("\nInput formats supported:\n");
        printf("  .mmf            SMAF/MA-2/MA-3/MA-5/MA-7 file\n");
        printf("  .mid/.midi      NOT SUPPORTED (MA DLL only plays SMAF/MMF)\n");
        printf("  .wav            NOT SUPPORTED (MA DLL only plays SMAF/MMF)\n");
        printf("\nNote: To play MIDI files, convert them to MMF format first.\n");
        printf("\nOptions:\n");
        printf("  -r rate          Sample rate in Hz (default: 44100)\n");
        printf("  -dll path        Path to directory containing MA DLLs\n");
        printf("  -ma3/-ma5/-ma7   Force specific MA chip (default: MA7)\n");
        printf("\nThis is a 64-bit application that communicates with a 32-bit helper\n");
        printf("process to use Yamaha MA DLLs (which are 32-bit only).\n");
        return 1;
    }

    const char* input_file = argv[1];
    int sample_rate = 44100;
    char dll_path[MAX_PATH] = {0};
    int mode = MODE_MA7;

    // Parse arguments
    for (int i = 2; i < argc; i++) {
        if (strcmp(argv[i], "-r") == 0 && i + 1 < argc) {
            sample_rate = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-dll") == 0 && i + 1 < argc) {
            strncpy(dll_path, argv[++i], MAX_PATH - 1);
        } else if (strcmp(argv[i], "-ma3") == 0) {
            mode = MODE_MA3;
        } else if (strcmp(argv[i], "-ma5") == 0) {
            mode = MODE_MA5;
        } else if (strcmp(argv[i], "-ma7") == 0) {
            mode = MODE_MA7;
        }
    }

    // Detect file format from extension
    const char* ext = strrchr(input_file, '.');
    int format = FORMAT_MMF;  // Default
    const char* format_name = "MMF";

    if (ext) {
        if (_stricmp(ext, ".mid") == 0 || _stricmp(ext, ".midi") == 0) {
            format = FORMAT_MID;
            format_name = "MIDI";
        } else if (_stricmp(ext, ".mmf") == 0) {
            format = FORMAT_MMF;
            format_name = "MMF";
        } else if (_stricmp(ext, ".wav") == 0) {
            format = FORMAT_WAV;
            format_name = "WAV";
        }
    }

    // Check if helper is available
    if (!ma_is_available_64()) {
        fprintf(stderr, "Error: 32-bit helper process not found!\n");
        fprintf(stderr, "Please build ma_helper.exe first:\n");
        fprintf(stderr, "  gcc -m32 -o ma_helper.exe ma_helper.c ma_dll.c\n");
        return 1;
    }

    // Read file
    int mmf_size = 0;
    uint8_t* mmf_data = read_file(input_file, &mmf_size);
    if (!mmf_data) {
        fprintf(stderr, "Failed to read file: %s\n", input_file);
        return 1;
    }

    printf("Loaded %s: %d bytes (64-bit player)\n", format_name, mmf_size);

    // Parse metadata (only for MMF files)
    if (format == FORMAT_MMF) {
        char title[256] = {0}, artist[256] = {0};
        parse_mmf_metadata(mmf_data, mmf_size, title, artist);
        if (title[0]) printf("Title: %s\n", title);
        if (artist[0]) printf("Artist: %s\n", artist);
    }

    // Initialize 64-bit wrapper (spawns 32-bit helper)
    ma_context_64_t ctx;
    if (ma_init_64(&ctx, dll_path[0] ? dll_path : NULL, mode, sample_rate) != 0) {
        fprintf(stderr, "Failed to initialize 64-bit wrapper\n");
        free(mmf_data);
        return 1;
    }

    printf("Initialized MA-%d (via 32-bit helper), sample rate: %d Hz\n",
           mode == MODE_MA7 ? 7 : mode == MODE_MA5 ? 5 : 3, sample_rate);

    // Load file
    int sound_id = ma_load_64(&ctx, format, mmf_data, mmf_size);
    if (sound_id < 0) {
        fprintf(stderr, "Failed to load %s\n", format_name);
        ma_cleanup_64(&ctx);
        free(mmf_data);
        return 1;
    }

    printf("Sound ID: %d\n", sound_id);

    // Get length
    int length_ms = ma_get_length_64(&ctx, format, sound_id);
    printf("Length: %d ms (%.2f seconds)\n", length_ms, length_ms / 1000.0);

    // Start playback
    if (ma_start_64(&ctx, format, sound_id, 0) != 0) {
        fprintf(stderr, "Failed to start playback\n");
        ma_cleanup_64(&ctx);
        free(mmf_data);
        return 1;
    }

    printf("Playing... (press Ctrl+C to stop)\n");

    // Playback loop with progress
    int elapsed = 0;
    int last_pos = -1;

    while (elapsed < length_ms + 1000) {
        int status = ma_get_status_64(&ctx, format, sound_id);

        if (status != STATE_PLAYING && status != STATE_READY) {
            printf("\nPlayback ended, status: %d\n", status);
            break;
        }

        int pos = ma_get_position_64(&ctx, format, sound_id);
        if (pos == last_pos && pos > 0) {
            break;
        }
        last_pos = pos;

        int progress = (pos * 100) / length_ms;
        if (progress > 100) progress = 100;
        printf("\rProgress: %d%%", progress);
        fflush(stdout);

        Sleep(50);
        elapsed += 50;
    }

    // Stop
    ma_stop_64(&ctx, format, sound_id);

    printf("\nPlayback complete.\n");

    ma_cleanup_64(&ctx);
    free(mmf_data);

    return 0;
}
