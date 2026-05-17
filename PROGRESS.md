# libsmaf 项目进度

## 项目目标

为 RP2350 (双核 Cortex-M33, 520KB SRAM, 无 FPU) 实现纯软件 SMAF/MMF 播放库，不依赖 Yamaha 专有 DLL。

## 当前状态：Phase 1a ✅ Phase 1b ✅

FM合成核心已对齐 fmfm.core 参考实现。MMF Parser/Sequencer 已对齐 go-smaf 参考实现，含 VM3Exclusive voice 数据展开。有 FM voice 数据的 MA-3 MMF 文件可正常播放输出 WAV。

WAV 输出位置: `output/` 目录。

---

## Phase 1a：FM合成核心对齐 fmfm.core ✅

### 对齐完成项

| 对齐项 | 修复内容 |
|--------|----------|
| Envelope rates | 使用精确 double 浮点计算 decay 系数，匹配 fmfm.core 的 `10^(-dbPerSample/10)` 公式 |
| Attack ksn映射 | AR 使用 `(ksn>>1)+(ksn&1)` 映射到 0-8 范围，匹配 `setActualAR` |
| Voice byte 0 KSR | KSR 从 bit 1 改为 bit 0 (`data[0]&0x01`)，匹配 vm35fm.go |
| Voice byte 1 BO | BO 从 bits 2-1 改为 bits 1-0 (`data[1]&0x03`)，匹配 vm35fm.go |
| PANPOT 计算 | 改为 `pan = 64 + (panpot-15)*4`，匹配 fmfm.core |
| Voice byte 4 DVB | 从 `>>2` 改为 `>>1` (`data[4]>>1&3`)，匹配 vm35fm.go |
| Voice byte 5 MULTI/DT | MULTI=bits 7-4, DT=bits 2-0，匹配 vm35fm.go |
| 反馈 blend | 使用采样率相关 blend 系数 (`0.5*48000/sampleRate`)，匹配 fmfm.core |
| 调制公式 | 改用 `(modulator + WAVE_SIZE) * WAVE_SIZE`，匹配 fmfm.core |
| Sustain 精度 | SR=0 时不衰减，避免 Q15 乘法精度损失 |
| Decay/Attack 表 | 从 Q8/Q16 定点改为精确 double 浮点值，匹配 fmfm.core 原始数据 |
| VolumeTable | 修正 `10^(-raw/20)` 计算，index 31 = 1.0 (全音量) |
| SL table | 修正 `10^(-3*sl/20)` 计算 |
| TL/KSL 解码 | TL = bits 7-2 (6位), KSL = bits 1-0 (2位)，匹配 go-smaf |
| KSR 行为 | ksr 作为布尔值选择表行，不添加到 rate 值 |

### FM 合成测试结果

| 测试 | 结果 |
|------|------|
| Wave Tables | sine[0]=0, sine[256]=32767 ✓ |
| A4 Phase | 85704562 ✓ |
| FM Basic (Alg0, A4, 2s) | peak=6157, RMS=772 ✓, **WAV可播放** |
| Alg0: 2opFM | peak=8232 ✓ |
| Alg1: 2opPar | peak=18339 ✓ |
| Alg2: 4opPar | peak=30711 ✓ |
| Alg3: 3opCas+Car | peak=5612 ✓ |
| Alg4: 4opCas | peak=5612 ✓ |
| Alg5: DualPair | peak=13845 ✓ |
| Alg6: Par+Cas | peak=15719 ✓ |
| Alg7: 3par+Cas | peak=22478 ✓ |

---

## Phase 1b：MMF Parser/Sequencer 对齐 go-smaf ✅

### 对齐完成项

| 对齐项 | 修复内容 |
|--------|----------|
| SysEx 长度 | `msg_len = raw_len - 1`，匹配 go-smaf `length--`，不再把 F7 当数据 |
| VM3Exclusive 格式 | 实现 `expand_vm3_exclusive()`，36字节交织→31字节标准格式 |
| Shadow byte 展开 | 全局 shadow (raw[0]→raw[2,3]) + 每算子 shadow/shadow2 位合并 |
| Voice 头部字段 | 解析 BankM/BankL/PC/DrumNote/VoiceType (msg[5..9]) |
| MA-3 类型检查 | 添加 `msg[4] == 0x01` voice assign 类型验证 |
| 7-bit 解码 | 确认 go-smaf 不做 7-bit 解码，移除错误的 decode_7bit() |
| Format 0 音符 | 基础八度从 3 改为 4，匹配 MegaGRRL `bType=4` 默认值 |
| Format 0 排他 | 添加 0xFF NOP 和 SysEx exclusive 事件处理 |

### MMF 播放测试结果

| 文件 | Peak | 状态 |
|------|------|------|
| SEVEN SEAS.mmf | 31446/32768 | ✓ 正常播放 |
| SWEETRANCE.mmf | 32768/32768 | ✓ 正常播放 |
| Cosmic.mmf | 0 | 无 FM voice 数据 |
| Kokoro1.mmf | 0 | 无 FM voice 数据 |
| NTT DoCoMo.mmf | 0 | 无 FM voice 数据 |

---

## 已实现的功能

### 1. MMF 解析器 ✅ (test通过，但播放管线有问题)
- MMF 文件头解析 (MMMD/CNTI/OPDA/MTR)
- 递归 chunk 解析，支持嵌套子块
- MTR Setup Data (Mtsu) f0 SysEx 事件提取
- FM 音色参数解码 (2-op 17字节 / 4-op 31字节格式)
- 支持 MA-3 (`43 79 06 7F`) 和 MA-5/7 (`43 79 07 7F`) SysEx 头
- MTR 轨道头解析 (format type, timebase, channel status)

### 2. MTR Score 序列解析 ✅
- Format 2 (MobileStandard): 0x90/0x80/0xB0/0xC0/0xE0/0xF0 事件
- Format 0 (HandyPhoneStandard): CCOONNNN 紧凑音符编码
- 7-bit 变长 delta time 编码
- Program Change, Control Change, Pitch Bend
- 0xFF Meta 事件处理 (End of Track)

### 3. FM 4-op 合成器 ✅ (已对齐 fmfm.core)
- 32-bit 相位累加器 + 10-bit 相位索引 (1024点波形表)
- Q15 定点乘法
- 8 种算法拓扑 (CalcAlg0~7)
- 每采样包络 (Attack/Decay/Sustain/Release)，精确匹配 fmfm.core
- 6 种波形表: 正弦, 半波, 全波整流, 方波, 锯齿波, 三角波
- 反馈 (采样率相关 blend)，匹配 fmfm.core
- KSL/TL/DT/MULT 全部匹配 go-smaf vm35fm.go 解析

### 4. WT/PCM 波表合成器 ✅
### 5. Yamaha 4-bit ADPCM 解码 ✅
### 6. 序列器 ⚠️ (test_play输出乱音，需要调试)
### 7. 混音器 ✅
### 8. 公共 API ✅

---

## 文件结构

```
libsmaf/
├── include/
│   └── smaf.h              // 公共 API (不透明指针)
├── src/
│   ├── smaf.c               // 公共 API 实现
│   ├── smaf_common.h        // 共享类型定义
│   ├── synth/
│   │   ├── synth.h          // 合成器接口 + 类型 + 表声明
│   │   ├── fm_table.c       // 波形表 + 查找表 (VolumeTable, SL, TL, KSL, DT, Pan, Decay, Attack)
│   │   ├── fm_synth.c       // FM核心 (8算法, 每采样EG, 对齐fmfm.core)
│   │   ├── mixer.c          // 多通道→立体声混音
│   │   ├── adpcm.c          // Yamaha 4-bit ADPCM
│   │   └── noise.c          // 白噪声发生器
│   ├── parser/
│   │   ├── parser.h         // 解析器类型 + chunk 定义
│   │   └── chunk.c          // 递归chunk解析 + Setup Data + Score
│   ├── sequencer/
│   │   ├── seq.h            // 序列器状态 + 类型
│   │   └── seq.c            // 事件调度 + 声部管理
│   └── audio/
│       ├── audio.h
│       └── audio_mock.c     // WAV 文件输出 (桌面测试)
├── test/
│   ├── test_fm.c            // FM合成 + 8算法测试 (全部通过)
│   ├── test_debug.c         // FM内部状态诊断
│   ├── test_eg_trace.c      // EG包络跟踪
│   ├── test_parser.c        // MMF 解析测试
│   ├── test_play.c          // 端到端播放测试 (输出乱音)
│   └── fixtures/            // MMF 测试文件
├── CMakeLists.txt
└── PROGRESS.md
```

---

## 已知问题

1. **无 voice 数据的 MMF 文件无声音**: Cosmic/Kokoro1/NTT DoCoMo 等文件不含 FM voice Setup Data，parser 正确识别但 sequencer 无法播放。需确认这些文件是否使用 WT/PCM 或其他合成方式。
2. **流式音频 (Mtsp)**: PCM/ADPCM 流式块尚未对接到播放管线
3. **LFO**: 颤音/震音 LFO 尚未实现
4. **DSP 效果**: 混响/3D 未实现

---

## 参考实现

| 参考代码 | 用途 | 路径 |
|----------|------|------|
| go-smaf-1 | SMAF/MMF 解析参考 (Go) | `smaf_20260516/go-smaf-1/` |
| smaf825-1 | SMAF/MMF 解析参考 (Java) | `smaf_20260516/smaf825-1/` |
| fmfm.core-1 | FM合成参考 (Go) | `smaf_20260516/fmfm.core-1/` |
| MegaGRRL MA-3 | YMU762 硬件驱动参考 (C) | `SMAF_reference/MA-3-MegaMod/.../YMU762/` |

关键参考文件：
- `fmfm.core-1/sim/envelope.go` — 包络生成器
- `fmfm.core-1/sim/operator.go` — 算子相位/调制
- `fmfm.core-1/sim/channel.go` — 通道算法/反馈/声像
- `fmfm.core-1/sim/phase.go` — 频率计算
- `fmfm.core-1/ymf/ymfdata/data.go` — 查找表
- `go-smaf-1/voice/vm35fm.go` — Voice 字节布局
- `go-smaf-1/subtypes/exclusive.go` — SysEx 解析
- `go-smaf-1/chunk/scoretrack_setupdata.go` — Mtsu 解析
- `MegaGRRL .../masnddrv.c` — 事件调度/时序/音符计算

---

## 下一步

1. **调查无 voice 数据 MMF 文件的合成方式** (P1): 确认 WT/PCM/AL voice type
2. WT 波形数据从 SysEx 正确上传到 WT 合成器
3. ADPCM 流式音频 (Mtsp chunk) 解码与播放
4. LFO 颤音/震音实现
5. 更多格式测试覆盖
6. RP2350 移植 (I2S/PWM 输出)
