/**
 * Yamaha MA-3/5/7 DLL Wrapper Implementation
 * Based on KEmulator MaDll.java
 */

#include "ma_dll.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global context for audio callback
static ma_context_t* g_audio_ctx = NULL;

// Audio callback - called by MA7 DLL when audio is ready
static void ma7_audio_callback(int samples, short* left, short* right, short* aux_left, short* aux_right) {
    (void)aux_left;
    (void)aux_right;

    if (g_audio_ctx && g_audio_ctx->user_callback) {
        g_audio_ctx->user_callback(samples, left, right, NULL, NULL);
    }
}

// Helper to load function
#define LOAD_FUNC(ctx, name) \
    ctx->fn->name = (name##_t)GetProcAddress(ctx->dll, #name); \
    if (!ctx->fn->name) { \
        fprintf(stderr, "Failed to load " #name "\n"); \
        return -1; \
    }

// Optional function load
#define LOAD_FUNC_OPT(ctx, name) \
    ctx->fn->name = (name##_t)GetProcAddress(ctx->dll, #name);

// Audio callback for MA7
static void audio_callback(int samples, short* left, short* right, short* aux_left, short* aux_right) {
    // Store audio data for later retrieval
    // For now, this is called by the DLL internally
    (void)samples;
    (void)left;
    (void)right;
    (void)aux_left;
    (void)aux_right;
}

int ma_init(ma_context_t* ctx, const char* dll_path, int mode, int sample_rate) {
    memset(ctx, 0, sizeof(*ctx));
    ctx->mode = mode;

    // Allocate function table
    ctx->fn = calloc(1, sizeof(ma_functions_t));
    if (!ctx->fn) {
        fprintf(stderr, "Failed to allocate function table\n");
        return -1;
    }

    // Load DLL
    ctx->dll = LoadLibraryA(dll_path);
    if (!ctx->dll) {
        DWORD error = GetLastError();
        fprintf(stderr, "Failed to load DLL: %s (Error %lu)\n", dll_path, error);
        return -1;
    }

    ma_functions_t* fn = ctx->fn;

    // Load common MaSound functions (all modes)
    LOAD_FUNC(ctx, MaSound_Initialize);
    LOAD_FUNC(ctx, MaSound_DeviceControl);
    LOAD_FUNC(ctx, MaSound_Create);
    LOAD_FUNC(ctx, MaSound_Load);
    LOAD_FUNC(ctx, MaSound_Control);
    LOAD_FUNC(ctx, MaSound_Open);
    LOAD_FUNC(ctx, MaSound_Standby);
    LOAD_FUNC(ctx, MaSound_Start);
    LOAD_FUNC(ctx, MaSound_Stop);
    LOAD_FUNC(ctx, MaSound_Pause);
    LOAD_FUNC(ctx, MaSound_Restart);
    LOAD_FUNC(ctx, MaSound_Seek);
    LOAD_FUNC(ctx, MaSound_Close);
    LOAD_FUNC(ctx, MaSound_Unload);
    LOAD_FUNC(ctx, MaSound_Delete);

    int r;

    // Mode-specific initialization from MaDll.java init()
    if (mode == MODE_MA3) {
        // MA3: Simple initialization
        r = fn->MaSound_Initialize(0, 0, 0);  // MA3 has 0-param version but we use unified signature
        if (r != 0) {
            fprintf(stderr, "MaSound_Initialize failed: %d\n", r);
            return -1;
        }

    } else if (mode == MODE_MA5) {
        // MA5: Lines 231-256 in MaDll.java
        LOAD_FUNC(ctx, MaSound_EmuInitialize);
        LOAD_FUNC(ctx, MaSound_EmuTerminate);
        LOAD_FUNC(ctx, MaSound_Terminate);

        // Allocate and align emu buffer
        ctx->emu_buf = (int)malloc(1024 + 256);
        int emuP = ctx->emu_buf;
        while ((emuP & 0xFF) != 0x81) {
            emuP++;
        }

        r = fn->MaSound_EmuInitialize(sample_rate, 2, emuP);
        if (r != 0) {
            fprintf(stderr, "MaSound_EmuInitialize failed: %d\n", r);
            return -1;
        }

        r = fn->MaSound_Initialize(0, emuP, 0);
        if (r != 0) {
            fprintf(stderr, "MaSound_Initialize failed: %d\n", r);
            return -1;
        }

        // DeviceControl sequence from MaDll.java
        fn->MaSound_DeviceControl(0x0D, 0, 0, 0);
        fn->MaSound_DeviceControl(0x05, 2, 0, 0);
        fn->MaSound_DeviceControl(0x06, 0, 0, 0);
        fn->MaSound_DeviceControl(0x08, 2, 0, 0);
        fn->MaSound_DeviceControl(0x09, 0, 0, 0);

    } else if (mode == MODE_MA7) {
        // MA7: Lines 257-315 in MaDll.java
        LOAD_FUNC(ctx, MaSmw_Init);
        LOAD_FUNC(ctx, MaSmw_Term);
        LOAD_FUNC(ctx, Mapi_EmuGetInfo);
        LOAD_FUNC(ctx, Mapi_EmuInitialize);
        LOAD_FUNC(ctx, Mapi_Initialize);
        LOAD_FUNC(ctx, Mapi_DeviceControlEx);
        LOAD_FUNC(ctx, Mapi_GetMode);
        LOAD_FUNC(ctx, Mapi_SetMode);
        LOAD_FUNC(ctx, Mapi_Terminate);
        LOAD_FUNC(ctx, Mapi_EmuTerminate);

        // Load MA7 Phrase functions
        LOAD_FUNC(ctx, Mapi_Phrase_GetInfo);
        LOAD_FUNC(ctx, Mapi_Phrase_CheckData);
        LOAD_FUNC(ctx, Mapi_Phrase_SetData);
        LOAD_FUNC(ctx, Mapi_Phrase_Seek);
        LOAD_FUNC(ctx, Mapi_Phrase_Play);
        LOAD_FUNC(ctx, Mapi_Phrase_Stop);
        LOAD_FUNC(ctx, Mapi_Phrase_Pause);
        LOAD_FUNC(ctx, Mapi_Phrase_Restart);
        LOAD_FUNC(ctx, Mapi_Phrase_Kill);
        LOAD_FUNC(ctx, Mapi_Phrase_SetVolume);
        LOAD_FUNC(ctx, Mapi_Phrase_GetVolume);
        LOAD_FUNC(ctx, Mapi_Phrase_SetPanpot);
        LOAD_FUNC(ctx, Mapi_Phrase_GetPanpot);
        LOAD_FUNC(ctx, Mapi_Phrase_GetStatus);
        LOAD_FUNC(ctx, Mapi_Phrase_GetPosition);
        LOAD_FUNC(ctx, Mapi_Phrase_GetLength);
        LOAD_FUNC(ctx, Mapi_Phrase_RemoveData);
        LOAD_FUNC(ctx, Mapi_Phrase_SetLink);
        LOAD_FUNC(ctx, Mapi_Phrase_SetEvHandler);

        // Load MA7 Audio Phrase functions
        LOAD_FUNC(ctx, Mapi_Phrase_AudioStop);
        LOAD_FUNC(ctx, Mapi_Phrase_AudioStart);
        LOAD_FUNC(ctx, Mapi_Phrase_AudioSeek);
        LOAD_FUNC(ctx, Mapi_Phrase_AudioStandby);
        LOAD_FUNC(ctx, Mapi_Phrase_AudioControl);
        LOAD_FUNC(ctx, Mapi_Phrase_AudioOpen);
        LOAD_FUNC(ctx, Mapi_Phrase_AudioClose);
        LOAD_FUNC(ctx, Mapi_Phrase_AudioUnload);
        LOAD_FUNC(ctx, Mapi_Phrase_AudioLoad);

        // Load audio generation function (not a typedef, load directly)
        ctx->fn->Mapi_EmuGenerate = (void (*)(MAPI_BUFFER7*, unsigned int))GetProcAddress(ctx->dll, "Mapi_EmuGenerate");
        if (!ctx->fn->Mapi_EmuGenerate) {
            fprintf(stderr, "Failed to load Mapi_EmuGenerate\n");
            return -1;
        }

        // Build config structure (72 bytes) - from MaDll.java lines 258-287
        uint8_t config[72];
        memset(config, 0, sizeof(config));

        *(int*)(config + 0) = 2;           // channels
        *(int*)(config + 4) = sample_rate; // sample rate
        config[8] = 1;
        *(int*)(config + 12) = 0;
        *(int*)(config + 16) = 15;
        *(int*)(config + 20) = 1;
        *(int*)(config + 24) = 1;
        *(short*)(config + 28) = 120;
        *(short*)(config + 30) = 120;
        *(short*)(config + 32) = 120;
        *(short*)(config + 34) = 120;
        *(short*)(config + 36) = 240;
        *(short*)(config + 38) = 240;
        *(short*)(config + 40) = 240;
        *(short*)(config + 42) = 240;
        *(short*)(config + 44) = 12;
        *(short*)(config + 46) = 12;
        *(short*)(config + 48) = 12;
        *(short*)(config + 50) = 12;
        *(short*)(config + 52) = 16;
        *(short*)(config + 54) = 16;
        *(short*)(config + 56) = 24;
        *(short*)(config + 58) = 24;
        *(int*)(config + 60) = 0;
        *(int*)(config + 64) = 4096;
        config[68] = 1;

        r = fn->Mapi_EmuInitialize(0, config, ma7_audio_callback, NULL, NULL, 0);
        if (r != 0) {
            fprintf(stderr, "Mapi_EmuInitialize failed: %d\n", r);
            return -1;
        }

        // Set global context for callback
        g_audio_ctx = ctx;

        r = fn->Mapi_Initialize();
        if (r != 0) {
            fprintf(stderr, "Mapi_Initialize failed: %d\n", r);
            return -1;
        }

        // Unmute
        r = fn->Mapi_DeviceControlEx(0x10000, 0, NULL);
        if (r != 0) {
            fprintf(stderr, "Mapi_DeviceControlEx unmute failed: %d\n", r);
            return -1;
        }

        // Set mode to phrase (mode 2)
        r = fn->Mapi_SetMode(2);
        if (r != 0) {
            fprintf(stderr, "Mapi_SetMode failed: %d\n", r);
            return -1;
        }

        // Regular MaSound init
        r = fn->MaSound_Initialize(0, 0, 0);  // MA7 has 0-param version
        if (r != 0) {
            fprintf(stderr, "MaSound_Initialize failed: %d\n", r);
            return -1;
        }

    } else {
        fprintf(stderr, "Invalid mode: %d\n", mode);
        return -1;
    }

    // Initialize MMF format - from MaDll.java line 316
    r = fn->MaSound_Create(FORMAT_MMF);
    if (r < 0) {
        fprintf(stderr, "MaSound_Create MMF failed: %d\n", r);
        return -1;
    }
    ctx->format_id[FORMAT_MMF] = r;

    ctx->initialized = 1;
    return 0;
}

int ma_load(ma_context_t* ctx, int format, const void* data, int size) {
    if (!ctx->initialized) {
        fprintf(stderr, "Context not initialized\n");
        return -1;
    }

    if (format != FORMAT_MMF) {
        fprintf(stderr, "Only MMF format supported\n");
        return -1;
    }

    int format_id = ctx->format_id[format];
    ma_functions_t* fn = ctx->fn;

    // MaSound_Load - line 340 in MaDll.java
    int r = fn->MaSound_Load(format_id, (void*)data, size, 0, 0, 0);
    if (r < 1) {
        fprintf(stderr, "MaSound_Load failed: %d\n", r);
        return -1;
    }
    int sound_id = r;

    // MaSound_Open - line 345
    r = fn->MaSound_Open(format_id, sound_id, 0, 0);
    if (r != 0) {
        fprintf(stderr, "MaSound_Open failed: %d\n", r);
        return -1;
    }

    // MaSound_Standby - line 348
    r = fn->MaSound_Standby(format_id, sound_id, 0);
    if (r != 0) {
        fprintf(stderr, "MaSound_Standby failed: %d\n", r);
        return -1;
    }

    // Set default parameters - from MaDll.java lines 352-355
    int vol_param = 127;
    fn->MaSound_Control(format_id, sound_id, 0, &vol_param, 0);  // Volume

    int pitch_param = 0;
    fn->MaSound_Control(format_id, sound_id, 2, &pitch_param, 0);  // Pitch

    int tempo_param = 100;
    fn->MaSound_Control(format_id, sound_id, 1, &tempo_param, 0);  // Tempo

    fn->MaSound_Seek(format_id, sound_id, 0, 0, 0);  // Seek to start

    // Store the data pointer so we can free it later
    ctx->sound_buffers[ctx->sound_count] = (void*)data;
    ctx->sound_count++;

    return sound_id;
}

int ma_start(ma_context_t* ctx, int format, int sound_id, int loops) {
    if (!ctx->initialized) {
        fprintf(stderr, "Context not initialized\n");
        return -1;
    }

    int format_id = ctx->format_id[format];
    return ctx->fn->MaSound_Start(format_id, sound_id, loops, 0);
}

int ma_stop(ma_context_t* ctx, int format, int sound_id) {
    if (!ctx->initialized) {
        fprintf(stderr, "Context not initialized\n");
        return -1;
    }

    int format_id = ctx->format_id[format];
    return ctx->fn->MaSound_Stop(format_id, sound_id, 0);
}

int ma_pause(ma_context_t* ctx, int format, int sound_id) {
    if (!ctx->initialized) {
        fprintf(stderr, "Context not initialized\n");
        return -1;
    }

    int format_id = ctx->format_id[format];
    return ctx->fn->MaSound_Pause(format_id, sound_id, 0);
}

int ma_resume(ma_context_t* ctx, int format, int sound_id) {
    if (!ctx->initialized) {
        fprintf(stderr, "Context not initialized\n");
        return -1;
    }

    int format_id = ctx->format_id[format];
    return ctx->fn->MaSound_Restart(format_id, sound_id, 0);
}

int ma_get_status(ma_context_t* ctx, int format, int sound_id) {
    if (!ctx->initialized) {
        return -1;
    }

    int format_id = ctx->format_id[format];
    return ctx->fn->MaSound_Control(format_id, sound_id, 6, NULL, 0);
}

int ma_get_length(ma_context_t* ctx, int format, int sound_id) {
    if (!ctx->initialized) {
        return -1;
    }

    int format_id = ctx->format_id[format];
    return ctx->fn->MaSound_Control(format_id, sound_id, 5, NULL, 0);
}

int ma_get_position(ma_context_t* ctx, int format, int sound_id) {
    if (!ctx->initialized) {
        return -1;
    }

    int format_id = ctx->format_id[format];
    return ctx->fn->MaSound_Control(format_id, sound_id, 4, NULL, 0);
}

void ma_cleanup(ma_context_t* ctx) {
    if (!ctx->initialized) {
        return;
    }

    ma_functions_t* fn = ctx->fn;

    // Close all sounds
    for (int i = 0; i < ctx->sound_count; i++) {
        // Note: In real usage we'd track format and sound_id properly
        // For now just cleanup the context
    }

    // Delete format
    if (ctx->format_id[FORMAT_MMF]) {
        fn->MaSound_Delete(ctx->format_id[FORMAT_MMF]);
    }

    // Mode-specific termination
    if (ctx->mode == MODE_MA5) {
        fn->MaSound_Terminate();
        fn->MaSound_EmuTerminate();
    } else if (ctx->mode == MODE_MA7) {
        fn->MaSmw_Term();
        fn->Mapi_Terminate();
        fn->Mapi_EmuTerminate();
    }

    // Free emu buffer if allocated
    if (ctx->emu_buf) {
        free((void*)ctx->emu_buf);
    }

    // Free function table
    free(ctx->fn);

    // Clear global context
    if (g_audio_ctx == ctx) {
        g_audio_ctx = NULL;
    }

    FreeLibrary(ctx->dll);
    ctx->initialized = 0;
}

void ma_set_audio_callback(ma_context_t* ctx, ma_audio_callback_t callback) {
    ctx->user_callback = callback;
}

int ma_generate(ma_context_t* ctx, short* left, short* right, int samples) {
    if (!ctx->initialized || ctx->mode != MODE_MA7) {
        fprintf(stderr, "Generate only works with MA7 mode\n");
        return -1;
    }

    MAPI_BUFFER7 buf;
    buf.mainL = left;
    buf.mainR = right;
    buf.auxL = NULL;
    buf.auxR = NULL;

    ctx->fn->Mapi_EmuGenerate(&buf, samples);
    return 0;
}
