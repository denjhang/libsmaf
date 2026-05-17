# MA-7 MMF 播放端到端流程分析

## 1. Java 层入口 (APK)

### 1.1 EmuSmw7 JNI 接口

```
EmuSmw7.java → native 方法:
  init(sampleRate, bufferSize)     → 初始化引擎
  start(mmfData, timeBase, fmVoice, wtVoice, fmSlot, wtSlot) → 开始播放
  getGenerateData(buffer)          → 生成一帧音频数据
  stop()                           → 停止
  term()                           → 终止
```

### 1.2 调用序列 (n.java — SMAF Player)

```
new EmuSmw7()                      // System.loadLibrary("M7_EmuSmw7")
init(22050, bufferSize)             // 创建 AudioTrack, 初始化 .so 引擎
start(mmfBytes, 100, fmVoice, wtVoice, 15L, 15L)  // 传入 MMF 全部数据
  ↓
生成线程循环:
  while(playing):
    getGenerateData(buffer)         // 请求一帧 PCM
    AudioTrack.write(buffer)        // 写入音频输出
```

### 1.3 JNI start 参数含义

```java
start(byte[] mmfData, long timeBase, long fmVoiceCount, long wtVoiceCount, long fmSlot, long wtSlot)
```

- `mmfData`: 完整 MMF 文件内容
- `timeBase`: 100 (tick 单位，对应 4ms/tick)
- `fmVoiceCount`: FM 音色数量 (24)
- `wtVoiceCount`: WT 音色数量 (24)
- `fmSlot`: FM 槽位数 (15)
- `wtSlot`: WT 槽位数 (15)

---

## 2. Native 层流程 (libM7_EmuSmw7.so)

### 2.1 init → EmuInit

```
EmuInit(sampleRate, conf):
  1. LoadHwLibrary()               // 加载 "硬件" 库函数指针 (纯软件模拟)
     → 设置 Hw_Initialize, Hw_Generate, Hw_WriteReg 等函数指针
     → DllMain(): 分配 13 个 4KB 输出缓冲区
  
  2. Hw_Initialize(sampleRate):
     a. new CCh(sampleRate)         // 创建通道对象
     b. FMCONTROL_Initialize()      // new CFmSynth (32声道×4算子)
     c. WTCONTROL_Initialize()      // new CWtSynth (32槽, ~1MB)
     d. STMCONTROL_Initialize()     // 流式合成器 (4通道 ADPCM)
     e. HVCONTROL_Initialize()      // 和弦振动
     f. DTMFCONTROL_Initialize()    // DTMF
     g. DSPCONTROL_Initialize()     // DSP (3D/SFX/混响/音量)
     h. DINCONTROL_Initialize()     // DIN 控制
     i. VIRTUALMEMORY_Initialize()  // 复制 64KB ROM + 清零 16KB RAM
     j. VIRTUALREGISTER_Initialize()
     k. 初始化寄存器默认值
  
  3. InitMaSmwApi()                // 设置 MaSmw API 函数指针
  
  4. CBInfo_Initialize()           // 回调信息初始化
```

### 2.2 start → MaSmw_Open + MaSmw_Start

JNI start 调用进入 .so 后，实际执行：

```
MaSmw_Open(param_id, open_param):
  1. 解析 param_id 格式: slot(free[0..3]) + type(0..8) + flags
  2. 分配资源:
     MaResMgr_AllocSequence()      // 分配序列器资源
     MaResMgr_AllocStream()        // 分配流通道 (如需要)
     MaResMgr_AllocRam()           // 分配 RAM 空间给音色数据
  
  3. 调用格式转换器虚函数表:
     PTR_MaDmyCnv_Open[format](seq_info, open_param)
       → MaMmfCnv_Open(seq_info, open_param)
  
  4. 根据 format type 决定 VoiceInit 参数:
     MaCmd_VoiceInit(slot, param2, param3, seqEnable, fmMode)
       → 初始化所有通道和声部结构
  
  5. 调用音色加载:
     PTR_MaDmyCnv_ReqVoice[format](seq_info)
       → MaMmfCnv_ReqVoice(seq_info)
  
  6. 设置 tick 节拍:
     PTR_MaDmyCnv_SetTick[format](seq_info, tickValue)
  
  7. 构建并发送初始化命令包:
     MaCmd_SeqInit() → MaDevDrv_SendDirectPacket()
  
  8. 设置流输出、声像等
```

### 2.3 MaMmfCnv_Open — MMF 解析

```
MaMmfCnv_Open(seq_info, open_param):
  1. 解析 MMF 文件结构:
     - 读取文件头 "MMMD" + 大小
     - 遍历顶层 chunk:
       CNTI → 内容信息
       OPDA → 可选数据
       MTR  → 乐谱轨道
  
  2. 解析 MTR chunk:
     - 读取轨道头 (通道数, 格式类型, 时间基)
     - 设置 format type = 2 (SMAF 格式)
  
  3. 存储解析结果到 seq_info 结构
```

### 2.4 MaMmfCnv_ReqVoice — 音色加载

```
MaMmfCnv_ReqVoice(seq_info):
  1. 初始化所有音色槽为 0xFF (未使用)
  
  2. 根据 format type 分支:
     format == 2: 扫描 MTR chunk 内的 f0 事件
     
     遍历 MTR 数据中的每个事件:
       跳过 delta time (变长编码)
       如果是 f0 (SysEx):
         解析 43 79 07 7f header:
         
         类型 01 7c (FM 音色):
           提取: prog, config, 30字节 FM 寄存器数据
           MaDevDrv_SendDirectRamData(ram_addr, voice_data, 30)
           MaSndDrv_SetVoice(seq_id, bank, prog, synth, key, ram_addr)
         
         类型 03/07/08/# (WT/PCM 音色):
           搜索匹配的 WT 波形事件
           MaSndDrv_SetWtWave(seq_id, prog, type, wave_data, wave_len)
           MaSndDrv_SetVoice(seq_id, bank, prog, synth, key, ram_addr)
  
  3. 设置音色映射表
```

### 2.5 MaSmw_Start — 开始播放

```
MaSmw_Start(param_id, ext_args):
  1. 构建序列器启动命令包
  2. 发送到设备驱动
  3. 启动硬件定时器/中断循环
```

### 2.6 getGenerateData — 音频生成循环

```
getGenerateData(buffer):
  1. Hw_Generate():
     遍历所有活跃声部:
       FM 合成: CFmSynth::Generate()  — 32声道 × 4算子
       WT 合成: CWtSynth::Generate()  — 32槽 × 波形插值
       STM 合成: CStmSynth::Generate() — 4通道 ADPCM
     混音到输出缓冲
     应用 DSP 效果 (3D, SFX, 混响)
     音量控制, 声像
     输出 16-bit PCM
```

---

## 3. MMF 文件中的数据流

### 3.1 MMF 文件结构

```
MMMD (文件头)
  ├─ CNTI (内容信息) — 格式类型, 通道配置
  ├─ OPDA (可选数据) — 歌曲信息, 歌词等
  └─ MTR  (乐谱轨道)
       ├─ 轨道头 (num_tracks, 配置, "Mtsu" tag)
       ├─ Setup Data (f0 SysEx 事件)
       │    ├─ FM 音色参数: f0 43 79 07 7f 01 7c <prog> <config> <30字节> f7
       │    ├─ WT 波形数据: f0 43 79 07 7f <xx> <type> <prog> <wave_data> f7
       │    └─ 配置事件: f0 43 79 07 7f 07 00 f7 / f0 43 79 07 7f 00 7f f7
       ├─ "Mtsq" (Score 序列数据)
       │    ├─ Delta time (变长编码)
       │    ├─ Note On/Off 事件
       │    ├─ Program Change
       │    ├─ Control Change (Volume, Pan, Expression...)
       │    └─ Pitch Bend
       └─ "Mtsu" (结束标记)
```

### 3.2 播放时的数据流向

```
MMF bytes
  ↓ MaMmfCnv_Open (解析)
seq_info 结构
  ↓ MaMmfCnv_ReqVoice (提取音色)
  ├─ FM 寄存器数据 → MaDevDrv_SendDirectRamData → VIRTUALMEMORY
  ├─ WT 波形数据   → MaSndDrv_SetWtWave → CWtSynth
  └─ 音色映射表    → MaSndDrv_SetVoice → 声部分配
  ↓ MaSmw_Start (启动序列器)
Score 事件流
  ↓ 序列器定时器
  ├─ NoteOn → MaCmd_NoteOn → 查找音色 → FM/WT 合成器发声
  ├─ NoteOff → MaCmd_NoteOff → 合成器静音
  ├─ Volume/Pan → 控制器更新
  └─ Program Change → 切换音色
  ↓ Hw_Generate (每帧)
所有活跃声部 → 混音 → 16-bit PCM → Java AudioTrack
```

---

## 4. libsmaf 需要实现的最小播放管线

### 4.1 已验证可行的部分

| 模块 | 状态 | 说明 |
|------|------|------|
| MMF 文件解析 | ✅ 格式清楚 | CNTI + OPDA + MTR, go-smaf 有参考实现 |
| MTR Setup Data 解析 | ✅ f0 事件格式已知 | 43 79 07 7f header + 类型分支 |
| FM 音色参数提取 | ✅ 30 字节寄存器格式 | FMCONTROL_SetFMVoiceReg case 3 解码 |
| FM 合成核心 | ✅ 算法已知 | 10-bit phase, Q15 multiply, 8 algorithms |
| 音频输出 | ✅ 直出 PCM | 16-bit signed, 可变采样率 |

### 4.2 已进一步确认的部分

| 模块 | 状态 | 说明 |
|------|------|------|
| MTR Score 序列格式 | ✅ 完全已知 | go-smaf 有完整解析：4种格式(0/1/2/-1)，可变长 delta time，无 NoteOff 用 gate time |
| WT/PCM 波形来源 | ✅ 已确认 | MA-7 .so **无**内置 WT ROM，所有波形数据来自 MMF f0 事件，DAT_00532d60 为空 BSS |
| Delta time 编码 | ✅ 已知 | 7-bit 变长编码，MSB=continue，格式0/-1 最多2字节，格式1/2 最多3字节 |

### 4.3 仍需实现的部分

| 模块 | 风险 | 说明 |
|------|------|------|
| WT/PCM 波形合成 | ⚠️ 需实现 | CWtSynth: 8-bit PCM + 线性插值 + LPF |
| ADPCM 解码 | ⚠️ 需实现 | Yamaha 4-bit ADPCM 格式 |
| 混音器 | ⚠️ 需实现 | 多声道混音 + 音量/声像 |

### 4.4 MTR Score 序列格式详解

#### 4.4.1 格式类型

| Format | 名称 | 通道数 | 编码方式 |
|--------|------|--------|----------|
| 0 | HandyPhone Standard | 4 | 紧凑字节 `CCOONNNN`，固定 velocity=127 |
| 1 | Mobile Standard Compressed | 16 | Huffman 压缩 + 格式2编码 |
| 2 | Mobile Standard | 16 | MIDI-like: 0x90/0x80/0xB0/0xC0/0xE0/0xF0 |
| -1 | SEQU | 可变 | 紧凑编码 + 扩展控制 |

#### 4.4.2 Delta Time 编码

```
7-bit 变长编码，MSB=1 表示后续还有字节:
  格式 0/-1: 最多 2 字节
  格式 1/2:  最多 3 字节

示例: 0x83 0x27 → (0x03 << 7) | 0x27 = 423 ticks
```

#### 4.4.3 格式2 (Mobile Standard) 事件类型

```
Note On (新velocity):  0x9N note velocity [gate_time_varlen]
Note On (沿用velocity): 0x8N note [gate_time_varlen]
Control Change:        0xBN cc value
Program Change:        0xCN program
Pitch Bend:            0xEN lsb msb  (center=0x2000)
System Exclusive:      0xF0 data... 0xF7
End of Track:          0xFF 0x2F 0x00
NOP:                   0xFF 0x00
```

**关键: SMAF 没有 Note Off 事件，用 gate time 表示音符时长。**

#### 4.4.4 格式0 (HandyPhone) 事件编码

```
音符事件: CCOONNNN
  CC = 通道 (0-3)
  OO = 八度偏移 (0-3), 基准八度=3
  NNNN = 音符号 (0-15)
  后跟: 可变长 gate time

控制事件: 0x00 CCCCCMMM
  MMM=0b00: FineTune
  MMM=0b01: 短音高弯
  MMM=0b10: 短调制
  MMM=0b11: 扩展控制 (Program Change, Volume, Pan 等)
```

#### 4.4.5 Time Base 值

```
0x00: 1 单位
0x01: 2 单位
0x02: 4 单位 (典型值, 4ms/tick @ 250Hz)
0x03: 5 单位
0x10: 10 单位
0x11: 20 单位
0x12: 40 单位
0x13: 50 单位
```

### 4.5 WT/PCM 波形数据来源确认

经过对 MA-7 .so 的深入分析:

1. **DAT_00532d60** (MaCmd_GetWtWave 的 "ROM" 路径, 索引 < 0x80):
   - 位于 BSS 段，从未被初始化代码填充
   - 包含的是查找索引，不是波形采样数据
   - 此路径在实际运行中不被使用

2. **MaSndDrv_SetWtWave** (动态路径, 索引 >= 0x80):
   - 从 MMF 文件的 f0 SysEx 事件读取波形数据
   - 通过 MaDevDrv_SendDirectRamData 上传到虚拟 RAM
   - 这是 WT 波形的唯一来源

3. **虚拟 ROM (64KB)**:
   - 包含 FM 合成查找表、CSM 波形等，不包含鼓声采样
   - 用于 FM 合成核心，不用于 WT 播放

**结论: 官方仿真器听到的 PCM 鼓声，是由 MMF 文件内嵌的 WT 波形数据产生的。**
较大的 MMF 文件通过 f0 事件携带完整的 PCM 波形，不需要内置 ROM。

### 4.6 建议实现优先级

```
Phase 1a: MMF 解析 + FM-only 播放
  - MMF 文件头解析
  - MTR Setup Data 中 f0 事件提取
  - FM 音色参数解码
  - FM 4-op 合成器 (8 算法)
  - 基本序列器 (NoteOn/NoteOff/Volume/Pan)
  - PCM 混音输出

Phase 1b: WT/PCM 支持
  - WT 波形加载
  - CWtSynth 波形插值合成
  - ADPCM 解码

Phase 1c: 完整序列器
  - 全部 MIDI 控制事件
  - Stream Audio
  - DSP 效果
```

---

## 5. 关于 MIDI 播放

MIDI 播放是独立于 SMAF 播放的工作：
- 需要内置 GM 音色表 (可从 MA-3 开源代码获取)
- 需要独立的 SMF 解析器
- 需要额外的 Program Change → 音色映射逻辑
- **建议在 SMAF/MMF 播放完全走通后再考虑**
