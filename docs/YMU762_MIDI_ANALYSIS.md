# YMU762 开源代码与 MA-3/MA-7 MIDI/SMAF 音色体系分析

## 1. 数据来源

**YMU762 开源代码** (YAMAHA 官方 MA-3 中间件):
- 路径: `D:\...\SMAF_reference\MA-3-MegaMod\megagrrl_ymu762 code\firmware\main\YMU762\`
- 完整的 MA-3 声音中间件，包含 MIDI 播放、SMAF 播放、Phrase 播放、WAV 播放

**go-smaf / smaf825** (第三方 SMAF 解析库):
- 路径: `D:\...\smaf_20260516\go-smaf-1\` 和 `D:\...\smaf_20260516\smaf825-1\`
- Go 语言实现，完整解析 SMAF/MMF 文件格式，包含 VM3/VM5 音色库解析

---

## 2. MA-3 内置 GM 音色表

`mamidcnv.c` 包含完整的 GM Level 1 FM 音色参数表，作为 const 数组编译在代码中。

### 2.1 旋律音色 `FM_4op_Voice[128][32]`

128 个 GM 旋律音色 (prog 0-127)，每个 32 字节。音色名称见注释：
- 0: GrandPno, 1: BritePno, 2: E.GrandP, 3: HnkyTonk
- 4: E.Piano1, 5: E.Piano2, 6: Harpsi, 7: Clavi
- ... 到 127: Applause

### 2.2 鼓音色 `Drum_4op_Voice[61][32]`

61 个鼓音色 (note 35-81，通过 `bKey - 24` 索引)，每个 32 字节。
- 0: Seq Click H, 1: Brush Tap, 2: Brush Swirl, ...
- 鼓音色通过 MIDI note number 查表 (note 35 对应 index 11)

### 2.3 32 字节音色数据布局

```
byte[0]:  标志位 — pe(bit7?), sus, xof, eam, evb 等
          对于鼓: 0x00=FM音色, 非0=WT/SE音色
byte[1]:  synth 配置字节 (传给 MaSndDrv_SetVoice 的 key 参数)
byte[2..31]: 30 字节 FM 寄存器数据
          通过 MaDevDrv_SendDirectRamData 写入硬件 RAM
```

### 2.4 音色注册流程 (RegVoice 函数, mamidcnv.c:1727)

```
1. 遍历 drum note 35-81:
   如果 gdwDrumVoice4op[bKey]==1 且 FM_4OP_MODE:
     如果 Drum_4op_Voice[bKey-24][0]==0x00 (FM类型):
       发送 voice data[2..31] (30字节) 到 RAM
       MaSndDrv_SetVoice(seq_id, 0x80, bKey, 1, config, ram_addr)

2. 遍历 melody prog 0-127:
   如果 gdwMelodyVoice4op[bKey]==1 且 FM_4OP_MODE:
     发送 voice data[2..31] (30字节) 到 RAM
     MaSndDrv_SetVoice(seq_id, 0x00, prog, 1, 0, ram_addr)
```

### 2.5 Program Change 映射 (SendProgram 函数, mamidcnv.c:2421)

```
Bank 0, Ch != 9:  bBk=0, bPg=prog        → FM_4op_Voice[prog]
Bank 0, Ch == 9:  bBk=128, bPg=0          → Drum_4op_Voice (note-based)
Bank 0x7900:      Melody mode
Bank 0x7800:      Drum mode
Bank 0x7C00:      Melody with multi-bank (bMBank lookup)
Bank 0x7D00:      Drum with multi-bank
```

---

## 3. MA-3 MIDI 播放管线

入口: `MaSound_Create(MASMW_CNVID_MID)` (=5) → 注册 `MaMidCnv_*` 函数。

```
MaSound_Initialize()
  ├─ MaDevDrv_Initialize()    — 初始化设备驱动
  ├─ MaResMgr_Initialize()    — 初始化资源管理器
  └─ MaSndDrv_Initialize()    — 初始化声音驱动

MaSound_Load(func_id=5, file_ptr, file_size, mode, callback)
  └─ MaMidCnv_Load()          — 解析 SMF 文件头，提取轨道信息

MaSound_Open(func_id, file_id, mode)
  └─ MaMidCnv_Open()          — 分析 setup bar

MaSound_Standby(func_id, file_id)
  └─ MaMidCnv_Standby()
       └─ RegVoice()          — 注册所有用到的 FM/WT 音色到硬件 RAM

MaSound_Start(func_id, file_id, play_mode)
  └─ MaMidCnv_Start()        — 启动硬件音序器
```

---

## 4. VM3/VM5 音色库文件格式 (smaf825 解析)

### 4.1 VM3 音色库 — "FMM3" 格式

```go
// Header: 4 bytes "FMM3" + 4 bytes size
// 内容: 128 个 VM35VoicePC 条目
```

每个 VM35VoicePC 条目:
```
VM3 格式 (24 bytes header + voice data):
  Enigma1:   uint16  (2 bytes, 未知)
  Flag:      uint8   (1 byte)
  BankMSB:   uint8   (1 byte)
  BankLSB:   uint8   (1 byte)
  PC:        uint8   (1 byte)   — Program Change number
  DrumNote:  uint8   (1 byte)   — 0=旋律, 非0=鼓note号
  VoiceType: uint8   (1 byte)   — bit0: 0=FM, 1=PCM
  Name:      [16]byte           — 音色名称 (零终止)
  + Voice data (FM 或 PCM)
```

### 4.2 VM5 音色库 — "VOM5" 格式

```go
// Header: 4 bytes "VOM5" + 4 bytes size
// 内容: 128 个 VM35VoicePC 条目
```

VM5 header 略有不同:
```
VM5 格式 (22 bytes header + voice data):
  Enigma1:   uint16  (2 bytes)
  Name:      [16]byte           — 音色名称在前
  Flag:      uint8
  BankMSB:   uint8
  BankLSB:   uint8
  PC:        uint8
  DrumNote:  uint8
  VoiceType: uint8              — bit0: 0=FM, 1=PCM
  + Voice data
```

### 4.3 FM 音色数据结构 (VM35FMVoice)

```
Global (3 bytes):
  byte[0]: DrumKey      — 鼓键号 (旋律为0)
  byte[1]: PANPOT[7:3]  | BO[1:0]   — 声像 + 基本八度
  byte[2]: LFO[7:6]     | PE[5]     | ALG[2:0]  — LFO + 声像使能 + 算法

每个 Operator (7 bytes):
  byte[0]: SR[7:4] | XOF[3] | -[2] | SUS[1] | KSR[0]
  byte[1]: RR[7:4] | DR[3:0]
  byte[2]: AR[7:4] | SL[3:0]
  byte[3]: TL[7:2] | KSL[1:0]
  byte[4]: -[7] | DAM[6:5] | EAM[4] | -[3] | DVB[2:1] | EVB[0]
  byte[5]: MULTI[7:4] | -[3] | DT[2:0]
  byte[6]: WS[7:3] | FB[2:0]

算子数量取决于 ALG:
  ALG 0-1: 2 operators
  ALG 2-7: 4 operators
```

算法拓扑:
```
0: FB(1)->2
1: FB(1) + 2
2: FB(1) + 2 + FB(3) + 4
3: (FB(1) + 2->3) -> 4
4: FB(1)->2->3->4
5: FB(1)->2 + FB(3)->4
6: FB(1) + 2->3->4
7: FB(1) + 2->3 + 4
```

### 4.4 PCM 音色数据结构 (VM35PCMVoice)

```
19 bytes raw data:
  byte[0-1]: Fs (采样率)
  byte[2]:   PANPOT | ? | PE
  byte[3]:   LFO | ?
  byte[4-8]: ADSR (SR, RR/DR, AR/SL, TL, DAM/EAM/DVB/EVB)
  byte[9-10]: ?
  byte[11-14]: LP/EP (loop point, end point)
  byte[15]: RM | WaveID
  byte[16-18]: ?
```

---

## 5. 对 libsmaf 的意义

### 5.1 SMAF/MMF 播放 (阶段1核心)

- MMF 文件通过 MTR chunk 的 f0 事件携带所有音色参数
- FM 音色: f0 事件 `43 79 07 7f 01 7c <prog> <config> <30字节寄存器数据> f7`
- WT/PCM 音色: f0 事件 `43 79 07 7f <xx> <03/07/08/#>` 后跟波形数据
- MA-7 .so **没有** 内置 WT 波形 ROM，所有 WT 数据必须来自 MMF 文件
- VM5 音色库是 MMF 制作工具用的，音色数据最终打包进 MMF

### 5.2 MIDI 播放 (额外工作)

- MA-3 开源代码有完整的 128 旋律 + 61 鼓 FM 音色表
- 这些音色表可以直接在 libsmaf 中复用
- FM 寄存器格式 MA-3 与 MA-7 兼容 (同为 32 字节结构)
- MIDI 播放需要额外实现: SMF 解析器、setup bar 分析、Program Change 映射
- **MIDI 播放是独立于 SMAF 播放的工作**，优先级应放在 SMAF 之后

### 5.3 结论

SMAF/MMF 播放不依赖任何内置音色 ROM — MMF 文件自包含所有音色数据。
MIDI 播放需要内置音色表，可从 MA-3 开源代码直接获取。
