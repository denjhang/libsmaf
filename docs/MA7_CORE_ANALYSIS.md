# Yamaha MA-7 引擎核心架构分析

基于 Ghidra 12.1 对 libM7_EmuSmw7.so (ARM64) 的反编译伪代码，本文档总结 MA-7 引擎的三大核心子系统。

**数据来源**: 1442 个反编译函数，1215 个 .c 文件
**目标**: 为 libsmaf 纯软件实现提供架构参考

---

## 目录

1. [整体架构概览](#1-整体架构概览)
2. [MMF 播放管线](#2-mmf-播放管线)
3. [FM 合成引擎](#3-fm-合成引擎)
4. [波表/ADPCM 合成引擎](#4-波表adpcm-合成引擎)
5. [音频输出混音](#5-音频输出混音)
6. [子系统职责表](#6-子系统职责表)
7. [libsmaf 实现建议](#7-libsmaf-实现建议)

---

## 1. 整体架构概览

### 1.1 类层次结构

```
CM7_EmuSmw7App (全局单例, PTR_theApp_005675c8)
  ├─ CSmwCtrl (SMAF 控制器)
  │    ├─ MaDevDrv  — 设备寄存器驱动 (命令包发送, 中断, 定时器, FIFO)
  │    ├─ MaDsp     — DSP 子系统 (3D引擎, SFX, 混响, 音量)
  │    ├─ MaSrm     — 流管理器 (4通道, PCM/ADPCM/uLaw/A-law)
  │    ├─ MaResMgr  — 资源管理器 (9类资源引用计数)
  │    ├─ MaDva     — DMA Voice Allocator (FM/WT 声部→物理通道映射)
  │    ├─ MaCmd     — 命令构造器 (70+ 命令: NoteOn/Off/PG/Volume/Pan...)
  │    └─ MaDmyCnv  — 格式转换器 (SMAF/MA-x → 内部格式, 虚函数表驱动)
  ├─ CDinSynth  — FM 合成核心 (波表插值, 音量/声像, 多总线混音)
  ├─ CFmSynth   — FM 合成器 (32声道 × 4算子, 8算法)
  ├─ CWtSynth   — 波表合成器 (32槽, 8-bit PCM + 线性插值)
  ├─ CStmSynth  — 流式合成器 (4 ADPCM 通道, Yamaha 4-bit ADPCM)
  ├─ CVolIP     — 音量线性插值器
  ├─ CPanIP     — 声像线性插值器
  ├─ CLpf       — 低通滤波器
  └─ CWnoise    — 白噪声发生器
```

### 1.2 播放状态机

```
0(Idle) →[Open]→ 2(Opened) →[Load]→ 3(Loaded) →[Start]→ 4(Playing) →[Stop]→ 3(Loaded) →[Close]→ 1(Closed)
```

### 1.3 硬件资源

| 资源 | 数量 | 说明 |
|------|------|------|
| FM 声道 | 32 | 每声道 4 算子, 640 字节状态 |
| WT 声部 | 64 | 虚拟寄存器 slot 0x00-0x3F |
| 流通道 | 4 | 每通道 8 子流 |
| 序列槽 | 22 | Sequence: 0xC0B/槽, 扩展: 0x430B/槽 |
| 采样率 | 7 档 | 11025/16000/22050/24000/32000/44100/48000 Hz |

---

## 2. MMF 播放管线

### 2.1 初始化: MaSmw_Init

**地址**: 0x001a4970, 1752B

```
MaSmw_Init()
  ├─ MaDevDrv_Initialize()         // 设备寄存器
  ├─ MaSrm_Init()                  // 流管理器 (4通道 × 8子流)
  ├─ MaDva_Initialize(4)           // 声部分配器
  ├─ MaResMgr_Init()               // 资源管理器 (9类)
  ├─ MaDsp_Init()                  // DSP 子系统
  └─ MaCmd_VoiceInit(0..3, 0,0,0,0) // 4个序列器音色初始化
```

分配 22 个 Sequence 槽位 (0xC0 字节/槽) + 22 个扩展槽 (0x430 字节/槽)。通过 `DAT_0048aa70` 查找表建立 SeqID → 物理槽位映射。

### 2.2 格式检查: MaSmw_Check

**地址**: 0x0012b4f4, 20B — 极薄封装，委托 `CM7_EmuSmw7App::Check`。

### 2.3 打开: MaSmw_Open

**地址**: 0x00194d68, 1176B — **管线中最复杂的函数**

参数 `param_1`: 低字节 = SeqID(0..3), 高字节 = StreamType

| StreamType | 含义 | 资源分配 |
|------------|------|----------|
| 0 | FM 序列 | MaResMgr_AllocSequence + Sfx + 3D + Buf |
| 1 | FM+流 | 同上 + MaResMgr_AllocStream |
| 2 | 流 | MaSrm_Open (配置 PCM/ADPCM/uLaw/A-law + 采样率) |
| 3 | HV 语音 | MaHvDrvJP_Initialize + MaResMgr_AllocHv |
| 4 | AUX 辅助 | 配置辅助输出寄存器 0x5a-0x65 |
| 5 | DTMF | |
| 6 | Wave | 同 Type 2 |
| 7 | PCM 直出 | 配置 DAC (8kHz~48kHz 时钟分频) |

FM 序列 (Type 0/1) 的完整流程:
1. `MaDmyCnv_Open/Ctrl/GetResInfo` — 格式转换器初始化
2. `MaResMgr_AllocSequence` — 分配序列槽
3. `MaCmd_VoiceInit` — 音色引擎初始化
4. `MaSrm_DelStream` — 清除所有 64 子流
5. `MaDva_Initialize` — 重初始化声部分配器
6. `MaCmd_InitChannelVolume` — 通道音量
7. `MaCmd_SeqInit` — 生成初始化命令包
8. `MaDevDrv_SendDirectPacket` — 发送到硬件
9. `MaDsp_3DCtrl(1, 0x80/0xa4/0xa5, ...)` — 3D 引擎
10. `MaDsp_SfxCtrl(0, 0x2011e/0x2013e, ...)` — 音效

### 2.4 加载: MaSmw_Load

在模拟器 .so 中此函数被内联或合并到 Open 阶段。硬件上通过 `MaDevDrv_SendDirectRamData` 将音色波形写入 DSP RAM。

### 2.5 播放: MaSmw_Start

**地址**: 0x0019fcc4, 1288B

前置条件: 槽位状态 == 3 (Loaded)

```
MaSmw_Start(seqId, ...)
  ├─ 遍历活跃通道 (offset+0x30 ~ +0x34, 最多2通道)
  │    ├─ MaDsp_3DCtrl(1, 0xa6, ...)     // 启用 3D
  │    ├─ 构造通道路由包 (0xf2/0xf9 命令)
  │    ├─ MaCmd_SetChOutputs              // 输出映射
  │    └─ [Stream] MaSrm_Start + 偏移计算
  ├─ [3D] MaDsp_SfxCtrl(0, 0x20180, ...) // 3D→SFX 路由
  └─ 状态: 3(Loaded) → 4(Playing)
```

### 2.6 停止: MaSmw_Stop

**地址**: 0x001a076c, 2692B

```
MaSmw_Stop(seqId, ...)
  ├─ [Seq]  MaDevDrv_WriteIntermediateReg / ResetIrqCtrl
  ├─ [Seq]  MaSrm_StreamPause
  ├─ [Seq]  callback通知 (offset+0x78)
  ├─ [Seq]  MaHvsCnv_Close
  ├─ [Seq]  MaCmd_AllMute (16通道批量静音)
  ├─ [Seq]  MaDevDrv_SendDirectPacket (0x100/0x200 字节重置)
  ├─ [Stream] MaSrm_Stop
  ├─ [HV]  MaHvDrvJP_SetCommand(1,0,0)
  ├─ [PCM] 关闭 DAC
  ├─ 清理 3D: MaDsp_3DCtrl(1, 0xa5, ...)
  ├─ MaDevDrv_StopTimer
  └─ 状态: 4(Playing) → 3(Loaded)
```

### 2.7 关闭: MaSmw_Close

委托 `CM7_EmuSmw7App::Close`。

### 2.8 NoteOn 命令处理: MaCmd_NoteOn

**地址**: 0x00234068, 9314B — **最大的命令处理函数**

```
MaCmd_NoteOn(instance, velocity, channel, program, gateTime, cmdBuf)
  ├─ MaCmd_GetVoiceInfo(program)        // 查询音色信息
  ├─ [FM]  MaDva_GetFmSlot()            // 分配 FM 声部
  ├─ [WT]  MaDva_GetWtSlot()            // 分配 WT 声部
  ├─ [4slot音色] MaDva_GetAlt3Slot()    // slot 替换机制
  ├─ [FM]  音高表查表 (DAT_0052f850, 256条目)
  │         编码为 7+6 位格式
  ├─ [WT]  周期表查表 (DAT_00530150/00530240)
  │         含 log2 量化 (DAT_00531150)
  └─ 写入 cmdBuf: 0x84=FM参数, 0x81=WT参数, 0x8A/0x90=附加控制
```

命令包格式:
- `0x80` = 空操作
- `0x84` = FM 参数设置 (AL/FL/FB/AR/DR/DT/DL 等)
- `0x81` = WT 参数
- `0x8A/0x90` = 附加控制

---

## 3. FM 合成引擎

### 3.1 CFmSynth 构造

**地址**: 0x00159d90, 6566B

- 32 个声道，每声道 0x280 字节 (640B)
- 每声道创建: CLpf (200B) + CVolIP (0x1C) + CPanIP (0x28)
- 3 组波形表指针，根据采样率选择 (存储于 this+0x6820/0x6828/0x6830)
- 初始值: 滤波器系数 0x10000 (Q15=1.0), 输出增益 0x8000

### 3.2 算子数据结构 (_tagFMSLOTINFO)

每个算子在槽位结构中的偏移:

| 偏移 | 含义 |
|------|------|
| +0x38/+0xa0/+0x108/+0x170 | Op1/2/3/4 相位计算回调 (虚函数) |
| +0x40/+0xa8/+0x110/+0x178 | Op1/2/3/4 波形表指针 (16-bit signed) |
| +0x4c/+0xb4/+0x11c/+0x184 | Op1/2/3/4 相位累加器 |
| +0x78/+0xe0/+0x148/+0x1b0 | Op1/2/3/4 电平/包络 |
| +0xd6 | Op2 多音色选择 |
| +0x208 | 反馈量标志 |
| +0x210~0x21c | Op1~4 反馈状态 |
| +0x238 | 主电平 |
| +0x268 | 包络/电平乘数表指针 |
| +0x270/0x274/0x278 | L/R/C 声像系数 |

### 3.3 算子核心计算

```
// 相位: 10位索引, 32位累加器
phase += phaseIncrement
index = (phase >> 22) & 0x3FF

// 波表查找: 16-bit signed → Q15 乘法
output = (level_Q15 * waveTable[index]) >> 15

// FM 调制: 调制信号加到相位上
modIndex = adMask[feedbackSelect] & (modulatorOutput >> 3)
finalPhase = modIndex + (basePhase >> 22) & 0x3FF
output = (level_Q15 * waveTable[finalPhase]) >> 15
```

### 3.4 八种算法拓扑

所有 CalcAlg 函数签名:
```c
void CFmSynth::CalcAlgN(_tagFMSLOTINFO *slot, int *outL, int *outR, int *outC, uint numSamples)
```

#### Alg0 — 2 算子级联 FM (824B)
```
Op1 --FM--> Op2 --> Mix
```

#### Alg1 — 2 算子并行 (816B)
```
Op1 --+--> Mix
Op2 --+    (sum >> 1)
```

#### Alg2 — 4 算子并行 (2312B)
```
Op1 --+
Op2 --+--> Mix (sum >> 2)
Op3 --+
Op4 --+
```

#### Alg3 — 3 算子级联 + 第 4 载波 (1244B)
```
Op1 --FM--> Op2 --FM--> Op3 --+
                              +--FM--> Op4 --> Mix
                              ^
                         (Op1 + Op3) >> 3
```

#### Alg4 — 4 算子完全级联 (1324B)
```
Op1 --FM--> Op2 --FM--> Op3 --FM--> Op4 --> Mix
```

#### Alg5 — 双对级联并行 (2540B)
```
Op1 --FM--> Op2 --+
                  +--> Mix (sum >> 1)
Op3 --FM--> Op4 --+
```

#### Alg6 — 并行 + 级联 (1272B)
```
Op1 --+
      +--> Mix (sum >> 1)
Op2 --FM--> Op3 --+
```

#### Alg7 — 3 路并行含级联 (1236B)
```
Op1 --+
Op2 --FM--> Op3 --+--> Mix (sum >> 2)
Op4 --+
```

### 3.5 FM 声部参数 (FMCONTROL_SetFmVoiceReg)

通过 10 个寄存器 (reg 1-10) 配置:
- Reg 3: 触发 SetVoice (从虚拟内存读 0x20 字节 _tagFmVoiceInfo)
- Reg 5: SetFcOffset (滤波器截止偏移)
- Reg 6: SetVelocity (力度)
- Reg 8: SetBlockFnum (音高 block+fnum)
- Reg 9: SetCh (通道分配)
- Reg 10: KeyOn (触发键控, 含 DAMP/EG/SUS 标志)

---

## 4. 波表/ADPCM 合成引擎

### 4.1 CWtSynth — 波表合成器

**对象大小**: 0x103138 字节 (~664KB), 内含 32 个声道槽 (stride = 0x8188)

每槽包含: CLpf (200B) + CVolIP (0x1B) + CPanIP (0x28) + CWnoise (1B)

支持采样率: 11025/16000/22050/24000/32000/44100/48000 Hz

#### oscSlot_8A — 8-bit PCM + 线性插值 (1016B)

**主合成模式**, 波形为 8-bit 有符号 PCM:
```c
int index = phase >> 16;
int frac = phase & 0xFFFF;
sample = waveAddr[index] * (0x10000 - frac) + waveAddr[index+1] * frac;
sample = (sample >> 16) & 0xFFFF;
```

EG 包络为函数指针状态机:
- 状态 0: Release
- 状态 1-5: ADSR 包络
- 状态 3-4: Vibrato LFO — 4096 点正弦表 (DAT_0028d0f0) 调制 pitch

#### oscSlot_Noise — 白噪声 (92B)
```c
noise = CWnoise::Generate();
output = (volume * level >> 15) * noise >> 15;
```

### 4.2 CStmSynth — 流式合成器

#### oscSlot_4 — Yamaha 4-bit ADPCM 解码 (1756B)

**专有 ADPCM 格式** (非 IMA, 非 Yamaha AICA):

```c
const int stepTable[8] = {0x3980, 0x3980, 0x3980, 0x3980,
                           0x4CC0, 0x6640, 0x8000, 0x9980};

nibble = (byte >> 4) & 0xF;  // 高/低半字节交替
step = stepTable[nibble & 7];
newStep = clamp(oldStep * step >> 14, 0x7F, 0x6000);

predictor = clamp(
    predictor + step/8 + bit0*step/4 + bit2*step + bit1*step/2
    XOR sign + sign,
    -0x8000, 0x7FFF);
```

循环缓冲: `offset+1 & loop_mask`

#### oscSlot_16 — 流式 8-bit PCM (824B)
- 双缓冲 ping-pong 输出
- 无符号→有符号转换

#### oscSlot_4s / oscSlot_8As / oscSlot_8Bs — 带插值的变体

### 4.3 WT 声部参数 (WTCONTROL_SetWTVoiceReg)

**地址**: 1456B, 10 个寄存器 (reg 1-10)

- Reg 1/2/3: 波形地址 (17 位, 最大 0x14000 = 80KB)
- Reg 3 (key=0): 触发 SetVoice (读 0x20 字节 _tagWtVoiceInfo)
- Reg 5: SetFcOffset (滤波器)
- Reg 6: SetVelocity (力度)
- Reg 8: SetBlockFnum (音高)
- Reg 9: SetCh (通道)
- Reg 10: KeyOn (含 DAMP/EG/SUS 标志)

### 4.4 波形上传 (MaSndDrv_SetWtWave)

| Type | 格式 | 说明 |
|------|------|------|
| 0 | 原始字节 | 8-bit PCM 直传 |
| 1 | 7-bit 编码 | `(len/8)*7 + (len%8-1)` 压缩率 |
| 2 | 8→16 有符号扩展 | size<<1 |
| 4 | 8→16 无符号扩展 | |

波形 ID: 0-127 = 内置 ROM, 128-255 = RAM

### 4.5 ADPCM Seek 参数 (CStmSynth)

4 组 (predictor, step) 对:
- Slot 0: +0x18/0x1c, Slot 1: +0x930/0x934
- Slot 2: +0x938/0x93c, Slot 3: +0x1250/0x1254

---

## 5. 音频输出混音

### 5.1 生成入口

```
Mapi_EmuGenerate(MAPI_BUFFER7*, uint)
  └─ CM7_EmuSmw7App::EmuGenerateApi()
       └─ EmuGenerate(theApp, buf, samples)
            └─ GenerateWrapper(short*, uint)
                 └─ CDinSynth::Generate(uint num_samples, _genbuf*)
```

### 5.2 CDinSynth::Generate

**地址**: 0x0014c810, 3852B

每采样周期:
1. 读取通道使能表 (`gChEi` 全局)
2. 对每个活跃算子: `CVolIP::Generate` + `CPanIP::Generate`
3. 双波形表线性插值 (表 A / 表 B, 16-bit)
4. 通过 `uVar24` 定位器选择表 A 或 B
5. 音量缩放: `(sample * volIP) >> 15`
6. 声像混合, 写入 5 条输出总线

### 5.3 缓冲区结构 (MAPI_BUFFER7)

```c
typedef struct {
    short *mainL;   // +0x00 主输出左
    short *mainR;   // +0x08 主输出右
    short *auxL;    // +0x10 副输出左
    short *auxR;    // +0x18 副输出右
    // ... 最多 7 对立体声缓冲区
} MAPI_BUFFER7;
```

### 5.4 内部精度

- 波形: 16-bit signed
- 累加: 32-bit
- 音量/声像: Q15 定标 (>>15)
- 包络: Q15 × 波形 >> 15

---

## 6. 子系统职责表

| 子系统 | 前缀 | 核心函数 | 职责 |
|--------|------|----------|------|
| 设备驱动 | MaDevDrv | WriteReg, SendDirectPacket | 寄存器读写、命令包、中断/定时器/FIFO |
| 命令构造 | MaCmd | NoteOn(9314B), AllMute | 70+ 命令函数，生成 DSP 命令字节包 |
| DSP 控制 | MaDsp | 3DCtrl, SfxCtrl | 3D 引擎、音效、混响 |
| 流管理 | MaSrm | Open/Start/Stop | 4 通道流，PCM/ADPCM/uLaw/A-law |
| 资源管理 | MaResMgr | Alloc/Free × 9 类 | Sequence/Sfx/Stream/3D/Hv 等引用计数 |
| 声部分配 | MaDva | GetFmSlot, GetWtSlot | FM/WT 声部→物理通道映射 |
| 格式转换 | MaDmyCnv | Open/Ctrl/GetTick | SMAF→内部格式 (虚函数表) |
| FM 合成 | CFmSynth | Generate, CalcAlg0~7 | 32 声道 × 4 算子, 8 算法 |
| 波表合成 | CWtSynth | oscSlot_8A, oscSlot_Noise | 32 槽, 8-bit PCM + 线性插值 |
| 流式合成 | CStmSynth | oscSlot_4, oscSlot_16 | 4 通道 Yamaha 4-bit ADPCM |
| FM 控制 | FMCONTROL | Generate, SetFmVoiceReg | CFmSynth 全局封装 |
| WT 控制 | WTCONTROL | Generate, SetWTVoiceReg | CWtSynth 全局封装 |
| 音量插值 | CVolIP | Generate | 线性音量渐变 |
| 声像插值 | CPanIP | Generate | 线性声像渐变 |
| 低通滤波 | CLpf | Generate | 一阶 IIR 低通 |
| 白噪声 | CWnoise | Generate | 16-bit 伪随机 |
| 混音输出 | CDinSynth | Generate (3852B) | 多总线混音 |

---

## 7. libsmaf 实现建议

### 7.1 可简化的部分

| 不需要 | 原因 |
|--------|------|
| MaDevDrv | 寄存器/DSP命令包/FIFO → 函数调用替代 |
| MaDsp 3D/SFX/混响 | 硬件 DSP → 后续可选 |
| MaResMgr | 硬件资源共享 → 单任务不需要 |
| MaDva | DMA 通道映射 → 数组索引 |
| MaDmyCnv | 多格式兼容 → 只支持 SMAF |
| MaHvDrv | 不在 MMF 播放范围 |
| 电源管理/中断 | 硬件相关 → RTOS 定时器 |

### 7.2 需要实现的核心

**必须** (播放 MMF 最小集合):
1. **SMAF 解析器** — chunk 结构, score track + wave track
2. **FM 合成** — 4 算子, 8 算法, 波表查找 + FM 调制
3. **ADPCM 解码** — Yamaha 4-bit ADPCM (步进表解码)
4. **8-bit PCM 波表** — 线性插值 (oscSlot_8A)
5. **混音器** — 多通道→立体声, 音量/声像
6. **序列器** — SMAF 事件流, NoteOn/Off/ProgramChange

**可选** (增强音质):
7. EG 包络 (ADSR) — 函数指针状态机 → 参数化重构
8. LFO (颤音/震音) — 4096 点正弦表
9. 低通滤波器 — 一阶 IIR

### 7.3 关键数据结构参考

| 结构 | 大小 | 说明 |
|------|------|------|
| FM 声道 | 640B (0x280) | 4 算子 + 包络 + 相位 |
| WT 声道 | 33160B (0x8188) | 含 LPF/VolIP/PanIP/Noise |
| Sequence 槽 | 192B (0xC0) | 序列状态 |
| Sequence 扩展 | 1072B (0x430) | 扩展状态 |
| 波形信息 | 32B (0x20) | _tagFmVoiceInfo / _tagWtVoiceInfo |

### 7.4 性能考量 (RP2350)

- FM 合成: 32 声道 × 4 算子 = 128 次查表+乘法/采样
- 44100Hz: ~5.6M 查表+乘法/秒 → RP2350 (150MHz) 完全可行
- ADPCM 解码: 4 通道 × 44100 = ~176K 解码/秒 (极轻量)
- 混音: 32 通道 → 立体声 = 64 次乘加/采样

---

## 附录: 反编译统计

| 平台 | 导出函数 | 成功 | 跳过(C++ mangled) | 错误 | .c 文件数 |
|------|----------|------|-------------------|------|-----------|
| ARM64 | 1454 | 1442 | 12 | 0 | 1215 |
| ARM32 | 1473 | 1436 | 37 | 0 | 1209 |
