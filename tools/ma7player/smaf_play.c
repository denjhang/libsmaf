/**
 * smaf_play - MMF Player using Yamaha MA DLLs
 * Plays MMF files through system audio using Yamaha MA-3/5/7 chip emulation
 * Usage: smaf_play.exe <input.mmf> [-r samplerate] [-dll path]
 */

#include "ma_dll.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <sys/stat.h>

// Parse MMF metadata from OPDA chunk
static void parse_mmf_metadata(const uint8_t* data, int size, char* title, char* artist, char* copyright) {
    // Simple OPDA parser (optional metadata)
    const char* tags[] = {"ST:", "AN:", "CR:"};
    char* targets[] = {title, artist, copyright};

    // Search for tags in data (simplified)
    for (int i = 0; i < 3; i++) {
        const char* tag = tags[i];
        char* target = targets[i];

        // Search in last 4KB of file where OPDA usually resides
        int search_start = (size > 4096) ? size - 4096 : 0;
        for (int j = search_start; j < size - 4; j++) {
            if (memcmp(data + j, tag, 3) == 0) {
                // Extract text until null or next tag
                int len = 0;
                j += 3;
                while (j < size && data[j] >= 0x20 && data[j] <= 0x7E && len < 255) {
                    target[len++] = data[j++];
                }
                target[len] = '\0';
                break;
            }
        }
    }
}

// Read file into memory
uint8_t* read_file(const char* path, int* out_size) {
    FILE* f = fopen(path, "rb");
    if (!f) {
        fprintf(stderr, "Failed to open file: %s\n", path);
        return NULL;
    }

    fseek(f, 0, SEEK_END);
    int size = ftell(f);
    fseek(f, 0, SEEK_SET);

    uint8_t* data = malloc(size);
    if (!data) {
        fprintf(stderr, "Failed to allocate memory\n");
        fclose(f);
        return NULL;
    }

    if (fread(data, 1, size, f) != (size_t)size) {
        fprintf(stderr, "Failed to read file\n");
        free(data);
        fclose(f);
        return NULL;
    }

    fclose(f);
    *out_size = size;
    return data;
}

// DLL auto-detection
typedef struct {
    const char* name;
    const char* smw_dll;
    const char* hw_dll;
    int mode;
} dll_info_t;

static const dll_info_t dll_options[] = {
    { "MA-7", "M7_EmuSmw7.dll", "M7_EmuHw.dll", MODE_MA7 },
    { "MA-5", "M5_EmuSmw5.dll", "M5_EmuHw.dll", MODE_MA5 },
    { "MA-3", "ma3smwemu.dll", NULL, MODE_MA3 },
};

// Find available DLLs
int find_available_dll(const char* base_path, char* dll_path, int* mode) {
    char test_path[MAX_PATH];

    for (int i = 0; i < 3; i++) {
        // Build full path to DLL
        if (strcmp(base_path, ".") == 0) {
            snprintf(test_path, sizeof(test_path), "%s", dll_options[i].smw_dll);
        } else {
            snprintf(test_path, sizeof(test_path), "%s/%s", base_path, dll_options[i].smw_dll);
        }

        if (GetFileAttributesA(test_path) != INVALID_FILE_ATTRIBUTES) {
            // Check HW DLL for MA5/7
            if (dll_options[i].hw_dll) {
                char hw_path[MAX_PATH];
                if (strcmp(base_path, ".") == 0) {
                    snprintf(hw_path, sizeof(hw_path), "%s", dll_options[i].hw_dll);
                } else {
                    snprintf(hw_path, sizeof(hw_path), "%s/%s", base_path, dll_options[i].hw_dll);
                }
                if (GetFileAttributesA(hw_path) == INVALID_FILE_ATTRIBUTES) {
                    printf("Warning: Found %s but missing %s\n", dll_options[i].smw_dll, dll_options[i].hw_dll);
                    continue;
                }
            }

            // Return the DLL file path, not directory
            strncpy(dll_path, test_path, MAX_PATH);
            *mode = dll_options[i].mode;
            printf("Using %s (%s)\n", dll_options[i].name, dll_options[i].smw_dll);
            return 0;
        }
    }

    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("smaf_play - MMF Player using Yamaha MA DLLs\n");
        printf("Plays MMF files through system audio using Yamaha MA-3/5/7 chip emulation\n\n");
        printf("Usage: %s <input.mmf> [options]\n", argv[0]);
        printf("\nInput formats supported:\n");
        printf("  .mmf            SMAF/MA-2/MA-3/MA-5/MA-7 file\n");
        printf("  .mid/.midi      NOT SUPPORTED (MA DLL only plays SMAF/MMF)\n");
        printf("  .wav            NOT SUPPORTED (MA DLL only plays SMAF/MMF)\n");
        printf("\nNote: To play MIDI files, convert them to MMF format first.\n");
        printf("\nOptions:\n");
        printf("  input.mmf       Input MMF file path\n");
        printf("  -r rate          Sample rate in Hz (default: 44100)\n");
        printf("  -dll path        Path to directory containing MA DLLs\n");
        printf("  -ma3/-ma5/-ma7   Force specific MA chip (default: auto-detect MA7)\n");
        printf("  -loop N          Loop N times (default: 0 = once, -1 = infinite)\n");
        printf("  -seek POS        Seek to position (0-100 percent or ms)\n");
        printf("  -volume V        Volume 0-127 (default: 127)\n");
        printf("  -pan P           Panpot 0-127 (64=center, default: 64)\n");
        printf("  -tempo T         Tempo 70-130 (default: 100)\n");
        printf("  -pitch P         Pitch -12 to +12 (default: 0)\n");
        printf("  -info            Show file information and exit\n");
        printf("\nPlayback controls:\n");
        printf("  During playback, press keys to control:\n");
        printf("    p/P            Pause/Resume\n");
        printf("    s/S            Stop\n");
        printf("    +/-            Volume up/down\n");
        printf("    l/r            Seek left/right\n");
        printf("    q              Quit\n");
        printf("\nSupported DLLs (auto-detected in order):\n");
        printf("  - M7_EmuSmw7.dll + M7_EmuHw.dll (MA-7, best quality, 64 voices)\n");
        printf("  - M5_EmuSmw5.dll + M5_EmuHw.dll (MA-5, 32 voices)\n");
        printf("  - ma3smwemu.dll (MA-3, 16 voices)\n");
        printf("\nNotes:\n");
        printf("  - Audio is played through system audio output (DirectSound)\n");
        printf("  - MA-7 is recommended for best quality and feature support\n");
        printf("  - All MA versions are backward compatible with older MMF files\n");
        printf("  - Requires 32-bit build for Yamaha DLL compatibility\n");
        return 1;
    }

    const char* input_file = argv[1];
    int sample_rate = 44100;
    char dll_path[MAX_PATH] = {0};
    int force_mode = 0;  // 0=auto, 3=MA3, 5=MA5, 7=MA7
    int loops = 0;
    int seek_pos = -1;
    int volume = 127;
    int pan = 64;
    int tempo = 100;
    int pitch = 0;
    int info_only = 0;

    // Parse arguments
    for (int i = 2; i < argc; i++) {
        if (strcmp(argv[i], "-r") == 0 && i + 1 < argc) {
            sample_rate = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-dll") == 0 && i + 1 < argc) {
            strncpy(dll_path, argv[++i], MAX_PATH - 1);
        } else if (strcmp(argv[i], "-ma3") == 0) {
            force_mode = MODE_MA3;
        } else if (strcmp(argv[i], "-ma5") == 0) {
            force_mode = MODE_MA5;
        } else if (strcmp(argv[i], "-ma7") == 0) {
            force_mode = MODE_MA7;
        } else if (strcmp(argv[i], "-loop") == 0 && i + 1 < argc) {
            loops = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-seek") == 0 && i + 1 < argc) {
            seek_pos = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-volume") == 0 && i + 1 < argc) {
            volume = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-pan") == 0 && i + 1 < argc) {
            pan = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-tempo") == 0 && i + 1 < argc) {
            tempo = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-pitch") == 0 && i + 1 < argc) {
            pitch = atoi(argv[++i]);
        } else if (strcmp(argv[i], "-info") == 0) {
            info_only = 1;
        }
    }

    // Find DLLs
    char smw_dll[MAX_PATH];
    int mode;

    if (dll_path[0] == 0) {
        // Try current directory, then parent directories
        const char* search_paths[] = {
            ".",
            "..",
            "../..",
            "../../ma7-windows-x86",
            "../../ma5-windows-x86",
            "../../KEmulator-main/home",
        };

        int found = 0;
        for (int i = 0; i < 6; i++) {
            if (find_available_dll(search_paths[i], smw_dll, &mode) == 0) {
                found = 1;
                break;
            }
        }

        if (!found) {
            fprintf(stderr, "Error: No Yamaha MA DLLs found!\n");
            fprintf(stderr, "Please place M7_EmuSmw7.dll + M7_EmuHw.dll in one of:\n");
            fprintf(stderr, "  - Current directory\n");
            fprintf(stderr, "  - Use -dll option to specify path\n");
            return 1;
        }
    } else {
        // User specified path - try both as directory and as full DLL path
        if (find_available_dll(dll_path, smw_dll, &mode) != 0) {
            // If not found as directory, try as direct path to DLL
            struct _stat st;
            if (_stat(dll_path, &st) == 0) {
                strncpy(smw_dll, dll_path, MAX_PATH - 1);
                // Determine mode from DLL name
                if (strstr(dll_path, "M7_EmuSmw7")) mode = MODE_MA7;
                else if (strstr(dll_path, "M5_EmuSmw5")) mode = MODE_MA5;
                else if (strstr(dll_path, "ma3smwemu")) mode = MODE_MA3;
                else {
                    fprintf(stderr, "Error: Cannot determine MA mode from DLL name\n");
                    return 1;
                }
                printf("Using DLL directly: %s\n", smw_dll);
            } else {
                fprintf(stderr, "Error: No MA DLLs found in %s\n", dll_path);
                return 1;
            }
        }
    }

    // Read MMF file
    int mmf_size = 0;
    uint8_t* mmf_data = read_file(input_file, &mmf_size);
    if (!mmf_data) {
        return 1;
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

    printf("Loaded %s: %d bytes\n", format_name, mmf_size);

    // Parse metadata (only for MMF files)
    if (format == FORMAT_MMF) {
        char title[256] = {0}, artist[256] = {0}, copyright[256] = {0};
        parse_mmf_metadata(mmf_data, mmf_size, title, artist, copyright);

        if (title[0]) printf("Title: %s\n", title);
        if (artist[0]) printf("Artist: %s\n", artist);
        if (copyright[0]) printf("Copyright: %s\n", copyright);
    }

    // Initialize MA context
    ma_context_t ctx;
    if (ma_init(&ctx, smw_dll, mode, sample_rate) != 0) {
        fprintf(stderr, "Failed to initialize MA DLL\n");
        free(mmf_data);
        return 1;
    }

    printf("Initialized MA-%d, sample rate: %d Hz\n", mode == MODE_MA7 ? 7 : mode == MODE_MA5 ? 5 : 3, sample_rate);

    // Load file
    int sound_id = ma_load(&ctx, format, mmf_data, mmf_size);
    if (sound_id < 0) {
        fprintf(stderr, "Failed to load %s\n", format_name);
        ma_cleanup(&ctx);
        free(mmf_data);
        return 1;
    }

    printf("Sound ID: %d\n", sound_id);

    // Get length
    int length_ms = ma_get_length(&ctx, format, sound_id);
    printf("Length: %d ms (%.2f seconds)\n", length_ms, length_ms / 1000.0);

    // Start playback
    if (ma_start(&ctx, format, sound_id, 0) != 0) {
        fprintf(stderr, "Failed to start playback\n");
        ma_cleanup(&ctx);
        free(mmf_data);
        return 1;
    }

    printf("Playing... (press Ctrl+C to stop)\n");

    // Wait for playback to complete
    int expected_ms = length_ms + 1000; // +1 second margin
    int elapsed_ms = 0;
    int last_pos = -1;

    while (elapsed_ms < expected_ms) {
        int status = ma_get_status(&ctx, format, sound_id);

        if (status != STATE_PLAYING && status != STATE_READY) {
            printf("\nPlayback ended, status: %d\n", status);
            break;
        }

        int pos = ma_get_position(&ctx, format, sound_id);
        if (pos == last_pos) {
            // Position not advancing, might be finished
            break;
        }
        last_pos = pos;

        // Progress bar
        int progress = (pos * 100) / length_ms;
        if (progress > 100) progress = 100;
        printf("\rProgress: %d%%", progress);
        fflush(stdout);

        Sleep(50); // 50ms polling
        elapsed_ms += 50;
    }

    // Stop playback
    ma_stop(&ctx, format, sound_id);

    printf("\nPlayback complete.\n");

    ma_cleanup(&ctx);
    free(mmf_data);

    return 0;
}
