/**
 * Test Yamaha converter with voice file path
 */

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

typedef int (*CnvTo_t)(const char* input, const char* output, const char* voice_file);

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: %s <input.mid> <output.mmf>\n", argv[0]);
        return 1;
    }

    const char* midi_file = argv[1];
    const char* mmf_file = argv[2];
    const char* dll_file = "CnvMA3SMF.dll";

    HMODULE dll = LoadLibraryA(dll_file);
    if (!dll) {
        printf("Failed to load %s\n", dll_file);
        return 1;
    }

    CnvTo_t CnvTo = (CnvTo_t)GetProcAddress(dll, "CnvTo");
    if (!CnvTo) {
        printf("CnvTo not found\n");
        FreeLibrary(dll);
        return 1;
    }

    printf("Loaded %s\n", dll_file);

    // Try with voice file path as config
    const char* voice_files[] = {
        "standard",
        "bright",
        "bitter",
        "reflect",
        "cyber"
    };

    for (int i = 0; i < 5; i++) {
        printf("\nTrying with voice: %s\n", voice_files[i]);
        int result = CnvTo(midi_file, mmf_file, voice_files[i]);
        printf("  Result: %d (0x%X)\n", result, result);

        if (result == 0) {
            printf("  SUCCESS with voice=%s\n", voice_files[i]);
            FreeLibrary(dll);
            return 0;
        }
    }

    // Try with full paths
    printf("\nTrying with full paths...\n");
    const char* full_paths[] = {
        "Main\\standard.bmp",
        "Main\\bright.bmp",
        "Main\\bitter.bmp",
        "Main\\reflect.bmp",
        "Main\\cyber.bmp"
    };

    for (int i = 0; i < 5; i++) {
        printf("\nTrying with: %s\n", full_paths[i]);
        int result = CnvTo(midi_file, mmf_file, full_paths[i]);
        printf("  Result: %d (0x%X)\n", result, result);

        if (result == 0) {
            printf("  SUCCESS!\n");
            FreeLibrary(dll);
            return 0;
        }
    }

    FreeLibrary(dll);
    printf("\nAll attempts failed\n");
    return 1;
}
