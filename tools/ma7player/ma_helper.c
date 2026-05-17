/**
 * 32-bit MA DLL Helper Process for 64-bit Applications
 * Runs as separate process and handles MA DLL calls via IPC (stdin/stdout)
 */

#include "ma_helper.h"
#include "ma_dll.h"
#include <windows.h>
#include <io.h>
#include <fcntl.h>

// Global helper state
helper_state_t g_helper_state = {0};

// IPC: Read a message from stdin
static int read_message(ipc_message_t* msg) {
    size_t read_size = fread(msg, sizeof(ipc_message_t), 1, stdin);
    if (read_size != 1) {
        return -1;  // EOF or error
    }
    return 0;
}

// IPC: Read data from stdin
static int read_data(void* buffer, int size) {
    size_t read_size = fread(buffer, 1, size, stdin);
    if (read_size != size) {
        return -1;  // EOF or error
    }
    return 0;
}

// IPC: Write a message to stdout
static int write_message(const ipc_message_t* msg) {
    size_t write_size = fwrite(msg, sizeof(ipc_message_t), 1, stdout);
    fflush(stdout);
    return (write_size == 1) ? 0 : -1;
}

// Process a single command
int process_command(const ipc_message_t* msg, ipc_message_t* response) {
    memset(response, 0, sizeof(*response));
    response->type = msg->type;
    response->result = -1;

    switch (msg->type) {
        case MSG_LOAD:
            // Read MMF data into buffer
            if (msg->data_size > 0 && msg->data_size <= sizeof(g_helper_state.mmf_data)) {
                if (read_data(g_helper_state.mmf_data, msg->data_size) != 0) {
                    response->result = -1;
                    break;
                }
                g_helper_state.mmf_size = msg->data_size;
                response->result = ma_load(&g_helper_state.ma_ctx,
                                           msg->param1,  // format
                                           g_helper_state.mmf_data,
                                           g_helper_state.mmf_size);
                if (response->result >= 0) {
                    g_helper_state.current_sound_id = response->result;
                    response->result = 0;  // Success
                }
            } else {
                response->result = -1;  // Invalid size
            }
            break;

        case MSG_START:
            response->result = ma_start(&g_helper_state.ma_ctx,
                                        msg->param1,  // format
                                        g_helper_state.current_sound_id,
                                        msg->param2);  // loops
            break;

        case MSG_STOP:
            response->result = ma_stop(&g_helper_state.ma_ctx,
                                        msg->param1,
                                        g_helper_state.current_sound_id);
            break;

        case MSG_PAUSE:
            response->result = ma_pause(&g_helper_state.ma_ctx,
                                        msg->param1,
                                        g_helper_state.current_sound_id);
            break;

        case MSG_RESUME:
            response->result = ma_resume(&g_helper_state.ma_ctx,
                                         msg->param1,
                                         g_helper_state.current_sound_id);
            break;

        case MSG_SEEK:
            response->result = 0;  // TODO: implement seek
            break;

        case GET_STATUS:
            response->result = ma_get_status(&g_helper_state.ma_ctx,
                                             msg->param1,
                                             g_helper_state.current_sound_id);
            break;

        case GET_POSITION:
            response->result = ma_get_position(&g_helper_state.ma_ctx,
                                               msg->param1,
                                               g_helper_state.current_sound_id);
            break;

        case GET_LENGTH:
            response->result = ma_get_length(&g_helper_state.ma_ctx,
                                             msg->param1,
                                             g_helper_state.current_sound_id);
            break;

        case MSG_SET_VOLUME:
        case MSG_SET_PAN:
        case MSG_SET_PITCH:
        case MSG_SET_TEMPO:
            response->result = 0;  // TODO: implement
            break;

        case MSG_CLEANUP:
            ma_cleanup(&g_helper_state.ma_ctx);
            g_helper_state.initialized = 0;
            response->result = 0;
            break;

        default:
            response->result = -1;
            break;
    }

    return 0;
}

// Run helper in interactive mode (stdin/stdout)
int run_helper_interactive(void) {
    ipc_message_t msg, response;

    // Set stdin/stdout to binary mode
    _setmode(_fileno(stdin), _O_BINARY);
    _setmode(_fileno(stdout), _O_BINARY);

    fprintf(stderr, "MA DLL Helper (32-bit) ready\n");

    while (1) {
        if (read_message(&msg) != 0) {
            break;  // EOF or error
        }

        if (msg.type == MSG_CLEANUP) {
            process_command(&msg, &response);
            write_message(&response);
            break;  // Exit after cleanup
        }

        process_command(&msg, &response);
        write_message(&response);
    }

    return 0;
}

int main(int argc, char* argv[]) {
    int mode = MODE_MA7;  // Default to MA-7
    int sample_rate = 44100;

    // Parse arguments
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-ma3") == 0) mode = MODE_MA3;
        else if (strcmp(argv[i], "-ma5") == 0) mode = MODE_MA5;
        else if (strcmp(argv[i], "-ma7") == 0) mode = MODE_MA7;
        else if (strcmp(argv[i], "-r") == 0 && i + 1 < argc) {
            sample_rate = atoi(argv[++i]);
        }
    }

    // Determine DLL directory (same as helper executable directory)
    char dll_dir[MAX_PATH] = {0};
    GetModuleFileNameA(NULL, dll_dir, MAX_PATH);
    char* last_slash = strrchr(dll_dir, '\\');
    if (last_slash) {
        *last_slash = '\0';
    }

    // Find the correct DLL for the mode
    char dll_path[MAX_PATH] = {0};
    const char* dll_name = NULL;
    if (mode == MODE_MA7) {
        dll_name = "M7_EmuSmw7.dll";
    } else if (mode == MODE_MA5) {
        dll_name = "M5_EmuSmw5.dll";
    } else {
        dll_name = "ma3smwemu.dll";
    }

    snprintf(dll_path, sizeof(dll_path), "%s\\%s", dll_dir, dll_name);

    // Initialize MA DLL
    const char* mode_str = (mode == MODE_MA7) ? "7" : (mode == MODE_MA5) ? "5" : "3";
    fprintf(stderr, "Initializing MA-%s helper with DLL: %s\n", mode_str, dll_path);

    if (ma_init(&g_helper_state.ma_ctx, dll_path, mode, sample_rate) != 0) {
        fprintf(stderr, "Failed to initialize MA DLL\n");
        return 1;
    }

    g_helper_state.initialized = 1;
    g_helper_state.mode = mode;

    fprintf(stderr, "Helper ready, entering IPC mode...\n");

    // Run IPC loop
    int result = run_helper_interactive();

    // Cleanup
    if (g_helper_state.initialized) {
        ma_cleanup(&g_helper_state.ma_ctx);
    }

    return result;
}
