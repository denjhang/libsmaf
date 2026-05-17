#!/bin/bash
# smaf_play64.sh - Bash wrapper for 64-bit MMF playback
# Uses 32-bit helper process via IPC
# Usage: ./smaf_play64.sh <input.mmf> [options]

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="$SCRIPT_DIR/build"

# Check if build exists
if [ ! -f "$BUILD_DIR/smaf_play64.exe" ]; then
    echo "Error: smaf_play64.exe not found!"
    echo "Please run: bash build.sh"
    exit 1
fi

# Display help if no arguments
if [ $# -eq 0 ]; then
    echo "smaf_play64 - 64-bit MMF Player (uses 32-bit helper process)"
    echo "Plays MMF files through system audio using Yamaha MA DLLs"
    echo ""
    echo "This is a 64-bit application that communicates with a 32-bit helper"
    echo "process to use Yamaha MA DLLs (which are 32-bit only)."
    echo ""
    echo "Usage: $0 <input.mmf> [options]"
    echo ""
    echo "Options:"
    echo "  input.mmf        Input MMF file path"
    echo "  -r rate          Sample rate in Hz (default: 44100)"
    echo "  -dll path        Path to directory containing MA DLLs"
    echo "  -ma3/-ma5/-ma7   Force specific MA chip (default: auto-detect MA7)"
    echo ""
    echo "Examples:"
    echo "  $0 song.mmf"
    echo "  $0 song.mmf -r 48000"
    echo "  $0 song.mmf -ma7"
    echo "  $0 /path/to/song.mmf -dll /path/to/dlls"
    echo ""
    echo "Note: Make sure ma_helper.exe is available in:"
    echo "  - Current directory"
    echo "  - Same directory as smaf_play64.exe"
    echo "  - Or in system PATH"
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

# Convert to Windows path if needed
if [[ "$INPUT_FILE" == /* ]]; then
    # Unix-style path, convert to Windows
    WIN_PATH="$(echo "$INPUT_FILE" | sed 's|^/\([^/]\)/\1:|; s|/|\\|g')"
    INPUT_FILE="$WIN_PATH"
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
                WIN_PATH="$(echo "$2" | sed 's|^/\([^/]\)/\1:|; s|/|\\|g')"
                ARGS+=("-dll" "$WIN_PATH")
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
        *)
            echo "Error: Unknown option: $1"
            exit 1
            ;;
    esac
done

# Change to build directory and run player
cd "$BUILD_DIR"
exec ./smaf_play64.exe "${ARGS[@]}"
