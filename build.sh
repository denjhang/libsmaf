#!/bin/bash
# Build script for smaf_play (32-bit for Yamaha DLL compatibility)

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="$SCRIPT_DIR/build"

echo "Building smaf_play (32-bit for Yamaha DLL compatibility)..."
cd "$SCRIPT_DIR"

# Check if we need 32-bit build
echo "Note: Yamaha DLLs are 32-bit, smaf_play must be compiled as 32-bit"

# Configure if needed (force 32-bit with zig cc if available)
if [ ! -f "$BUILD_DIR/Makefile" ]; then
    echo "Configuring CMake for 32-bit build..."

    # Try zig cc first
    if command -v zig &> /dev/null; then
        echo "Using zig for 32-bit compilation..."
        cmake -B "$BUILD_DIR" -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release \
            -DCMAKE_C_COMPILER="zig cc -target x86-windows-gnu" \
            -DCMAKE_CXX_COMPILER="zig c++ -target x86-windows-gnu"
    elif command -v i686-w64-mingw32-gcc &> /dev/null; then
        cmake -B "$BUILD_DIR" -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release \
            -DCMAKE_C_COMPILER=i686-w64-mingw32-gcc \
            -DCMAKE_CXX_COMPILER=i686-w64-mingw32-g++
    else
        echo "Error: No 32-bit compiler found!"
        echo "Options:"
        echo "  1. Install zig: https://ziglang.org/"
        echo "  2. Install mingw-w64-i686: pacman -S mingw-w64-i686-gcc"
        exit 1
    fi
fi

# Build
echo "Compiling..."
cd "$BUILD_DIR"
make smaf_play

# Copy MMF test file
if [ -f "$SCRIPT_DIR/ringtones/BrilliantSnow.mmf" ]; then
    cp "$SCRIPT_DIR/ringtones/BrilliantSnow.mmf" "$BUILD_DIR/"
    echo "Test MMF copied to build directory"
fi

echo "Build complete! Executable: $BUILD_DIR/smaf_play.exe"
file "$BUILD_DIR/smaf_play.exe"
echo ""
echo "Usage:"
echo "  cd $BUILD_DIR"
echo "  ./smaf_play.exe <input.mmf> [output.wav] [-r samplerate]"
