cmake_minimum_required(VERSION 3.10)
project(libsmaf C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Debug-friendly flags
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
set(CMAKE_C_FLAGS_DEBUG "-g -O0")
set(CMAKE_C_FLAGS_RELEASE "-O2")

# Include paths
include_directories(include)
include_directories(src)

# Library sources
set(LIB_SOURCES
    src/smaf.c
    src/synth/fm_table.c
    src/synth/fm_synth.c
    src/synth/mixer.c
    src/synth/adpcm.c
    src/synth/noise.c
    src/parser/chunk.c
    src/sequencer/seq.c
    src/audio/audio_mock.c
)

# Static library
add_library(smaf STATIC ${LIB_SOURCES})
target_link_libraries(smaf m)

# Test executables
add_executable(test_fm test/test_fm.c)
target_link_libraries(test_fm smaf m)

add_executable(test_parser test/test_parser.c)
target_link_libraries(test_parser smaf m)

add_executable(test_play test/test_play.c)
target_link_libraries(test_play smaf m)

add_executable(test_eg_trace test/test_eg_trace.c)
target_link_libraries(test_eg_trace smaf m)

add_executable(test_debug test/test_debug.c)
target_link_libraries(test_debug smaf m)

# smaf_play - MA DLL based MMF player (Windows only, needs MA DLLs)
if(NOT MINGW AND NOT CYGWIN)
    # Native Windows build with MSVC/MinGW
else()
    # Unix-like build on Windows (Git Bash, MSYS2)
    # Still build smaf_play as it can use Windows DLLs
    add_executable(smaf_play tools/ma7player/smaf_play.c tools/ma7player/ma_dll.c)
    target_include_directories(smaf_play PRIVATE include tools/ma7player)
    target_link_libraries(smaf_play smaf m)

    # Force 32-bit build for Yamaha DLL compatibility
    set_target_properties(smaf_play PROPERTIES
        C_STANDARD 99
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
        LINK_FLAGS "-m32"
        C_FLAGS "-m32"
    )

    # Copy MA DLLs to build directory if found
    foreach(dll M7_EmuSmw7.dll M7_EmuHw.dll M5_EmuSmw5.dll M5_EmuHw.dll ma3smwemu.dll)
        find_file(FOUND_DLL_${dll} NAMES ${dll}
            PATHS
            "${CMAKE_SOURCE_DIR}/../ma7-windows-x86"
            "${CMAKE_SOURCE_DIR}/../ma5-windows-x86"
            "${CMAKE_SOURCE_DIR}/../KEmulator-main/home"
            "${CMAKE_SOURCE_DIR}/../SMAF_newer_DLLs"
            NO_DEFAULT_PATH
        )
        if(FOUND_DLL_${dll})
            add_custom_command(TARGET smaf_play POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${FOUND_DLL_${dll}}"
                "${CMAKE_BINARY_DIR}/${dll}"
                COMMENT "Copying ${dll} to build directory"
            )
        endif()
    endforeach()
endif()

# smaf_play64 - 64-bit MMF player (uses 32-bit helper via IPC)
add_executable(smaf_play64 tools/ma7player/smaf_play64.c tools/ma7player/ma_dll_64.c)
target_include_directories(smaf_play64 PRIVATE include tools/ma7player)
target_link_libraries(smaf_play64 smaf m)
set_target_properties(smaf_play64 PROPERTIES
    C_STANDARD 99
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)

# ma_helper - 32-bit helper process for 64-bit applications
add_executable(ma_helper tools/ma7player/ma_helper.c tools/ma7player/ma_dll.c)
target_include_directories(ma_helper PRIVATE include tools/ma7player)
target_link_libraries(ma_helper smaf m)
set_target_properties(ma_helper PROPERTIES
    C_STANDARD 99
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
    LINK_FLAGS "-m32"
    C_FLAGS "-m32"
)
