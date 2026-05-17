/**
 * Yamaha MA-3/5/7 DLL Interface Wrapper
 * Based on KEmulator MaDll.java implementation
 * Only exports functions actually used by KEmulator
 */

#ifndef MA_DLL_H
#define MA_DLL_H

#include <windows.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Mode constants from MaDll.java
#define MODE_MA3  1
#define MODE_MA5  2
#define MODE_MA7  3

// Format constants from MaDll.java
#define FORMAT_MMF  1
#define FORMAT_PHR  2
#define FORMAT_RMD  3
#define FORMAT_MID  5
#define FORMAT_WAV  11

// State constants from MaDll.java
#define STATE_READY    3
#define STATE_PLAYING  4
#define STATE_PAUSED   5

// ============ MaSound interface (common to MA3/5/7) ============
// From MaDll.java lines 20-36

// Note: MA5 has different signature: MaSound_Initialize(int p1, int p2, int p3)
// We'll use the MA5 version and cast for MA3/MA7
typedef int (*MaSound_Initialize_t)(int p1, int p2, int p3);
typedef int (*MaSound_DeviceControl_t)(int p1, int p2, int p3, int p4);
typedef int (*MaSound_Create_t)(int format);
typedef int (*MaSound_Load_t)(int p1, void* p2, int p3, int p4, int p5, int p6);
typedef int (*MaSound_Control_t)(int p1, int p2, int p3, void* p4, int p5);
typedef int (*MaSound_Open_t)(int p1, int p2, int p3, int p4);
typedef int (*MaSound_Standby_t)(int p1, int p2, int p3);
typedef int (*MaSound_Start_t)(int p1, int p2, int p3, int p4);
typedef int (*MaSound_Stop_t)(int p1, int p2, int p3);
typedef int (*MaSound_Pause_t)(int p1, int p2, int p3);
typedef int (*MaSound_Restart_t)(int p1, int p2, int p3);
typedef int (*MaSound_Seek_t)(int p1, int p2, int p3, int p4, int p5);
typedef int (*MaSound_Close_t)(int p1, int p2, int p3);
typedef int (*MaSound_Unload_t)(int p1, int p2, int p3);
typedef int (*MaSound_Delete_t)(int p1);

// ============ MA5-specific functions ============
// From MaDll.java lines 124-127

typedef int (*MaSound_EmuInitialize_t)(int p1, int p2, int p3);
typedef int (*MaSound_EmuTerminate_t)(void);
typedef int (*MaSound_Terminate_t)(void);

// ============ MA7-specific functions ============
// From MaDll.java lines 131-140

typedef int (*MaSmw_Init_t)(void);
typedef int (*MaSmw_Term_t)(void);
typedef int (*Mapi_EmuGetInfo_t)(int p);
typedef int (*Mapi_EmuInitialize_t)(int p1, void* p2, void* p3, void* p4, void* p5, int p6);
typedef int (*Mapi_Initialize_t)(void);
typedef int (*Mapi_DeviceControlEx_t)(int p1, int p2, void* p3);
typedef int (*Mapi_GetMode_t)(void);
typedef int (*Mapi_SetMode_t)(int p);
typedef int (*Mapi_Terminate_t)(void);
typedef int (*Mapi_EmuTerminate_t)(void);

// ============ Phrase interface (MA3/5/7) ============
// From MaDll.java lines 94-117

typedef int (*Phrase_Initialize_t)(void);
typedef int (*Phrase_Terminate_t)(void);
typedef int (*Phrase_GetInfo_t)(void* info);
typedef int (*Phrase_CheckData_t)(void* data, long len);
typedef int (*Phrase_SetData_t)(int ch, void* data, long len, int check);
typedef int (*Phrase_Seek_t)(int ch, long pos);
typedef int (*Phrase_Play_t)(int ch, int loop);
typedef int (*Phrase_Stop_t)(int ch);
typedef int (*Phrase_Pause_t)(int ch);
typedef int (*Phrase_Restart_t)(int ch);
typedef int (*Phrase_Kill_t)(void);
typedef void (*Phrase_SetVolume_t)(int ch, int vol);
typedef int (*Phrase_GetVolume_t)(int ch);
typedef void (*Phrase_SetPanpot_t)(int ch, int vol);
typedef int (*Phrase_GetPanpot_t)(int ch);
typedef int (*Phrase_GetStatus_t)(int ch);
typedef long (*Phrase_GetPosition_t)(int ch);
typedef long (*Phrase_GetLength_t)(int ch);
typedef int (*Phrase_RemoveData_t)(int ch);
typedef int (*Phrase_SetLink_t)(int ch, long slave);
typedef int (*Phrase_SetEvHandler_t)(void* ev);

// ============ MA7 Phrase functions (Mapi_Phrase_*) ============
// From MaDll.java lines 143-162

typedef int (*Mapi_Phrase_GetInfo_t)(void* info);
typedef int (*Mapi_Phrase_CheckData_t)(void* data, int len);
typedef int (*Mapi_Phrase_SetData_t)(int ch, void* data, int len, int check);
typedef int (*Mapi_Phrase_Seek_t)(int ch, int pos);
typedef int (*Mapi_Phrase_Play_t)(int ch, int loop);
typedef int (*Mapi_Phrase_Stop_t)(int ch);
typedef int (*Mapi_Phrase_Pause_t)(int ch);
typedef int (*Mapi_Phrase_Restart_t)(int ch);
typedef int (*Mapi_Phrase_Kill_t)(void);
typedef void (*Mapi_Phrase_SetVolume_t)(int ch, int vol);
typedef int (*Mapi_Phrase_GetVolume_t)(int ch);
typedef void (*Mapi_Phrase_SetPanpot_t)(int ch, int vol);
typedef int (*Mapi_Phrase_GetPanpot_t)(int ch);
typedef int (*Mapi_Phrase_GetStatus_t)(int ch);
typedef int (*Mapi_Phrase_GetPosition_t)(int ch);
typedef int (*Mapi_Phrase_GetLength_t)(int ch);
typedef int (*Mapi_Phrase_RemoveData_t)(int ch);
typedef int (*Mapi_Phrase_SetLink_t)(int ch, long slave);
typedef int (*Mapi_Phrase_SetEvHandler_t)(void* ev);

// ============ MA7 Audio Phrase functions ============
// From MaDll.java lines 164-172

typedef int (*Mapi_Phrase_AudioStop_t)(int ch);
typedef int (*Mapi_Phrase_AudioStart_t)(int ch, short loops);
typedef int (*Mapi_Phrase_AudioSeek_t)(int ch, int pos, char p);
typedef int (*Mapi_Phrase_AudioStandby_t)(int ch);
typedef int (*Mapi_Phrase_AudioControl_t)(int ch, int p1, void* p2);
typedef int (*Mapi_Phrase_AudioOpen_t)(int p1, int p2, void* p3);
typedef int (*Mapi_Phrase_AudioClose_t)(int ch);
typedef int (*Mapi_Phrase_AudioUnload_t)(int ch);
typedef int (*Mapi_Phrase_AudioLoad_t)(void* data, int p1, char p2);

// ============ Audio generation structures ============
// From MA7_CORE_ANALYSIS.md lines 415-424

typedef struct {
    short* mainL;  // +0x00 Main output left
    short* mainR;  // +0x08 Main output right
    short* auxL;   // +0x10 Aux output left
    short* auxR;   // +0x18 Aux output right
    // ... up to 7 stereo pairs
} MAPI_BUFFER7;

// ============ Combined function pointers ============
// Forward declare context
typedef struct ma_context_t ma_context_t;

// Audio callback type: void(int samples, short* left, short* right, short* auxL, short* auxR)
typedef void (*ma_audio_callback_t)(int, short*, short*, short*, short*);

typedef struct {
    // MaSound (common)
    MaSound_Initialize_t MaSound_Initialize;
    MaSound_DeviceControl_t MaSound_DeviceControl;
    MaSound_Create_t MaSound_Create;
    MaSound_Load_t MaSound_Load;
    MaSound_Control_t MaSound_Control;
    MaSound_Open_t MaSound_Open;
    MaSound_Standby_t MaSound_Standby;
    MaSound_Start_t MaSound_Start;
    MaSound_Stop_t MaSound_Stop;
    MaSound_Pause_t MaSound_Pause;
    MaSound_Restart_t MaSound_Restart;
    MaSound_Seek_t MaSound_Seek;
    MaSound_Close_t MaSound_Close;
    MaSound_Unload_t MaSound_Unload;
    MaSound_Delete_t MaSound_Delete;

    // MA5 specific
    MaSound_EmuInitialize_t MaSound_EmuInitialize;
    MaSound_EmuTerminate_t MaSound_EmuTerminate;
    MaSound_Terminate_t MaSound_Terminate;

    // MA7 specific
    MaSmw_Init_t MaSmw_Init;
    MaSmw_Term_t MaSmw_Term;
    Mapi_EmuGetInfo_t Mapi_EmuGetInfo;
    Mapi_EmuInitialize_t Mapi_EmuInitialize;
    Mapi_Initialize_t Mapi_Initialize;
    Mapi_DeviceControlEx_t Mapi_DeviceControlEx;
    Mapi_GetMode_t Mapi_GetMode;
    Mapi_SetMode_t Mapi_SetMode;
    Mapi_Terminate_t Mapi_Terminate;
    Mapi_EmuTerminate_t Mapi_EmuTerminate;

    // Phrase (MA3/5)
    Phrase_Initialize_t Phrase_Initialize;
    Phrase_Terminate_t Phrase_Terminate;
    Phrase_GetInfo_t Phrase_GetInfo;
    Phrase_SetData_t Phrase_SetData;
    Phrase_Seek_t Phrase_Seek;
    Phrase_Play_t Phrase_Play;
    Phrase_Stop_t Phrase_Stop;
    Phrase_Pause_t Phrase_Pause;
    Phrase_Restart_t Phrase_Restart;
    Phrase_Kill_t Phrase_Kill;
    Phrase_SetVolume_t Phrase_SetVolume;
    Phrase_SetPanpot_t Phrase_SetPanpot;
    Phrase_GetStatus_t Phrase_GetStatus;
    Phrase_GetPosition_t Phrase_GetPosition;
    Phrase_GetLength_t Phrase_GetLength;
    Phrase_RemoveData_t Phrase_RemoveData;
    Phrase_SetLink_t Phrase_SetLink;
    Phrase_SetEvHandler_t Phrase_SetEvHandler;

    // MA7 Phrase
    Mapi_Phrase_GetInfo_t Mapi_Phrase_GetInfo;
    Mapi_Phrase_CheckData_t Mapi_Phrase_CheckData;
    Mapi_Phrase_SetData_t Mapi_Phrase_SetData;
    Mapi_Phrase_Seek_t Mapi_Phrase_Seek;
    Mapi_Phrase_Play_t Mapi_Phrase_Play;
    Mapi_Phrase_Stop_t Mapi_Phrase_Stop;
    Mapi_Phrase_Pause_t Mapi_Phrase_Pause;
    Mapi_Phrase_Restart_t Mapi_Phrase_Restart;
    Mapi_Phrase_Kill_t Mapi_Phrase_Kill;
    Mapi_Phrase_SetVolume_t Mapi_Phrase_SetVolume;
    Mapi_Phrase_GetVolume_t Mapi_Phrase_GetVolume;
    Mapi_Phrase_SetPanpot_t Mapi_Phrase_SetPanpot;
    Mapi_Phrase_GetPanpot_t Mapi_Phrase_GetPanpot;
    Mapi_Phrase_GetStatus_t Mapi_Phrase_GetStatus;
    Mapi_Phrase_GetPosition_t Mapi_Phrase_GetPosition;
    Mapi_Phrase_GetLength_t Mapi_Phrase_GetLength;
    Mapi_Phrase_RemoveData_t Mapi_Phrase_RemoveData;
    Mapi_Phrase_SetLink_t Mapi_Phrase_SetLink;
    Mapi_Phrase_SetEvHandler_t Mapi_Phrase_SetEvHandler;

    // MA7 Audio Phrase
    Mapi_Phrase_AudioStop_t Mapi_Phrase_AudioStop;
    Mapi_Phrase_AudioStart_t Mapi_Phrase_AudioStart;
    Mapi_Phrase_AudioSeek_t Mapi_Phrase_AudioSeek;
    Mapi_Phrase_AudioStandby_t Mapi_Phrase_AudioStandby;
    Mapi_Phrase_AudioControl_t Mapi_Phrase_AudioControl;
    Mapi_Phrase_AudioOpen_t Mapi_Phrase_AudioOpen;
    Mapi_Phrase_AudioClose_t Mapi_Phrase_AudioClose;
    Mapi_Phrase_AudioUnload_t Mapi_Phrase_AudioUnload;
    Mapi_Phrase_AudioLoad_t Mapi_Phrase_AudioLoad;

    // Audio generation (MA7 only)
    void (*Mapi_EmuGenerate)(MAPI_BUFFER7* buf, unsigned int samples);
} ma_functions_t;

struct ma_context_t {
    HMODULE dll;
    int mode;
    int initialized;
    int emu_buf;
    int format_id[16];  // Support multiple formats
    void* sound_buffers[256];  // Track loaded sounds
    int sound_count;
    ma_functions_t* fn;  // Function pointers

    // Audio output (MA7 only)
    short* audio_buffer;
    int audio_buffer_size;
    int audio_samples_ready;
    ma_audio_callback_t user_callback;
};

// ============ API Functions ============

/**
 * Set audio callback for MA7 mode
 * @param ctx MA context
 * @param callback Callback function: void(int samples, short* left, short* right, short* auxL, short* auxR)
 */
void ma_set_audio_callback(ma_context_t* ctx, ma_audio_callback_t callback);

/**
 * Initialize MA DLL context
 * Matches MaDll.java init() (lines 218-321)
 */
int ma_init(ma_context_t* ctx, const char* dll_path, int mode, int sample_rate);

/**
 * Load MMF data
 * Matches MaDll.java load() (lines 333-360)
 */
int ma_load(ma_context_t* ctx, int format, const void* data, int size);

/**
 * Start playback
 * Matches MaDll.java start() (lines 399-404)
 */
int ma_start(ma_context_t* ctx, int format, int sound_id, int loops);

/**
 * Stop playback
 * Matches MaDll.java stop() (lines 406-411)
 */
int ma_stop(ma_context_t* ctx, int format, int sound_id);

/**
 * Pause playback
 */
int ma_pause(ma_context_t* ctx, int format, int sound_id);

/**
 * Resume playback
 */
int ma_resume(ma_context_t* ctx, int format, int sound_id);

/**
 * Get playback status
 * Matches MaDll.java getStatus() (lines 427-429)
 */
int ma_get_status(ma_context_t* ctx, int format, int sound_id);

/**
 * Get song length in ms
 * Matches MaDll.java getLength() (lines 431-433)
 */
int ma_get_length(ma_context_t* ctx, int format, int sound_id);

/**
 * Get current position in ms
 * Matches MaDll.java getPosition() (lines 435-437)
 */
int ma_get_position(ma_context_t* ctx, int format, int sound_id);

/**
 * Cleanup context
 * Matches MaDll.java destroy() (lines 446-476)
 */
void ma_cleanup(ma_context_t* ctx);

/**
 * Generate audio samples (MA7 only)
 * @param ctx MA context
 * @param left Left channel output buffer
 * @param right Right channel output buffer
 * @param samples Number of samples to generate
 * @return 0 on success, -1 on error
 */
int ma_generate(ma_context_t* ctx, short* left, short* right, int samples);

#ifdef __cplusplus
}
#endif

#endif // MA_DLL_H
