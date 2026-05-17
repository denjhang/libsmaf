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
