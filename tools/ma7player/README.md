# SMAF/MMF Player using Yamaha MA DLLs

Command-line player for SMAF/MMF files using Yamaha MA-3/5/7 chip emulation DLLs.

## Features

- Plays SMAF/MMF files through system audio (DirectSound)
- Supports Yamaha MA-3, MA-5, and MA-7 chip emulation
- Automatic DLL detection and loading
- Playback controls: play, stop, pause, resume
- Progress display during playback
- Metadata extraction (title, artist) from MMF files
- Real-time parameter adjustment: volume, pan, pitch, tempo

## Supported Formats

| Format | Extension | Status | Notes |
|--------|-----------|--------|-------|
| SMAF/MMF | `.mmf` | ✅ **Fully Supported** | Primary format for Yamaha MA chips |
| MIDI | `.mid`, `.midi` | ❌ **Not Supported** | MA DLL only plays SMAF/MMF format |
| WAV | `.wav` | ❌ **Not Supported** | Use standard audio players |

> **Note**: To play MIDI files, convert them to MMF format first using Yamaha SMAF Conversion Tools or third-party converters.

## Architecture

### 32-bit Version (smaf_play.exe)
```
smaf_play.exe (32-bit)
    ↓ Direct DLL loading
MA-7 DLL (32-bit)
    ↓ DirectSound
System audio output
```

### 64-bit Version (smaf_play64.exe)
```
smaf_play64.exe (64-bit)
    ↓ IPC (pipes)
ma_helper.exe (32-bit)
    ↓ Direct DLL loading
MA-7 DLL (32-bit)
    ↓ DirectSound
System audio output
```

## Building

### Prerequisites
- MinGW-w64 with 32-bit support (`i686-w64-mingw32-gcc`)
- Yamaha MA DLLs (32-bit x86 PE files)

### Build Script
```bash
bash build.sh
```

This builds both 32-bit and 64-bit versions:
- `build/smaf_play.exe` - 32-bit player
- `build/ma_helper.exe` - 32-bit helper process
- `build64/smaf_play64.exe` - 64-bit player

### Manual Build

**32-bit version:**
```bash
mkdir build && cd build
cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release ..
make smaf_play
```

**64-bit version:**
```bash
mkdir build64 && cd build64
CC=x86_64-w64-mingw32-gcc cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release ..
make smaf_play64
```

## Usage

### 32-bit Player
```bash
./smaf_play.exe <input.mmf> [options]
```

### 64-bit Player
```bash
./smaf_play64.exe <input.mmf> [options]
```

### Options

| Option | Description |
|--------|-------------|
| `-r rate` | Sample rate in Hz (default: 44100) |
| `-dll path` | Path to directory containing MA DLLs |
| `-ma3` | Force MA-3 mode (16 voices) |
| `-ma5` | Force MA-5 mode (32 voices) |
| `-ma7` | Force MA-7 mode (64 voices, default) |
| `-loop N` | Loop N times (0=once, -1=infinite) |
| `-volume V` | Volume 0-127 (default: 127) |
| `-pan P` | Panpot 0-127 (64=center, default: 64) |
| `-tempo T` | Tempo 70-130 (default: 100) |
| `-pitch P` | Pitch -12 to +12 semitones (default: 0) |
| `-info` | Show file information and exit |

### Examples

```bash
# Play MMF file
./smaf_play.exe song.mmf

# Play with MA-7 and 48kHz sample rate
./smaf_play.exe song.mmf -ma7 -r 48000

# 64-bit version (same options)
./smaf_play64.exe song.mmf -ma7

# Show file info
./smaf_play.exe song.mmf -info
```

## Yamaha MA DLLs

The player requires Yamaha MA DLLs for audio synthesis:

| DLL | Mode | Voices | Quality |
|-----|------|--------|---------|
| `M7_EmuSmw7.dll` + `M7_EmuHw.dll` | MA-7 | 64 | Best |
| `M5_EmuSmw5.dll` + `M5_EmuHw.dll` | MA-5 | 32 | Good |
| `ma3smwemu.dll` | MA-3 | 16 | Basic |

The player auto-detects available DLLs in this order: MA-7 → MA-5 → MA-3.

## API Integration

### C/C++ API (32-bit)
```c
#include "ma_dll.h"

ma_context_t ctx;
ma_init(&ctx, "path/to/dlls", MODE_MA7, 44100);

int sound_id = ma_load(&ctx, FORMAT_MMF, data, size);
ma_start(&ctx, FORMAT_MMF, sound_id, 0);

// Wait for playback...
while (ma_get_status(&ctx, FORMAT_MMF, sound_id) == STATE_PLAYING) {
    int pos = ma_get_position(&ctx, FORMAT_MMF, sound_id);
    printf("Position: %d ms\n", pos);
    Sleep(100);
}

ma_cleanup(&ctx);
```

### C/C++ API (64-bit)
```c
#include "ma_dll_64.h"

ma_context_64_t ctx;
ma_init_64(&ctx, NULL, MODE_MA7, 44100);  // Spawns 32-bit helper

int sound_id = ma_load_64(&ctx, FORMAT_MMF, data, size);
ma_start_64(&ctx, FORMAT_MMF, sound_id, 0);

// Same playback loop as 32-bit...
ma_cleanup_64(&ctx);
```

## Technical Details

### MA Chip Architecture
- **MA-3**: 16 FM voices, basic polyphonic synthesis
- **MA-5**: 32 FM voices, enhanced effects
- **MA-7**: 64 FM voices, advanced synthesis, best quality

### Audio Output
- Uses DirectSound for Windows audio output
- No PCM capture available (audio plays directly to system)
- Sample rates: 8kHz - 48kHz supported

### Format Support
- **SMAF**: Synthetic music Mobile Application Format
- **MMF**: Mobile Melody File (SMAF container)
- **MA-2 to MA-7**: Backward compatible with newer chips supporting older formats

## Limitations

1. **32-bit DLLs only**: Yamaha MA DLLs are 32-bit x86 PE files
2. **Windows only**: Requires DirectSound and Windows API
3. **No MIDI support**: MA DLLs only play SMAF/MMF format
4. **No WAV output**: DirectSound plays directly, no PCM capture

## Troubleshooting

### "Failed to load DLL"
- Ensure MA DLLs are in the same directory as the executable
- Check DLL architecture matches (32-bit DLLs for 32-bit player)

### "ma_helper.exe not found" (64-bit)
- Ensure `ma_helper.exe` is in the same directory as `smaf_play64.exe`
- Build the helper: `make ma_helper` in 32-bit build directory

### No audio output
- Check system volume and audio device
- Verify DirectSound is available
- Try different MA chip modes (`-ma3`, `-ma5`, `-ma7`)

## References

- Based on KEmulator's MaDll.java implementation
- Yamaha MA-7 specifications: `docs/MA7_CORE_ANALYSIS.md`
- SMAF format: `docs/SMAF_FILE_FORMAT.md`

## License

This code is provided for educational and research purposes.
Yamaha MA DLLs are proprietary and require appropriate licensing.
