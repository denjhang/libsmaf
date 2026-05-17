/**
 * 32-bit MA DLL Helper for 64-bit Applications
 * This program runs as a separate process and handles MA DLL calls
 * Communicates with 64-bit host via stdin/stdout (IPC protocol)
 */

#ifndef MA_HELPER_H
#define MA_HELPER_H

#include "ma_dll.h"
#include "ma_dll_64.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// IPC Protocol
// All messages are binary, using ipc_message_t structure
// Host sends request, helper responds with result

// Helper modes
typedef enum {
    MODE_INTERACTIVE = 0,  // Interactive stdin/stdout mode
    MODE_SHARED_MEM = 1     // Shared memory mode (faster)
} helper_mode_t;

// Shared memory structure (for faster communication)
#pragma pack(push, 1)
typedef struct {
    volatile int ready;     // Ready flag
    volatile int command;   // Command to execute
    volatile int result;    // Result code
    volatile int param1;    // Parameter 1
    volatile int param2;    // Parameter 2
    volatile int data_size; // Size of data in shared buffer
    uint8_t data_buffer[4096];  // Shared data buffer
} shared_mem_t;
#pragma pack(pop)

/**
 * Run helper in interactive mode (stdin/stdout)
 * Returns 0 on success, -1 on error
 */
int run_helper_interactive(void);

/**
 * Run helper in shared memory mode
 * Creates named shared memory and waits for commands
 */
int run_helper_shared_mem(const char* mem_name);

/**
 * Process a single IPC command
 * Returns result code
 */
int process_command(const ipc_message_t* msg, ipc_message_t* response);

/**
 * Initialize helper with DLL directory
 */
int helper_init(const char* dll_dir, int mode, int sample_rate);

/**
 * Cleanup helper
 */
void helper_cleanup(void);

// Global helper state
typedef struct {
    ma_context_t ma_ctx;
    int initialized;
    int mode;
    int current_format;
    int current_sound_id;
    char mmf_data[16*1024*1024];  // Buffer for MMF data
    int mmf_size;
} helper_state_t;

extern helper_state_t g_helper_state;

#endif // MA_HELPER_H
