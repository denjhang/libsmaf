/**
 * MIDI to SMAF/MMF Converter v3
 *
 * Based on Ghidra RE of SSD.dll:
 *   Ssd_SmfFmt10Cnv(midi_data, midi_size, output_buf, output_size, error_code_out)
 *   → loads Fc10.dll internally, calls ConvertSMF1ToSMF0
 *
 * Build (32-bit): i686-w64-mingw32-gcc -o midi2mmf.exe midi2mmf.c
 */

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* SSD.dll: __cdecl, not __stdcall! */
typedef int (__cdecl *Ssd_SmfFmt10Cnv_t)(
    void* midi_data,
    int   midi_size,
    void* output_buf,
    int   output_size,
    uint32_t* error_code  /* output: error detail on failure */
);

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

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: %s <input.mid> <output.mmf>\n", argv[0]);
        return 1;
    }

    const char* midi_path = argv[1];
    const char* mmf_path = argv[2];

    /* Load SSD.dll */
    HMODULE hDll = LoadLibraryA("SSD.dll");
    if (!hDll) {
        fprintf(stderr, "Cannot load SSD.dll (Error: %lu)\n", GetLastError());
        return 1;
    }

    Ssd_SmfFmt10Cnv_t pCnv = (Ssd_SmfFmt10Cnv_t)GetProcAddress(hDll, "Ssd_SmfFmt10Cnv");
    if (!pCnv) {
        fprintf(stderr, "Ssd_SmfFmt10Cnv not found\n");
        FreeLibrary(hDll);
        return 1;
    }

    printf("SSD.dll loaded, Ssd_SmfFmt10Cnv @ %p\n", (void*)pCnv);

    /* Read MIDI file */
    int midi_size = 0;
    uint8_t* midi_data = read_file(midi_path, &midi_size);
    if (!midi_data) {
        fprintf(stderr, "Cannot read %s\n", midi_path);
        FreeLibrary(hDll);
        return 1;
    }
    printf("MIDI: %s (%d bytes)\n", midi_path, midi_size);

    /* Allocate output buffer */
    int out_size = midi_size * 4;
    if (out_size < 65536) out_size = 65536;
    uint8_t* out_buf = (uint8_t*)malloc(out_size);
    if (!out_buf) {
        fprintf(stderr, "Out of memory\n");
        free(midi_data);
        FreeLibrary(hDll);
        return 1;
    }

    uint32_t error_code = 0;

    printf("Calling Ssd_SmfFmt10Cnv(buf=%p, size=%d, out=%p, outsize=%d, err=%p)...\n",
           midi_data, midi_size, out_buf, out_size, &error_code);

    int result = pCnv(midi_data, midi_size, out_buf, out_size, &error_code);
    printf("Result: %d (0x%08X), Error code: 0x%08X\n", result, result, error_code);

    if (result >= 0) {
        printf("SUCCESS! Output: %d bytes\n", result);
        printf("Header:");
        for (int i = 0; i < 16 && i < result; i++) printf(" %02X", out_buf[i]);
        printf("\n");
        write_file(mmf_path, out_buf, result);
        printf("Written: %s\n", mmf_path);
    } else {
        /* Try with larger buffer */
        printf("Failed, trying larger buffer...\n");
        free(out_buf);
        out_size = 1024 * 1024;
        out_buf = (uint8_t*)malloc(out_size);

        error_code = 0;
        result = pCnv(midi_data, midi_size, out_buf, out_size, &error_code);
        printf("Result: %d (0x%08X), Error code: 0x%08X\n", result, result, error_code);

        if (result >= 0) {
            printf("SUCCESS! Output: %d bytes\n", result);
            write_file(mmf_path, out_buf, result);
            printf("Written: %s\n", mmf_path);
        } else {
            fprintf(stderr, "Conversion failed.\n");
        }
    }

    free(out_buf);
    free(midi_data);
    FreeLibrary(hDll);
    return (result >= 0) ? 0 : 1;
}
