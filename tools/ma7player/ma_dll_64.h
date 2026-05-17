/**
 * 64-bit MA DLL Wrapper
 * Uses IPC to communicate with 32-bit helper process for playing MMF files
 * This allows 64-bit applications to use Yamaha MA DLLs (which are 32-bit only)
 */

#ifndef MA_DLL_64_H
#define MA_DLL_64_H

#include <stdint.h>
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

// Mode constants
#define MODE_MA3  1
#define MODE_MA5  2
#define MODE_MA7  3

// Format constants
#define FORMAT_MMF  1
#define FORMAT_MID  5
#define FORMAT_WAV  11

// State constants
#define STATE_READY    3
#define STATE_PLAYING  4
#define STATE_PAUSED   5

// IPC message types
typedef enum {
    MSG_INIT = 1,
    MSG_LOAD,
    MSG_START,
    MSG_STOP,
    MSG_PAUSE,
    MSG_RESUME,
    MSG_SEEK,
    GET_STATUS,
    GET_POSITION,
    GET_LENGTH,
    MSG_SET_VOLUME,
    MSG_SET_PAN,
    MSG_SET_PITCH,
    MSG_SET_TEMPO,
    MSG_CLEANUP
} ipc_message_type_t;

// IPC message structure
#pragma pack(push, 1)
typedef struct {
    uint32_t type;        // Message type
    uint32_t data_size;   // Size of additional data
    int32_t param1;       // First parameter
    int32_t param2;       // Second parameter
    int32_t result;       // Result (for response)
    uint32_t reserved;    // Reserved
} ipc_message_t;
#pragma pack(pop)

// 64-bit context (IPC wrapper)
typedef struct {
    HANDLE ipc_read;      // Read pipe (from helper stdout)
    HANDLE ipc_write;     // Write pipe (to helper stdin)
    HANDLE helper_process; // Helper process handle
    int initialized;
    int mode;
    int format_id;
    int sound_id;
    int sample_rate;
} ma_context_64_t;

/**
 * Initialize 64-bit MA wrapper
 * Spawns 32-bit helper process for actual DLL loading
 */
int ma_init_64(ma_context_64_t* ctx, const char* dll_dir, int mode, int sample_rate);

/**
 * Load MMF data (via IPC to 32-bit process)
 */
int ma_load_64(ma_context_64_t* ctx, int format, const void* data, int size);

/**
 * Start playback
 */
int ma_start_64(ma_context_64_t* ctx, int format, int sound_id, int loops);

/**
 * Stop playback
 */
int ma_stop_64(ma_context_64_t* ctx, int format, int sound_id);

/**
 * Pause playback
 */
int ma_pause_64(ma_context_64_t* ctx, int format, int sound_id);

/**
 * Resume playback
 */
int ma_resume_64(ma_context_64_t* ctx, int format, int sound_id);

/**
 * Seek to position
 */
int ma_seek_64(ma_context_64_t* ctx, int format, int sound_id, int pos_ms);

/**
 * Get playback status
 */
int ma_get_status_64(ma_context_64_t* ctx, int format, int sound_id);

/**
 * Get current position (ms)
 */
int ma_get_position_64(ma_context_64_t* ctx, int format, int sound_id);

/**
 * Get total length (ms)
 */
int ma_get_length_64(ma_context_64_t* ctx, int format, int sound_id);

/**
 * Set volume (0-127)
 */
int ma_set_volume_64(ma_context_64_t* ctx, int format, int sound_id, int volume);

/**
 * Set pan (0-127, 64=center)
 */
int ma_set_pan_64(ma_context_64_t* ctx, int format, int sound_id, int pan);

/**
 * Set pitch (-12 to +12)
 */
int ma_set_pitch_64(ma_context_64_t* ctx, int format, int sound_id, int pitch);

/**
 * Set tempo (70-130)
 */
int ma_set_tempo_64(ma_context_64_t* ctx, int format, int sound_id, int tempo);

/**
 * Cleanup and shutdown helper process
 */
void ma_cleanup_64(ma_context_64_t* ctx);

/**
 * Check if 64-bit wrapper is available
 */
int ma_is_available_64(void);

#ifdef __cplusplus
}
#endif

#endif // MA_DLL_64_H
