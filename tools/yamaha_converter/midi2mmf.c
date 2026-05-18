/**
 * MIDI to SMAF/MMF Converter v10
 *
 * Two-stage pipeline matching sscma3.dll:
 *   Stage 1: CnvMA3SMF.dll::CnvTo   (ordinal 2) — SMF → processed SMF
 *   Stage 2: CnvMA3SMAF_SC.dll::CnvTo (ordinal 3) — processed SMF → MMF (MMMD format)
 *
 * CnvTo param struct: uint param_1[5]
 *   [0] = flags (set to 0)
 *   [1] = input data pointer
 *   [2] = input data size
 *   [3] = output buffer pointer
 *   [4] = output buffer size (in) / actual size written (out)
 *
 * Error codes:
 *   0x80000001 = output buffer too small
 *   0x80000002 = invalid input format
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

typedef uint32_t (__cdecl *CnvTo_t)(uint32_t* param_1);

static int call_cnvtos(CnvTo_t pCnvTo, uint8_t* in_data, int in_size,
                       uint8_t** out_data, int* out_size, const char* stage_name) {
    int buf_size = in_size * 4;
    if (buf_size < 262144) buf_size = 262144;
    uint8_t* buf = (uint8_t*)malloc(buf_size);
    if (!buf) return -1;
    memset(buf, 0, buf_size);

    uint32_t params[5];
    params[0] = 0;
    params[1] = (uint32_t)(uintptr_t)in_data;
    params[2] = (uint32_t)in_size;
    params[3] = (uint32_t)(uintptr_t)buf;
    params[4] = (uint32_t)buf_size;

    printf("  [%s] Calling CnvTo: in=%p(%d), out=%p(%d)\n",
           stage_name, in_data, in_size, buf, buf_size);

    uint32_t result = pCnvTo(params);
    printf("  [%s] Result: 0x%08X\n", stage_name, result);

    if ((result & 0x80000000) == 0) {
        int actual = (int)params[4];
        printf("  [%s] Output: %d bytes\n", stage_name, actual);
        hexdump(stage_name, buf, actual);
        *out_data = buf;
        *out_size = actual;
        return 0;
    }

    if (result == 0x80000001) {
        /* Buffer too small — params[4] contains required size */
        int need = (int)params[4];
        printf("  [%s] Buffer too small, need %d bytes\n", stage_name, need);
        free(buf);
        buf = (uint8_t*)malloc(need + 4096);
        if (!buf) return -1;
        memset(buf, 0, need + 4096);
        params[3] = (uint32_t)(uintptr_t)buf;
        params[4] = (uint32_t)(need + 4096);

        printf("  [%s] Retrying with %d byte buffer...\n", stage_name, need + 4096);
        result = pCnvTo(params);
        printf("  [%s] Result: 0x%08X, actual size: %u\n", stage_name, result, params[4]);

        if ((result & 0x80000000) == 0) {
            *out_data = buf;
            *out_size = (int)params[4];
            return 0;
        }
        free(buf);
        fprintf(stderr, "  [%s] Retry failed: 0x%08X\n", stage_name, result);
        return -1;
    }

    fprintf(stderr, "  [%s] Error: 0x%08X\n", stage_name, result);
    free(buf);
    return -1;
}

int main(int argc, char* argv[]) {
    if (argc < 3) { printf("Usage: %s <input.mid> <output.mmf>\n", argv[0]); return 1; }

    const char* midi_path = argv[1], *mmf_path = argv[2];
    int midi_size = 0;
    uint8_t* midi_data = read_file(midi_path, &midi_size);
    if (!midi_data) { fprintf(stderr, "Cannot read %s\n", midi_path); return 1; }
    printf("Input: %s (%d bytes)\n", midi_path, midi_size);
    hexdump("MIDI Header", midi_data, 16);

    /* === Stage 1: CnvMA3SMF.dll::CnvTo (ordinal 2) — SMF → processed SMF === */
    printf("\n=== Stage 1: CnvMA3SMF.dll ===\n");
    HMODULE hCnv = LoadLibraryA("CnvMA3SMF.dll");
    if (!hCnv) {
        fprintf(stderr, "Cannot load CnvMA3SMF.dll (Error: %lu)\n", GetLastError());
        free(midi_data);
        return 1;
    }

    CnvTo_t pCnvTo1 = (CnvTo_t)GetProcAddress(hCnv, "CnvTo");
    if (!pCnvTo1) pCnvTo1 = (CnvTo_t)GetProcAddress(hCnv, MAKEINTRESOURCEA(2));
    if (!pCnvTo1) {
        fprintf(stderr, "Cannot find CnvTo in CnvMA3SMF.dll\n");
        FreeLibrary(hCnv);
        free(midi_data);
        return 1;
    }
    printf("  CnvTo = %p\n", pCnvTo1);

    uint8_t* stage1_out = NULL;
    int stage1_size = 0;
    if (call_cnvtos(pCnvTo1, midi_data, midi_size, &stage1_out, &stage1_size, "Stage1") != 0) {
        fprintf(stderr, "Stage 1 failed\n");
        FreeLibrary(hCnv);
        free(midi_data);
        return 1;
    }
    FreeLibrary(hCnv);

    /* Verify stage 1 output */
    if (stage1_size >= 4 && stage1_out[0] == 'M' && stage1_out[1] == 'T' &&
        stage1_out[2] == 'h' && stage1_out[3] == 'd') {
        printf("  Stage 1: Valid MThd output confirmed\n");
    } else {
        printf("  Stage 1: Warning — output doesn't start with MThd\n");
    }

    /* === Stage 2: CnvMA3SMAF_SC.dll::CnvTo (ordinal 3) — processed SMF → SMAF === */
    printf("\n=== Stage 2: CnvMA3SMAF_SC.dll ===\n");
    HMODULE hSc = LoadLibraryA("CnvMA3SMAF_SC.DLL");
    if (!hSc) {
        fprintf(stderr, "Cannot load CnvMA3SMAF_SC.DLL (Error: %lu)\n", GetLastError());
        /* Save stage 1 output as fallback */
        printf("  Saving stage 1 (processed SMF) output as fallback\n");
        write_file(mmf_path, stage1_out, stage1_size);
        free(stage1_out);
        free(midi_data);
        return 1;
    }

    /* CnvTo is ordinal 3 in CnvMA3SMAF_SC.dll (ordinal 1=GetMAxVersion, 2=CnvFrom) */
    CnvTo_t pCnvTo2 = (CnvTo_t)GetProcAddress(hSc, "CnvTo");
    if (!pCnvTo2) pCnvTo2 = (CnvTo_t)GetProcAddress(hSc, MAKEINTRESOURCEA(3));
    printf("  CnvTo = %p\n", pCnvTo2);

    uint8_t* stage2_out = NULL;
    int stage2_size = 0;
    if (pCnvTo2 && call_cnvtos(pCnvTo2, stage1_out, stage1_size, &stage2_out, &stage2_size, "Stage2") == 0) {
        /* Check for MMMD header (Mobile Music Data) */
        if (stage2_size >= 4 && stage2_out[0] == 'M' && stage2_out[1] == 'M' &&
            stage2_out[2] == 'M' && stage2_out[3] == 'D') {
            printf("  >>> MMMD header detected! Saving to %s\n", mmf_path);
        } else {
            printf("  No MMMD header detected, saving anyway\n");
        }
        write_file(mmf_path, stage2_out, stage2_size);
        printf("  Saved: %s (%d bytes)\n", mmf_path, stage2_size);
        free(stage2_out);
    } else {
        fprintf(stderr, "Stage 2 failed, saving stage 1 output as fallback\n");
        write_file(mmf_path, stage1_out, stage1_size);
    }

    FreeLibrary(hSc);
    free(stage1_out);
    free(midi_data);
    return 0;
}
