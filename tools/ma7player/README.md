# smaf_play - Yamaha MA DLL MMF Player

## 功能特性

基于KEmulator的MaDll.java实现，完整支持Yamaha MA-3/5/7芯片仿真：

### 已实现功能
- ✅ 自动检测并加载MA-7/5/3 DLL
- ✅ 播放MMF文件（通过DirectSound输出）
- ✅ 获取曲目长度和播放位置
- ✅ 进度显示（百分比）
- ✅ 指定采样率（8000-48000 Hz）
- ✅ 解析MMF元数据（标题/作者/版权）

### MA DLL接口支持
根据KEmulator MaDll.java实现：

**MaSound接口**（所有模式）：
- MaSound_Initialize/Terminate
- MaSound_Create/Delete
- MaSound_Load/Unload
- MaSound_Open/Close
- MaSound_Start/Stop
- MaSound_Pause/Restart
- MaSound_Seek
- MaSound_Control（音量/音高/速度/状态/位置/长度）

**Phrase接口**（MA3/5）：
- Phrase_Play/Stop/Pause/Restart
- Phrase_SetVolume/SetPanpot
- Phrase_GetStatus/GetPosition/GetLength
- Phrase_SetData/RemoveData

**Mapi接口**（MA7）：
- Mapi_EmuInitialize/Terminate
- Mapi_Phrase_*（完整Phrase控制）
- Mapi_Phrase_Audio*（音频流支持）

### 构建要求
- 必须使用32位编译器（Yamaha DLL为32位）
- MinGW-w64 i686 或 Zig
- Windows系统（DirectSound）

### 使用方法

```bash
# 基本播放
smaf_play.exe song.mmf

# 指定采样率
smaf_play.exe song.mmf -r 48000

# 指定DLL路径
smaf_play.exe song.mmf -dll /path/to/dlls

# 强制使用MA-7
smaf_play.exe song.mmf -ma7
```

### 限制说明
- **音频输出**：MA DLL使用DirectSound直接输出，不提供PCM回调
- **WAV导出**：需要使用虚拟音频设备或libsmaf纯软件实现
- **平台**：仅Windows，32位

### 文件结构
```
tools/ma7player/
├── ma_dll.h          # MA DLL接口封装
├── ma_dll.c          # MA DLL实现
└── smaf_play.c       # 命令行播放器
```

### 技术架构
完全对应KEmulator的MaDll.java：
- ma_context_t ≈ MaDll类
- ma_functions_t ≈ 函数指针表
- init() ≈ MaDll.init()
- load() ≈ MaDll.load()
- start() ≈ MaDll.start()
- stop() ≈ MaDll.stop()
- getStatus() ≈ MaSound_Control(..., 6, ...)
- getPosition() ≈ MaSound_Control(..., 4, ...)
- getLength() ≈ MaSound_Control(..., 5, ...)
