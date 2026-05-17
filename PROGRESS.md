# libsmaf 项目进度

## 项目目标

为 RP2350 (双核 Cortex-M33, 520KB SRAM, 无 FPU) 实现纯软件 SMAF/MMF 播放库，不依赖 Yamaha 专有 DLL。

## 当前状态：Phase 1a 完成，Phase 1b 进行中

FM合成核心已对齐 fmfm.core 参考实现，test 驱动的合成测试全部通过，WAV 输出可正常播放。MMF 文件解析已实现但播放输出为乱音，需要修复 parser→sequencer→synth 管线。

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

1. **MMF播放乱音** (P0): test_play 输出的 WAV 文件可被播放器识别，但音频内容是乱音。parser 能正确解析 voice 和 event，但 sequencer→synth 的 voice 数据传递可能有问题。需要调试：
   - sequencer 是否正确将 voice bytes 传给 `smaf_fm_set_voice`
   - note on/off 事件的 timing 是否正确
   - fnum/block 计算是否匹配实际 MIDI note
2. **流式音频 (Mtsp)**: PCM/ADPCM 流式块尚未对接到播放管线
3. **LFO**: 颤音/震音 LFO 尚未实现
4. **DSP 效果**: 混响/3D 未实现

---

## 参考实现

| 参考代码 | 用途 | 路径 |
|----------|------|------|
| fmfm.core-1 | FM合成参考 (Go) | `smaf_20260516/fmfm.core-1/` |
| go-smaf-1 | SMAF/MMF解析参考 (Go) | `smaf_20260516/go-smaf-1/` |

关键参考文件：
- `fmfm.core-1/sim/envelope.go` — 包络生成器
- `fmfm.core-1/sim/operator.go` — 算子相位/调制
- `fmfm.core-1/sim/channel.go` — 通道算法/反馈/声像
- `fmfm.core-1/sim/phase.go` — 频率计算
- `fmfm.core-1/ymf/ymfdata/data.go` — 查找表
- `go-smaf-1/voice/vm35fm.go` — Voice 字节布局

---

## 下一步

1. **修复 MMF 播放乱音** (P0): 调试 sequencer→synth 管线
2. WT 波形数据从 SysEx 正确上传到 WT 合成器
3. ADPCM 流式音频 (Mtsp chunk) 解码与播放
4. LFO 颤音/震音实现
5. 更多格式测试覆盖
6. RP2350 移植 (I2S/PWM 输出)
