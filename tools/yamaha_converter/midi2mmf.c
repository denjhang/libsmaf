/**
 * MIDI to SMAF/MMF Converter v9
 *
 * Strategy: Call CnvMA3SMF.dll's CnvTo directly (skip Ssd_Parser.dll crash).
 *
 * CnvTo struct: uint param_1[5]
 *   [0] = flags (set to 0)
 *   [1] = SMF data pointer
 *   [2] = SMF data size
 *   [3] = output buffer pointer
 *   [4] = output buffer size
 *
 * Also try CnvMA3SMAF_SC.dll for post-processing.
 *
 * Build (32-bit): i686-w64-mingw32-gcc -o midi2mmf.exe midi2mmf.c -lshlwapi
 */

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <direct.h>

static uint8_t* read_file(const char* path, int* out_size) {
    FILE* f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0) { fclose(f); return NULL; }
    uint8_t* buf = (uint8_t*)malloc(sz);
    if (!buf) { fclose(f); return NULL; }
    if ((long)fread(buf, 1, sz, f) != sz) { free(buf); fclose(f); return NULL; }
    fclose(f);
    *out_size = (int)sz;
    return buf;
}

static int write_file(const char* path, const void* data, int size) {
    FILE* f = fopen(path, "wb");
    if (!f) return -1;
    if ((int)fwrite(data, 1, size, f) != size) { fclose(f); return -1; }
    fclose(f);
    return 0;
}

static void hexdump(const char* label, const void* data, int len) {
    printf("  %s:", label);
    int n = len < 32 ? len : 32;
    for (int i = 0; i < n; i++) printf(" %02X", ((uint8_t*)data)[i]);
    if (len > 32) printf(" ...");
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 3) { printf("Usage: %s <input.mid> <output.mmf>\n", argv[0]); return 1; }

    const char* midi_path = argv[1], *mmf_path = argv[2];
    int midi_size = 0;
    uint8_t* midi_data = read_file(midi_path, &midi_size);
    if (!midi_data) { fprintf(stderr, "Cannot read %s\n", midi_path); return 1; }
    printf("Input: %s (%d bytes)\n", midi_path, midi_size);
    hexdump("Header", midi_data, 16);

    /* === Direct CnvMA3SMF.dll CnvTo call === */
    printf("\n=== Loading CnvMA3SMF.dll ===\n");
    HMODULE hCnv = LoadLibraryA("CnvMA3SMF.dll");
    if (!hCnv) {
        fprintf(stderr, "Cannot load CnvMA3SMF.dll (Error: %lu)\n", GetLastError());
        return 1;
    }

    /* CnvTo is exported by ordinal 2 */
    typedef uint32_t (__cdecl *CnvTo_t)(uint32_t* param_1);
    /* Also try by name */
    CnvTo_t pCnvTo = (CnvTo_t)GetProcAddress(hCnv, "CnvTo");
    if (!pCnvTo) {
        /* Try by ordinal */
        pCnvTo = (CnvTo_t)GetProcAddress(hCnv, (LPCSTR)2);
    }
    if (!pCnvTo) {
        /* Enumerate exports */
        printf("  CnvTo not found by name or ordinal 2, trying to enumerate...\n");
        /* On 32-bit Windows, GetProcAddress with ordinal uses (LPCSTR)ordinal */
        /* The ordinal value is passed as the low word of the string pointer */
        pCnvTo = (CnvTo_t)GetProcAddress(hCnv, MAKEINTRESOURCEA(2));
    }
    printf("  pCnvTo = %p\n", pCnvTo);

    if (pCnvTo) {
        /* Allocate output buffer (4x input size, minimum 256KB) */
        int out_size = midi_size * 4;
        if (out_size < 262144) out_size = 262144;
        uint8_t* out_buf = (uint8_t*)malloc(out_size);
        memset(out_buf, 0, out_size);

        uint32_t params[5];
        params[0] = 0;                         /* flags */
        params[1] = (uint32_t)(uintptr_t)midi_data; /* SMF data ptr */
        params[2] = (uint32_t)midi_size;        /* SMF data size */
        params[3] = (uint32_t)(uintptr_t)out_buf;  /* output buffer ptr */
        params[4] = (uint32_t)out_size;         /* output buffer size */

        printf("  Calling CnvTo: flags=0, in=%p(%d), out=%p(%d)\n",
               midi_data, midi_size, out_buf, out_size);

        uint32_t result = pCnvTo(params);
        printf("  Result: 0x%08X\n", result);
        printf("  params[4] after call: %u (actual output size)\n", params[4]);

        if ((result & 0x80000000) == 0) {
            /* Success - check output */
            int actual_size = (int)params[4];
            if (actual_size > 0 && actual_size <= out_size) {
                printf("  Output: %d bytes\n", actual_size);
                hexdump("SMAF", out_buf, actual_size);

                if (out_buf[0] == '#' && out_buf[1] == '#' && out_buf[2] == '#') {
                    printf("  >>> SMAF header detected! Saving to %s\n", mmf_path);
                    write_file(mmf_path, out_buf, actual_size);
                } else {
                    printf("  No SMAF header (expected '###SMAF'), saving anyway\n");
                    write_file(mmf_path, out_buf, actual_size);
                }
            }
        } else if (result == 0x80000001) {
            fprintf(stderr, "  Error: 0x80000001 = output buffer too small\n");
            fprintf(stderr, "  Need at least %u bytes, had %d\n", params[4], out_size);
            /* Retry with larger buffer */
            int new_size = (int)params[4] + 4096;
            uint8_t* new_buf = (uint8_t*)malloc(new_size);
            memset(new_buf, 0, new_size);
            params[3] = (uint32_t)(uintptr_t)new_buf;
            params[4] = (uint32_t)new_size;
            printf("  Retrying with %d byte buffer...\n", new_size);
            result = pCnvTo(params);
            printf("  Result: 0x%08X, actual size: %u\n", result, params[4]);
            if ((result & 0x80000000) == 0) {
                hexdump("SMAF", new_buf, (int)params[4]);
                write_file(mmf_path, new_buf, (int)params[4]);
                printf("  Saved to %s\n", mmf_path);
            }
            free(new_buf);
        } else {
            fprintf(stderr, "  Error: 0x%08X\n", result);
        }
        free(out_buf);
    }

    /* === Also try via CnvMA3SMAF_SC.dll === */
    printf("\n=== Loading CnvMA3SMAF_SC.DLL ===\n");
    HMODULE hSc = LoadLibraryA("CnvMA3SMAF_SC.DLL");
    if (hSc) {
        printf("  Loaded successfully\n");
        /* Check exports */
        FARPROC p1 = GetProcAddress(hSc, "CnvFrom");
        FARPROC p2 = GetProcAddress(hSc, "CnvTo");
        FARPROC p3 = GetProcAddress(hSc, MAKEINTRESOURCEA(1));
        FARPROC p4 = GetProcAddress(hSc, MAKEINTRESOURCEA(2));
        printf("  CnvFrom=%p CnvTo=%p Ord1=%p Ord2=%p\n", p1, p2, p3, p4);
    } else {
        printf("  Cannot load: %lu\n", GetLastError());
    }

    FreeLibrary(hCnv);
    if (hSc) FreeLibrary(hSc);
    free(midi_data);
    return 0;
}
