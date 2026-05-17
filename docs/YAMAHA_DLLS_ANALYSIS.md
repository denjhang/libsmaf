# Yamaha 原版 DLL/SO 导出函数与 JNI 接口分析

来源：Yamaha 官方铃声 APP (jp.co.ymm.android.ringtone 1.8.19) + MCP-MA7 官方工具 + KEmulator

## 1. EmuSmw7 JNI 接口（Android）

文件：`com.yamaha.smafsynth.m7.emu.EmuSmw7`

### 1.1 Native 方法签名

```java
public class EmuSmw7 implements AudioTrack.OnPlaybackPositionUpdateListener {
    // 加载 libM7_EmuSmw7.so
    System.loadLibrary("M7_EmuSmw7");

    // --- 9个 native 方法 ---
    private native int  getGenerateData(byte[] buffer);  // 填充音频数据到 buffer
    private native long getLength();                      // 获取总时长(ms)
    private native long getPosition();                    // 获取当前位置(ms)
    private native long getState();                       // 获取状态: 0=未初始化, 1=已初始化, 2=播放中
    private native long init(long sampleRate, int bufferSize);  // 初始化引擎
    private native int  setVolume(long volume);           // 设置音量
    private native long start(byte[] mmfData, long vol, long offset, long format, long fmVoiceNum, long wtVoiceNum);
    private native long stop();                           // 停止播放
    private native long term();                           // 终止引擎
}
```

### 1.2 init() 流程

```
init(sampleRate=22050, streamType=3)
  ├── AudioTrack.getMinBufferSize(22050, ENCODING_PCM_16BIT, STEREO)
  ├── bufferSize = minBuf / 4  (取1/4作为周期通知大小)
  ├── intervalMs = (bufferSize * 1000) / sampleRate + 1
  ├── 创建 AudioTrack(streamType=3, 22050Hz, 16bit, stereo, mode=STREAM)
  ├── init(22050, bufferSize)  → native init
  ├── 启动填充线程 (5个buffer轮转)
  └── 预写3个静音buffer (消除启动延迟)
```

### 1.3 start() 流程

```
start(mmfData, volume=100, offset=-1, format=15, fmVoiceNum=24, wtVoiceNum=24)
  ├── volume 判断: .mid 文件 format=4, 其余 format=15
  ├── native start()
  └── 启动进度轮询 Timer(500ms)
```

### 1.4 音频输出模型（关键发现）

**.so 通过回调方式提供音频数据，Java 层负责播放：**

```
[填充线程]                              [AudioTrack]
   │                                      │
   ├─ getGenerateData(buffer[0])          │
   ├─ getGenerateData(buffer[1])          │
   ├─ getGenerateData(buffer[2])  ...     │
   │         │                            │
   │         └── native 生成 PCM 数据 ──→ AudioTrack.write()
   │                                      │
   │  onPeriodicNotification() ←──────────┘
   │  (每 bufferSize 字节触发一次)
   │  将下一个已填充的 buffer 写入 AudioTrack
   └── 5个 buffer 轮转 (双缓冲扩展)
```

**参数含义：**
- `fmVoiceNum` (24): FM 复音数，高质量=24，中等质量=16
- `wtVoiceNum` (24): WaveTable 复音数，同上
- `format` (15): MMF 格式类型
- `streamType` (3): Android AudioManager.STREAM_MUSIC

### 1.5 音质设置（player/n.java）

```java
// 高质量
case '1': sampleRate=44100(或48000), fmVoice=24, wtVoice=24
// 中等质量
case '2': sampleRate=22050(或24000), fmVoice=16, wtVoice=16
// 低质量
case '3': sampleRate=16000(或24000), fmVoice=16, wtVoice=16
// 默认
default:  sampleRate=22050(或24000), fmVoice=24, wtVoice=24
```

## 2. MMF 元数据解析（a.java）

文件：`com.yamaha.smafsynth.m7.emu.a`

从 MMF 数据中解析 OPLDA（可选 OPDA）标签信息：
- `ST:` — 歌曲名 (Song Title)
- `AN:` — 艺术家名 (Artist Name)
- `CR:` — 版权 (Copyright)
- `GR:` — 管理者团体名
- `MI:` — 管理信息

支持的字符编码：SJIS, ISO8859_1, EUC_KR, EUC_CN, Big5, KOI8_R

## 3. M7_EmuSmw7.dll 导出函数（Windows）

来源：MCP-MA7 官方工具，129个导出函数

### 3.1 MaSound 系列（18个）— MA-3 兼容层

| 函数 | 说明 |
|------|------|
| MaSound_Initialize | 初始化引擎 |
| MaSound_Terminate | 终止引擎 |
| MaSound_Create | 创建音源实例 |
| MaSound_Delete | 删除音源实例 |
| MaSound_Load | 加载 SMAF 数据 |
| MaSound_Unload | 卸载 SMAF 数据 |
| MaSound_Open | 打开播放通道 |
| MaSound_Close | 关闭播放通道 |
| MaSound_Start | 开始播放 |
| MaSound_Stop | 停止播放 |
| MaSound_Pause | 暂停 |
| MaSound_Restart | 恢复播放 |
| MaSound_Seek | 跳转位置 |
| MaSound_Standby | 待机 |
| MaSound_Control | 控制命令 |
| MaSound_DeviceControl | 设备控制 |
| MaSound_DeviceControlEx | 扩展设备控制 |

### 3.2 MaSmw 系列（14个）— MA-5 兼容层

| 函数 | 说明 |
|------|------|
| MaSmw_Init | 初始化 |
| MaSmw_Term | 终止 |
| MaSmw_Open | 打开 |
| MaSmw_Close | 关闭 |
| MaSmw_Start | 开始 |
| MaSmw_Stop | 停止 |
| MaSmw_Seek | 跳转 |
| MaSmw_Unload | 卸载 |
| MaSmw_Ctrl | 控制 |
| MaSmw_DevCtrl | 设备控制 |
| MaSmw_Check | 校验 |
| MaSmw_GetInfo | 获取信息 |
| MaSmw_GetKaraokeData | 获取卡拉OK数据 |

### 3.3 Mapi 系列（97个）— MA-7 原生接口

**引擎管理：**
Mapi_Initialize, Mapi_Terminate, Mapi_SetMode, Mapi_ResetMode, Mapi_GetMode, Mapi_GetOpenMode

**仿真接口：**
Mapi_EmuInitialize, Mapi_EmuTerminate, Mapi_EmuGenerate, Mapi_EmuGetInfo, Mapi_EmuSetInfo, Mapi_EmuSetPath, Mapi_EmuGetDinInfo, Mapi_EmuSetDinInfo

**Melody 通道（高级播放控制）：**
Mapi_Melody_Open, Mapi_Melody_Close, Mapi_Melody_Load, Mapi_Melody_Unload, Mapi_Melody_Start, Mapi_Melody_Stop, Mapi_Melody_Pause, Mapi_Melody_Seek, Mapi_Melody_Control, Mapi_Melody_Standby, Mapi_Melody_WaitReady, Mapi_Melody_OpenArgInit

**Phrase 通道（事件序列播放）：**
Mapi_Phrase_Play, Mapi_Phrase_Stop, Mapi_Phrase_Pause, Mapi_Phrase_Restart, Mapi_Phrase_Kill, Mapi_Phrase_Seek, Mapi_Phrase_CheckData, Mapi_Phrase_SetData, Mapi_Phrase_RemoveData, Mapi_Phrase_GetInfo, Mapi_Phrase_GetLength, Mapi_Phrase_GetPosition, Mapi_Phrase_GetStatus, Mapi_Phrase_GetVolume, Mapi_Phrase_SetVolume, Mapi_Phrase_GetPanpot, Mapi_Phrase_SetPanpot, Mapi_Phrase_GetLink, Mapi_Phrase_SetLink, Mapi_Phrase_SetEvHandler

**Phrase Audio 通道（音频流播放）：**
Mapi_Phrase_AudioOpen, Mapi_Phrase_AudioClose, Mapi_Phrase_AudioLoad, Mapi_Phrase_AudioUnload, Mapi_Phrase_AudioStart, Mapi_Phrase_AudioStop, Mapi_Phrase_AudioSeek, Mapi_Phrase_AudioControl, Mapi_Phrase_AudioStandby

**Stm 通道（流媒体）：**
Mapi_Stm_Open, Mapi_Stm_Close, Mapi_Stm_Load, Mapi_Stm_Unload, Mapi_Stm_Start, Mapi_Stm_Stop, Mapi_Stm_Seek, Mapi_Stm_Control, Mapi_Stm_Standby

**Hvs 通道（人声合成）：**
Mapi_Hvs_Open, Mapi_Hvs_Close, Mapi_Hvs_Load, Mapi_Hvs_Unload, Mapi_Hvs_Start, Mapi_Hvs_Stop, Mapi_Hvs_Seek, Mapi_Hvs_Control, Mapi_Hvs_Standby

**Rec 通道（录音）：**
Mapi_Rec_Open, Mapi_Rec_Close, Mapi_Rec_Load, Mapi_Rec_Unload, Mapi_Rec_Start, Mapi_Rec_Stop, Mapi_Rec_Control, Mapi_Rec_Standby

**Din 通道（数字输入）：**
Mapi_Din_Open, Mapi_Din_Close, Mapi_Din_Start, Mapi_Din_Stop, Mapi_Din_Standby, Mapi_Din_Control

**Dtmf 通道（DTMF 拨号音）：**
Mapi_Dtmf_Open, Mapi_Dtmf_Close, Mapi_Dtmf_Start, Mapi_Dtmf_Stop, Mapi_Dtmf_Standby, Mapi_Dtmf_Control

**数据管理：**
Mapi_CheckLoad, Mapi_CheckUnload, Mapi_GetContentsData, Mapi_GetKaraokeData, Mapi_GetPhraseList

**设备控制：**
Mapi_DeviceControl, Mapi_DeviceControlEx

### 3.4 Hw 系列（8个）— 硬件仿真层

M7_EmuHw.dll 导出：

| 函数 | 说明 |
|------|------|
| Hw_Initialize | 初始化硬件仿真 |
| Hw_Terminate | 终止仿真 |
| Hw_Generate | 生成一帧音频采样 |
| Hw_GenerateEx | 生成一帧（扩展参数）|
| Hw_GetInfo | 获取硬件信息 |
| Hw_SetInfo | 设置硬件信息 |
| Hw_ReadReg | 读寄存器 |
| Hw_WriteReg | 写寄存器 |

M5_EmuHw.dll 额外导出：
Hw_ReadDataReg, Hw_WriteDataReg, Hw_ReadStatusFlagReg, Hw_WriteStatusFlagReg, Hw_WaitDelayedFifoEmpty, Hw_WaitImmediateFifoEmpty, Hw_WaitValidData

## 4. M5_EmuSmw5.dll 导出函数（MA-5 Windows）

来源：SMAF_newer_DLLs，52个导出函数

### 4.1 MaSound 系列（23个）

比 MA-3 新增的函数：

| 函数 | 说明 |
|------|------|
| MaSound_EmuInitialize(sampleRate, channels, emuParam) | 仿真模式初始化 |
| MaSound_EmuTerminate() | 仿真模式终止 |
| MaSound_Generate(buffer, size) | 生成一帧 PCM 数据 |
| MaSound_GetEmuInfo(infoId, buffer, size) | 获取仿真信息 |
| MaSound_SetEmuPath(path) | 设置 Hw DLL 路径 |

### 4.2 Phrase 系列（29个）

| 函数 | 说明 |
|------|------|
| Phrase_CheckData | 校验数据 |
| Phrase_GetInfo | 获取信息 |
| Phrase_GetLength | 获取时长 |
| Phrase_GetLink | 获取链接 |
| Phrase_GetPanpot | 获取声像 |
| Phrase_GetPosition | 获取位置 |
| ... (完整 29 个，与 MaDll.java 定义一致) |

## 5. 各芯片架构对比

| 特性 | MA-3 | MA-5 | MA-7 |
|------|------|------|------|
| DLL 架构 | 单文件 (Smw+Hw) | 分离 (Smw+Hw) | 分离 (Smw+Hw) |
| .so 架构 | N/A | N/A | 合并 (Smw+Hw一体) |
| MaSound 接口 | 16个 | 23个(+仿真) | 18个 |
| Phrase 接口 | 26个 | 29个 | Mapi_Phrase_* |
| Mapi 原生接口 | 无 | 无 | 97个 |
| 仿真输出 | 自带 DirectSound | Generate回调 | Generate回调 / JNI |
| 音频格式 | 16bit PCM | 16bit PCM | 16bit PCM stereo |
| 最大采样率 | N/A | N/A | 48000 Hz |
| FM 复音数 | N/A | N/A | 最高64 |
| WT 复音数 | N/A | N/A | 最高64 |

## 6. smafplay 实现建议

### 6.1 推荐用 MA-7 Windows DLL

原因：
- 功能最完整（三套兼容接口）
- Mapi_EmuGenerate 提供回调式音频数据输出
- 向下兼容 MA-3/MA-5 的 MMF 文件

### 6.2 C++ 调用流程

```cpp
// 1. 加载 DLL
HMODULE hSmw = LoadLibrary("M7_EmuSmw7.dll");
HMODULE hHw  = LoadLibrary("M7_EmuHw.dll");

// 2. 初始化
Mapi_EmuInitialize(48000, 2, callback_func);

// 3. 加载 MMF
Mapi_Melody_Load(data, size, format, param);

// 4. 播放
Mapi_Melody_Open(handle, 0, eventCallback);
Mapi_Melody_Start(handle);

// 5. 回调中获取 PCM 数据
void callback_func(short* left, short* right, int samples) {
    // 写入音频设备
}

// 6. 停止
Mapi_Melody_Stop(handle);
Mapi_Melody_Close(handle);
Mapi_EmuTerminate();
```

### 6.3 注意事项

- MA-7 的 Mapi_EmuInitialize 需要 M7_EmuHw.dll 在同目录或指定路径
- 音频输出采用回调模型：DLL 调用回调函数提供 PCM 数据
- 需要配合 Windows audio API (waveOut 或 DirectSound) 播放
- 所有 DLL 均为 32 位 x86，必须用 32 位编译器
