#!/bin/bash
# smaf_play.sh - Bash wrapper for MMF playback
# Usage: ./smaf_play.sh <input.mmf> [options]

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="$SCRIPT_DIR/build"

# Check if build exists
if [ ! -f "$BUILD_DIR/smaf_play.exe" ]; then
    echo "Error: smaf_play.exe not found!"
    echo "Please run: bash build.sh"
    exit 1
fi

# Display help if no arguments
if [ $# -eq 0 ]; then
    echo "smaf_play - MMF Player using Yamaha MA DLLs"
    echo "Plays MMF files through system audio using Yamaha MA-3/5/7 chip emulation"
    echo ""
    echo "Usage: $0 <input.mmf> [options]"
    echo ""
    echo "Options:"
    echo "  input.mmf        Input MMF file path"
    echo "  -r rate          Sample rate in Hz (default: 44100)"
    echo "                    Supported: 8000, 11025, 16000, 22050, 24000, 32000, 44100, 48000"
    echo "  -dll path        Path to directory containing MA DLLs"
    echo "  -ma3/-ma5/-ma7   Force specific MA chip (default: auto-detect MA7)"
    echo "  -loop N          Loop N times (default: 0 = once, -1 = infinite)"
    echo "  -seek POS        Seek to position (0-100 percent or ms)"
    echo "  -volume V        Volume 0-127 (default: 127)"
    echo "  -pan P           Panpot 0-127 (64=center, default: 64)"
    echo "  -tempo T         Tempo 70-130 (default: 100)"
    echo "  -pitch P         Pitch -12 to +12 (default: 0)"
    echo "  -info            Show file information and exit"
    echo ""
    echo "Examples:"
    echo "  $0 song.mmf"
    echo "  $0 song.mmf -r 48000"
    echo "  $0 song.mmf -ma7 -loop 2"
    echo "  $0 song.mmf -volume 100 -tempo 120"
    echo "  $0 /path/to/song.mmf -dll /path/to/dlls"
    exit 1
fi

# Get input file
INPUT_FILE="$1"
shift

# Check if file exists
if [ ! -f "$INPUT_FILE" ]; then
    echo "Error: File not found: $INPUT_FILE"
    exit 1
fi

# Build arguments
ARGS=("$INPUT_FILE")

# Parse remaining arguments
while [ $# -gt 0 ]; do
    case "$1" in
        -r)
            if [ $# -ge 2 ]; then
                ARGS+=("-r" "$2")
                shift 2
            else
                echo "Error: -r requires a value"
                exit 1
            fi
            ;;
        -dll)
            if [ $# -ge 2 ]; then
                ARGS+=("-dll" "$2")
                shift 2
            else
                echo "Error: -dll requires a path"
                exit 1
            fi
            ;;
        -ma3|-ma5|-ma7)
            ARGS+=("$1")
            shift
            ;;
        -loop|-seek|-volume|-pan|-tempo|-pitch)
            if [ $# -ge 2 ]; then
                ARGS+=("$1" "$2")
                shift 2
            else
                echo "Error: $1 requires a value"
                exit 1
            fi
            ;;
        -info)
            ARGS+=("-info")
            shift
            ;;
        *)
            echo "Error: Unknown option: $1"
            exit 1
            ;;
    esac
done

# Change to build directory and run player
cd "$BUILD_DIR"
exec ./smaf_play.exe "${ARGS[@]}"
