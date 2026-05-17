/**
 * 64-bit MA DLL Wrapper Implementation
 * Uses IPC to communicate with 32-bit helper process
 */

#include "ma_dll_64.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#ifdef _WIN64
#define IS_64_BIT 1
#else
#define IS_64_BIT 0
#endif

// 64-bit implementation - spawns 32-bit helper
#if IS_64_BIT

static char g_helper_path[MAX_PATH] = {0};

int ma_is_available_64(void) {
    // Check if ma_helper.exe exists
    if (g_helper_path[0] == 0) {
        // Try current directory
        if (GetFileAttributesA("ma_helper.exe") != INVALID_FILE_ATTRIBUTES) {
            strcpy(g_helper_path, "ma_helper.exe");
            return 1;
        }
        // Try build directory
        char exe_path[MAX_PATH];
        GetModuleFileNameA(NULL, exe_path, MAX_PATH);
        char* last_slash = strrchr(exe_path, '\\');
        if (last_slash) {
            *last_slash = '\0';
            snprintf(g_helper_path, sizeof(g_helper_path), "%s\\ma_helper.exe", exe_path);
        }
        return (GetFileAttributesA(g_helper_path) != INVALID_FILE_ATTRIBUTES) ? 1 : 0;
    }
    return 1;
}

int ma_init_64(ma_context_64_t* ctx, const char* dll_dir, int mode, int sample_rate) {
    memset(ctx, 0, sizeof(*ctx));
    ctx->mode = mode;
    ctx->sample_rate = sample_rate;

    if (!ma_is_available_64()) {
        fprintf(stderr, "Error: ma_helper.exe not found\n");
        return -1;
    }

    // Prepare helper command
    char cmd_line[MAX_PATH * 2];
    snprintf(cmd_line, sizeof(cmd_line), "%s", g_helper_path);

    // Add mode and sample rate arguments
    snprintf(cmd_line + strlen(cmd_line), sizeof(cmd_line) - strlen(cmd_line),
             " -ma%d -r %d",
             mode == MODE_MA7 ? 7 : mode == MODE_MA5 ? 5 : 3,
             sample_rate);

    // Create helper process with IPC
    SECURITY_ATTRIBUTES saAttr = {0};
    saAttr.nLength = sizeof(saAttr);
    saAttr.bInheritHandle = TRUE;

    HANDLE hReadPipe, hWritePipe;
    HANDLE hHelperStdinRead, hHelperStdoutWrite;

    // Create pipes for IPC
    // 64-bit writes to hWritePipe, helper reads from hHelperStdinRead
    if (!CreatePipe(&hHelperStdinRead, &hWritePipe, &saAttr, 0)) {
        fprintf(stderr, "Failed to create stdin pipe\n");
        return -1;
    }

    // Helper writes to hHelperStdoutWrite, 64-bit reads from hReadPipe
    if (!CreatePipe(&hReadPipe, &hHelperStdoutWrite, &saAttr, 0)) {
        fprintf(stderr, "Failed to create stdout pipe\n");
        CloseHandle(hHelperStdinRead);
        CloseHandle(hWritePipe);
        return -1;
    }

    // Ensure the write ends of the pipes are not inherited
    SetHandleInformation(hWritePipe, HANDLE_FLAG_INHERIT, 0);
    SetHandleInformation(hReadPipe, HANDLE_FLAG_INHERIT, 0);

    // Set stdin/stdout for helper
    STARTUPINFOA siInfo = {0};
    siInfo.cb = sizeof(siInfo);
    siInfo.dwFlags = STARTF_USESTDHANDLES;
    siInfo.hStdInput = hHelperStdinRead;
    siInfo.hStdOutput = hHelperStdoutWrite;
    siInfo.hStdError = GetStdHandle(STD_ERROR_HANDLE);

    // Create helper process
    PROCESS_INFORMATION pi = {0};
    if (!CreateProcessA(
            NULL,  // Application name
            cmd_line,  // Command line
            NULL,  // Process attributes
            NULL,  // Thread attributes
            TRUE,  // Inherit handles
            0,     // Creation flags
            NULL,  // Environment
            NULL,  // Current directory
            &siInfo,
            &pi)) {
        fprintf(stderr, "Failed to create helper process: %lu\n", GetLastError());
        CloseHandle(hHelperStdinRead);
        CloseHandle(hWritePipe);
        CloseHandle(hReadPipe);
        CloseHandle(hHelperStdoutWrite);
        return -1;
    }

    // Close helper's ends of the pipes (we don't need them)
    CloseHandle(hHelperStdinRead);
    CloseHandle(hHelperStdoutWrite);

    ctx->ipc_write = hWritePipe;
    ctx->ipc_read = hReadPipe;
    ctx->initialized = 1;
    ctx->helper_process = pi.hProcess;

    fprintf(stderr, "64-bit wrapper: Helper process started (PID: %lu)\n", pi.dwProcessId);

    return 0;
}

int send_command(ma_context_64_t* ctx, ipc_message_t* msg) {
    DWORD written;
    if (!WriteFile(ctx->ipc_write, msg, sizeof(ipc_message_t), &written, NULL)) {
        return -1;
    }
    if (written != sizeof(ipc_message_t)) {
        return -1;
    }
    return 0;
}

int recv_response(ma_context_64_t* ctx, ipc_message_t* response) {
    DWORD read;
    if (!ReadFile(ctx->ipc_read, response, sizeof(ipc_message_t), &read, NULL)) {
        return -1;
    }
    if (read != sizeof(ipc_message_t)) {
        return -1;
    }
    return 0;
}

int ma_load_64(ma_context_64_t* ctx, int format, const void* data, int size) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_LOAD;
    msg.param1 = format;
    msg.data_size = size;

    // Send command
    if (send_command(ctx, &msg) != 0) return -1;

    // Send data
    DWORD written;
    if (!WriteFile(ctx->ipc_write, data, size, &written, NULL)) {
        return -1;
    }
    if (written != size) {
        return -1;
    }

    // Get response
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_start_64(ma_context_64_t* ctx, int format, int sound_id, int loops) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_START;
    msg.param1 = format;
    msg.param2 = sound_id;
    msg.data_size = loops;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_stop_64(ma_context_64_t* ctx, int format, int sound_id) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_STOP;
    msg.param1 = format;
    msg.param2 = sound_id;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_pause_64(ma_context_64_t* ctx, int format, int sound_id) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_PAUSE;
    msg.param1 = format;
    msg.param2 = sound_id;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_resume_64(ma_context_64_t* ctx, int format, int sound_id) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_RESUME;
    msg.param1 = format;
    msg.param2 = sound_id;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_seek_64(ma_context_64_t* ctx, int format, int sound_id, int pos_ms) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_SEEK;
    msg.param1 = format;
    msg.param2 = sound_id;
    msg.data_size = pos_ms;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_get_status_64(ma_context_64_t* ctx, int format, int sound_id) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = GET_STATUS;
    msg.param1 = format;
    msg.param2 = sound_id;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_get_position_64(ma_context_64_t* ctx, int format, int sound_id) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = GET_POSITION;
    msg.param1 = format;
    msg.param2 = sound_id;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_get_length_64(ma_context_64_t* ctx, int format, int sound_id) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = GET_LENGTH;
    msg.param1 = format;
    msg.param2 = sound_id;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_set_volume_64(ma_context_64_t* ctx, int format, int sound_id, int volume) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_SET_VOLUME;
    msg.param1 = format;
    msg.param2 = sound_id;
    msg.data_size = volume;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_set_pan_64(ma_context_64_t* ctx, int format, int sound_id, int pan) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_SET_PAN;
    msg.param1 = format;
    msg.param2 = sound_id;
    msg.data_size = pan;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_set_pitch_64(ma_context_64_t* ctx, int format, int sound_id, int pitch) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_SET_PITCH;
    msg.param1 = format;
    msg.param2 = sound_id;
    msg.data_size = pitch;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

int ma_set_tempo_64(ma_context_64_t* ctx, int format, int sound_id, int tempo) {
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_SET_TEMPO;
    msg.param1 = format;
    msg.param2 = sound_id;
    msg.data_size = tempo;

    if (send_command(ctx, &msg) != 0) return -1;
    if (recv_response(ctx, &response) != 0) return -1;

    return response.result;
}

void ma_cleanup_64(ma_context_64_t* ctx) {
    if (!ctx->initialized) return;

    // Send cleanup command
    ipc_message_t msg = {0};
    ipc_message_t response = {0};

    msg.type = MSG_CLEANUP;
    send_command(ctx, &msg);
    recv_response(ctx, &response);

    // Close pipes
    if (ctx->ipc_read) {
        CloseHandle(ctx->ipc_read);
        ctx->ipc_read = NULL;
    }
    if (ctx->ipc_write) {
        CloseHandle(ctx->ipc_write);
        ctx->ipc_write = NULL;
    }

    // Terminate helper process
    if (ctx->helper_process) {
        TerminateProcess(ctx->helper_process, 0);
        CloseHandle(ctx->helper_process);
        ctx->helper_process = NULL;
    }

    ctx->initialized = 0;
}

#else
// 32-bit implementation - not used in ma_helper.exe
int ma_is_available_64(void) { return 0; }
int ma_init_64(ma_context_64_t* ctx, const char* dll_dir, int mode, int sample_rate) { return -1; }
int ma_load_64(ma_context_64_t* ctx, int format, const void* data, int size) { return -1; }
int ma_start_64(ma_context_64_t* ctx, int format, int sound_id, int loops) { return -1; }
int ma_stop_64(ma_context_64_t* ctx, int format, int sound_id) { return -1; }
int ma_pause_64(ma_context_64_t* ctx, int format, int sound_id) { return -1; }
int ma_resume_64(ma_context_64_t* ctx, int format, int sound_id) { return -1; }
int ma_seek_64(ma_context_64_t* ctx, int format, int sound_id, int pos_ms) { return -1; }
int ma_get_status_64(ma_context_64_t* ctx, int format, int sound_id) { return -1; }
int ma_get_position_64(ma_context_64_t* ctx, int format, int sound_id) { return -1; }
int ma_get_length_64(ma_context_64_t* ctx, int format, int sound_id) { return -1; }
int ma_set_volume_64(ma_context_64_t* ctx, int format, int sound_id, int volume) { return -1; }
int ma_set_pan_64(ma_context_64_t* ctx, int format, int sound_id, int pan) { return -1; }
int ma_set_pitch_64(ma_context_64_t* ctx, int format, int sound_id, int pitch) { return -1; }
int ma_set_tempo_64(ma_context_64_t* ctx, int format, int sound_id, int tempo) { return -1; }
void ma_cleanup_64(ma_context_64_t* ctx) {}
#endif
