/**
 * Yamaha MA-7 DLL Interface Wrapper
 * Based on M7_EmuSmw7.dll and M7_EmuHw.dll exports
 */

#ifndef MA7_DLL_H
#define MA7_DLL_H

#include <windows.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// MA-7 DLL handles
typedef struct {
    HMODULE smw;
    HMODULE hw;
    int initialized;
    int sample_rate;
    int channels;
} ma7_context_t;

// MaSound interface (MA-3 compatibility layer)
typedef int (*MaSound_Initialize_t)(void);
typedef int (*MaSound_DeviceControl_t)(int p1, int p2, int p3, int p4);
typedef int (*MaSound_Create_t)(int format);
typedef int (*MaSound_Load_t)(int id, void* data, int len, int p4, int p5, int p6);
typedef int (*MaSound_Control_t)(int id, int sound, int cmd, void* param, int p5);
typedef int (*MaSound_Open_t)(int id, int sound, int p3, int p4);
typedef int (*MaSound_Standby_t)(int id, int sound, int p3);
typedef int (*MaSound_Start_t)(int id, int sound, int loops, int p4);
typedef int (*MaSound_Stop_t)(int id, int sound, int p3);
typedef int (*MaSound_Close_t)(int id, int sound, int p3);
typedef int (*MaSound_Unload_t)(int id, int sound, int p3);
typedef int (*MaSound_Delete_t)(int id);
typedef int (*MaSound_Terminate_t)(void);

// Mapi interface (MA-7 native)
typedef int (*Mapi_Initialize_t)(void);
typedef int (*Mapi_Terminate_t)(void);
typedef int (*Mapi_SetMode_t)(int mode);
typedef int (*Mapi_GetMode_t)(void);
typedef int (*Mapi_DeviceControlEx_t)(int cmd, int param, void* p3);

typedef int (*Mapi_EmuInitialize_t)(int p1, void* config, void* p3, void* p4, void* p5, int p6);
typedef int (*Mapi_EmuTerminate_t)(void);
typedef int (*Mapi_EmuGenerate_t)(short* left, short* right, int samples);
typedef int (*Mapi_EmuGetInfo_t)(int info_id, void* buffer, int size);

typedef int (*Mapi_Melody_Open_t)(int param_id, void* open_param, void* callback);
typedef int (*Mapi_Melody_Close_t)(int param_id);
typedef int (*Mapi_Melody_Load_t)(int param_id, void* data, int len, int format, void* param);
typedef int (*Mapi_Melody_Unload_t)(int param_id);
typedef int (*Mapi_Melody_Start_t)(int param_id);
typedef int (*Mapi_Melody_Stop_t)(int param_id);
typedef int (*Mapi_Melody_Pause_t)(int param_id);
typedef int (*Mapi_Melody_Restart_t)(int param_id);
typedef int (*Mapi_Melody_Seek_t)(int param_id, int pos);
typedef int (*Mapi_Melody_Control_t)(int param_id, int cmd, void* param);
typedef int (*Mapi_Melody_Standby_t)(int param_id, void* param);

// Mapi Phrase interface
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
typedef int (*Mapi_Phrase_SetEvHandler_t)(void* callback);

// Mapi Smw interface
typedef int (*MaSmw_Init_t)(void);
typedef int (*MaSmw_Term_t)(void);

// Function pointers structure
typedef struct {
    // MaSound functions
    MaSound_Initialize_t MaSound_Initialize;
    MaSound_DeviceControl_t MaSound_DeviceControl;
    MaSound_Create_t MaSound_Create;
    MaSound_Load_t MaSound_Load;
    MaSound_Control_t MaSound_Control;
    MaSound_Open_t MaSound_Open;
    MaSound_Standby_t MaSound_Standby;
    MaSound_Start_t MaSound_Start;
    MaSound_Stop_t MaSound_Stop;
    MaSound_Close_t MaSound_Close;
    MaSound_Unload_t MaSound_Unload;
    MaSound_Delete_t MaSound_Delete;
    MaSound_Terminate_t MaSound_Terminate;

    // Mapi functions
    Mapi_Initialize_t Mapi_Initialize;
    Mapi_Terminate_t Mapi_Terminate;
    Mapi_SetMode_t Mapi_SetMode;
    Mapi_GetMode_t Mapi_GetMode;
    Mapi_DeviceControlEx_t Mapi_DeviceControlEx;

    Mapi_EmuInitialize_t Mapi_EmuInitialize;
    Mapi_EmuTerminate_t Mapi_EmuTerminate;
    Mapi_EmuGenerate_t Mapi_EmuGenerate;
    Mapi_EmuGetInfo_t Mapi_EmuGetInfo;

    Mapi_Melody_Open_t Mapi_Melody_Open;
    Mapi_Melody_Close_t Mapi_Melody_Close;
    Mapi_Melody_Load_t Mapi_Melody_Load;
    Mapi_Melody_Unload_t Mapi_Melody_Unload;
    Mapi_Melody_Start_t Mapi_Melody_Start;
    Mapi_Melody_Stop_t Mapi_Melody_Stop;
    Mapi_Melody_Pause_t Mapi_Melody_Pause;
    Mapi_Melody_Restart_t Mapi_Melody_Restart;
    Mapi_Melody_Seek_t Mapi_Melody_Seek;
    Mapi_Melody_Control_t Mapi_Melody_Control;
    Mapi_Melody_Standby_t Mapi_Melody_Standby;

    Mapi_Phrase_GetInfo_t Mapi_Phrase_GetInfo;
    Mapi_Phrase_SetData_t Mapi_Phrase_SetData;
    Mapi_Phrase_Play_t Mapi_Phrase_Play;
    Mapi_Phrase_Stop_t Mapi_Phrase_Stop;
    Mapi_Phrase_SetVolume_t Mapi_Phrase_SetVolume;
    Mapi_Phrase_SetPanpot_t Mapi_Phrase_SetPanpot;
    Mapi_Phrase_GetStatus_t Mapi_Phrase_GetStatus;
    Mapi_Phrase_GetPosition_t Mapi_Phrase_GetPosition;
    Mapi_Phrase_GetLength_t Mapi_Phrase_GetLength;
    Mapi_Phrase_RemoveData_t Mapi_Phrase_RemoveData;
    Mapi_Phrase_Kill_t Mapi_Phrase_Kill;
    Mapi_Phrase_SetEvHandler_t Mapi_Phrase_SetEvHandler;

    MaSmw_Init_t MaSmw_Init;
    MaSmw_Term_t MaSmw_Term;
} ma7_functions_t;

// Constants
#define MA7_FORMAT_MMF    1
#define MA7_FORMAT_MID    5

#define MA7_MODE_MIDI     1
#define MA7_MODE_PHRASE   2

#define MA7_STATE_READY    3
#define MA7_STATE_PLAYING  4
#define MA7_STATE_PAUSED   5

// API functions
/**
 * Initialize MA-7 DLL system
 * @param ctx Context structure to fill
 * @param dll_path Path to M7_EmuSmw7.dll (M7_EmuHw.dll must be in same directory)
 * @param sample_rate Output sample rate (e.g., 44100, 48000)
 * @return 0 on success, -1 on error
 */
int ma7_init(ma7_context_t* ctx, const char* dll_path, int sample_rate);

/**
 * Load and play MMF file to WAV
 * @param ctx MA-7 context
 * @param mmf_data MMF file data
 * @param mmf_size MMF file size
 * @param wav_path Output WAV file path
 * @return 0 on success, -1 on error
 */
int ma7_play_to_wav(ma7_context_t* ctx, const uint8_t* mmf_data, int mmf_size,
                    const char* wav_path);

/**
 * Cleanup MA-7 context
 * @param ctx Context to cleanup
 */
void ma7_cleanup(ma7_context_t* ctx);

#ifdef __cplusplus
}
#endif

#endif // MA7_DLL_H
