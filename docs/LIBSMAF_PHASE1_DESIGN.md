# libsmaf 阶段 1 技术设计文档 (修订版)

基于 Ghidra 反编译 MA-7 引擎伪代码的修订版，对齐真实架构。

## 0. 设计目标

在 RP2350 (双核 Cortex-M33, 520KB SRAM, 无 FPU) 上实现纯软件 SMAF/MMF 播放。

阶段 1 范围：SMAF 解析 + FM 合成 + ADPCM 解码 + PCM 波表 + 混音 + 序列器。
支持 MA-3/MA-5/MA-7 FM 音色和 ADPCM 波形播放。

## 1. 架构决策变更

### 1.1 弃用 Nuked-OPL3 适配方案

原方案以 Nuked-OPL3 为底座做 MA 寄存器适配。**现已弃用**，原因：

| 问题 | 说明 |
|------|------|
| OPL3 只有 36 算子 | MA-7 有 128 算子 (32声道×4)，OPL3 需 hack 扩展到 64+ |
| 算法拓扑不同 | OPL3 的 4-op 模式是固定 Op1→Op2→Op3→Op4，MA 有 8 种可编程拓扑 |
| 寄存器映射勉强 | OPL3 寄存器是硬件地址，MA 寄存器是软件命令包，语义差异大 |
| 引入不必要复杂度 | 适配层比合成核心本身还复杂 |

### 1.2 新方案：直接实现 MA-7 FM 核心

Ghidra 反编译已经揭示了 MA-7 的完整 FM 合成算法，核心非常简单：

```c
// 每个算子，每采样
phase += phaseIncrement;
index = (phase >> 22) & 0x3FF;                    // 10位相位
output = (level_Q15 * waveTable[index]) >> 15;    // Q15 乘法

// FM 调制 (当算子作为调制器时)
modIndex = adMask[feedbackSelect] & (modulatorOutput >> 3);
finalPhase = modIndex + (basePhase >> 22) & 0x3FF;
output = (level_Q15 * waveTable[finalPhase]) >> 15;
```

这是一个标准的 FM 合成引擎：
- 10 位相位索引，1024 点波形表
- Q15 定标乘法 (>>15)
- adMask 表控制反馈/调制深度
- 8 种算法拓扑通过不同的算子连接实现

**代码量预估**: ~1500 行纯 C，比 Nuked-OPL3 适配更简洁。

### 1.3 参考实现选型 (修订)

| 模块 | 参考 | 用途 |
|------|------|------|
| FM 合成核心 | **Ghidra 反编译 MA-7 伪代码** | 算法真值来源 |
| FM 算法拓扑 | **fmfm.core CarrierMatrix** | 8 种算法定义 (交叉验证) |
| FM 包络参数 | **fmfm.core OpRegister** | AR/DR/SR/RR/SL/TL 等参数定义 |
| ADPCM 解码 | **vavi-sound Yamaha.java** (BSD) | 129 行 Yamaha 4-bit ADPCM，可直接移植 |
| ADPCM 交叉验证 | **Ghidra oscSlot_4 伪代码** | MA-7 专有步进表解码算法 |
| SMAF 解析 | **vavi-sound** (BSD) | 最完整的 SMAF chunk 解析，Java 可翻译为 C |
| SMAF 解析备选 | **retroYamaha** (GPLv3) | C++ 实现，chunk 覆盖最全 |

## 2. 修正后的整体架构

```
┌─────────────────────────────────────────────────────────┐
│  应用层 (MID Player / Tone Generator / etc.)            │
└──────────────────────┬──────────────────────────────────┘
                       │ smaf_player_t
┌──────────────────────▼──────────────────────────────────┐
│  libsmaf 公共 API 层                                     │
│  smaf_init() / smaf_load() / smaf_play() / smaf_stop()  │
└──────────┬──────────────────────────────┬────────────────┘
           │                              │
┌──────────▼──────────────────┐  ┌───────▼────────────────┐
│  SMAF 解析器                │  │  序列器 (Sequencer)     │
│  smaf_parser.c              │  │  sequencer.c            │
│  - Chunk 解析               │  │  - Delta time 计时      │
│  - Score track 事件解码     │  │  - 事件调度              │
│  - Voice 参数提取           │  │  - Note on/off          │
│  - ADPCM 波形提取           │  │  - CC / PC / PB         │
│  - PCM 波形提取             │  │  - Gate time            │
└──────────┬──────────────────┘  └───────┬────────────────┘
           │                              │
           │  voice_t / wave_t            │ note_t / cc_t
           ▼                              ▼
┌─────────────────────────────────────────────────────────┐
│  合成器核心 (Synth Core)                                  │
│  synth.c                                                 │
│  ┌──────────────┐  ┌──────────────┐  ┌───────────────┐ │
│  │ FM 合成引擎   │  │ WT/ADPCM 引擎│  │  混音器       │ │
│  │ fm_synth.c    │  │ wt_synth.c   │  │  mixer.c      │ │
│  │ 32 ch × 4 op │  │ 32 ch 波表   │  │ 多→立体声     │ │
│  │ 8 算法拓扑   │  │ 4ch ADPCM    │  │ 音量/声像     │ │
│  │ 1024点波形表 │  │ 8-bit PCM    │  │ 多总线输出    │ │
│  │ EG 包络      │  │ Yamaha 4-bit │  │               │ │
│  │ LFO          │  │ 线性插值     │  │               │ │
│  └──────────────┘  └──────────────┘  └───────┬───────┘ │
└──────────────────────────────────────────────┼─────────┘
                                               │ int16_t stereo
┌──────────────────────────────────────────────▼─────────┐
│  音频输出层                                             │
│  audio_rp2350.c / audio_mock.c                          │
│  - RP2350 PWM / I2S DAC                                 │
│  - 双缓冲 DMA                                            │
│  - 回调模式供外部消费                                     │
└─────────────────────────────────────────────────────────┘
```

## 3. FM 合成核心 (修订)

### 3.1 从 Ghidra 提取的真实架构

| 参数 | MA-7 真实值 | 原设计值 |
|------|------------|---------|
| FM 声道数 | **32** | 16 |
| 每声道算子 | **4** | 4 ✓ |
| 波形表大小 | **1024 点** (10位相位) | 未定 |
| 相位精度 | **32-bit 累加器** | 未定 |
| 算法数 | **8** (Alg0~7) | 8 ✓ |
| 内部精度 | **Q15** (>>15) | 未定 |
| 采样率 | 7 档: 11025~48000 | 22050 |

### 3.2 八种算法拓扑 (Ghidra 确认)

从 Ghidra CalcAlg0~7 反编译中提取的**真实信号流**（与 fmfm.core CarrierMatrix 交叉验证）：

```
Alg0 (2-op FM):     Op1 ──FM──→ Op2 ──→ Mix
Alg1 (2-op 并行):   Op1 ──┬──→ Mix
                            Op2 ──┘   (sum >> 1)
Alg2 (4-op 并行):   Op1 ──┬──→ Mix
                     Op2 ──┤   (sum >> 2)
                     Op3 ──┤
                     Op4 ──┘
Alg3 (3-op+载波):   Op1 ──FM──→ Op2 ──FM──→ Op3 ──┬──→ Mix
                                               (Op1+Op3)>>3
                                                   └──FM──→ Op4 → Mix
Alg4 (4-op 级联):   Op1 ──FM──→ Op2 ──FM──→ Op3 ──FM──→ Op4 ──→ Mix
Alg5 (双对):         Op1 ──FM──→ Op2 ──┬──→ Mix
                     Op3 ──FM──→ Op4 ──┘   (sum >> 1)
Alg6 (并行+级联):   Op1 ──┬──→ Mix
                     Op2 ──FM──→ Op3 ──┘   (sum >> 1)
Alg7 (3路并行):     Op1 ──┬──→ Mix
                     Op2 ──FM──→ Op3 ──┤   (sum >> 2)
                     Op4 ─────────────┘
```

### 3.3 算子参数 (从 Ghidra _tagFMSLOTINFO 提取)

```c
typedef struct {
    // 相位
    uint32_t phase;          // 32-bit 相位累加器
    uint32_t phase_inc;      // 相位增量 (= f_note × MULT / sample_rate)
    const int16_t *wave_table; // 波形表指针 (1024 × int16_t)

    // 包络
    int16_t  level;          // 当前电平 (Q15)
    uint8_t  ar, dr, sr, rr; // Attack/Decay/Sustain/Release Rate
    uint8_t  sl;             // Sustain Level
    uint8_t  tl;             // Total Level
    uint8_t  ksl, ksr;      // Key Scale Level/Rate

    // 调制
    uint8_t  fb;             // 反馈量 (0-7)
    uint8_t  dt;             // 微调 (0-7)
    uint8_t  multi;          // 频率倍率 (0-15)
    uint8_t  ws;             // 波形选择

    // LFO
    uint8_t  am_enable;      // AM 使能
    uint8_t  vb_enable;      // Vibrato 使能
    uint8_t  am_depth;       // AM 深度
    uint8_t  vb_depth;       // Vibrato 深度
} smaf_operator_t;

typedef struct {
    bool     active;
    uint8_t  algorithm;      // 0-7
    uint8_t  note;
    uint8_t  velocity;
    uint8_t  panpot;         // 0-127
    int16_t  pan_coeff_L;    // Q15 声像系数
    int16_t  pan_coeff_R;    // Q15

    smaf_operator_t op[4];   // 4 个算子

    // 反馈状态
    int32_t  feedback[4];    // 每算子反馈累加器
    uint8_t  feedback_flag;  // 反馈使能标志
} smaf_fm_channel_t;
```

### 3.4 FM 合成核心渲染 (热路径)

```c
// 每个 FM 声道，每采样
static inline int32_t fm_channel_render(smaf_fm_channel_t *ch, int num_samples,
                                         int32_t *outL, int32_t *outR) {
    for (int s = 0; s < num_samples; s++) {
        int32_t op_out[4];

        // 1. 相位更新 + 波表查找
        for (int i = 0; i < 4; i++) {
            smaf_operator_t *op = &ch->op[i];
            op->phase += op->phase_inc;
            int index = (op->phase >> 22) & 0x3FF;
            op_out[i] = (int32_t)op->wave_table[index];
        }

        // 2. FM 调制 (根据算法拓扑连接算子)
        // 3. 包络应用
        // 4. 混合输出
        // ... (根据 ch->algorithm 选择 CalcAlg0~7 的实现)

        // 5. 声像混合
        *outL += (sample * ch->pan_coeff_L) >> 15;
        *outR += (sample * ch->pan_coeff_R) >> 15;
        outL++; outR++;
    }
}
```

## 4. 波表/ADPCM 合成引擎 (新增)

### 4.1 Yamaha 4-bit ADPCM 解码

从 Ghidra oscSlot_4 提取的**真实步进表** (MA-7 专有，非 IMA)：

```c
// Yamaha MA-7 ADPCM 步进表 (来自 Ghidra 反编译)
static const uint16_t adpcm_step_table[8] = {
    0x3980, 0x3980, 0x3980, 0x3980,
    0x4CC0, 0x6640, 0x8000, 0x9980
};

typedef struct {
    int16_t  predictor;  // 当前预测值
    uint16_t step;       // 当前步进值
} smaf_adpcm_state_t;

// 解码一个 nibble
static inline int16_t adpcm_decode_nibble(smaf_adpcm_state_t *st, uint8_t nibble) {
    uint8_t sign = (nibble >> 3) & 1;
    uint8_t idx = nibble & 7;
    uint32_t new_step = (uint32_t)st->step * adpcm_step_table[idx] >> 14;
    if (new_step < 0x7F) new_step = 0x7F;
    if (new_step > 0x6000) new_step = 0x6000;

    int32_t delta = (int32_t)st->step >> 3;
    if (nibble & 1) delta += st->step >> 2;
    if (nibble & 2) delta += st->step >> 1;
    if (nibble & 4) delta += st->step;
    if (sign) delta = -delta;

    int32_t pred = st->predictor + delta;
    if (pred > 0x7FFF) pred = 0x7FFF;
    if (pred < -0x8000) pred = -0x8000;

    st->predictor = (int16_t)pred;
    st->step = (uint16_t)new_step;
    return (int16_t)pred;
}
```

### 4.2 8-bit PCM 波表 + 线性插值

从 Ghidra oscSlot_8A 提取：

```c
// 16.16 定点相位插值
static inline int16_t wt_interpolate_8bit(const int8_t *wave, uint32_t phase) {
    uint32_t index = phase >> 16;
    uint32_t frac = phase & 0xFFFF;
    int32_t s0 = wave[index];
    int32_t s1 = wave[index + 1];
    return (int16_t)((s0 * (0x10000 - frac) + s1 * frac) >> 16);
}
```

### 4.3 波形数据上传格式

从 Ghidra MaSndDrv_SetWtWave 提取的 4 种编码：

| Type | 格式 | 说明 |
|------|------|------|
| 0 | 原始字节 | 8-bit PCM 直传 |
| 1 | 7-bit 编码 | Yamaha 专有压缩 |
| 2 | 8→16 有符号 | size×2 扩展 |
| 4 | 8→16 无符号 | size×2 扩展 |

libsmaf 优先支持 Type 0 (原始) 和 Type 2/4 (扩展)，Type 1 (7-bit 压缩) 为可选。

### 4.4 波形寻址

- 17 位虚拟地址空间，最大 0x14000 = 80KB
- 波形 ID: 0-127 = 内置 ROM, 128-255 = RAM
- 波形信息结构体: 32 字节 (_tagWtVoiceInfo)

## 5. EG 包络系统 (从 Ghidra 提取)

MA-7 的包络系统为**函数指针状态机** (非经典参数表)，需要重构为参数化实现：

### 5.1 状态机模型

```
状态 0: RELEASE — 指数衰减到静音
状态 1: ATTACK  — 从 0 爬升到峰值
状态 2: DECAY   — 从峰值衰减到 sustain level
状态 3: SUSTAIN — 维持 (含 Vibrato LFO 调制)
状态 4: SUSTAIN — 同上 (含 Vibrato + 附加调制)
状态 5: SUSTAIN — 同上
```

### 5.2 参数化重构

```c
typedef enum {
    EG_ATTACK, EG_DECAY, EG_SUSTAIN, EG_RELEASE
} eg_phase_t;

typedef struct {
    eg_phase_t phase;
    uint8_t   ar;        // Attack rate (0-15)
    uint8_t   dr;        // Decay rate (0-15)
    uint8_t   sr;        // Sustain rate (0-15)
    uint8_t   rr;        // Release rate (0-15)
    uint8_t   sl;        // Sustain level (0-15)
    int16_t   current;   // 当前电平 (Q15)
    int16_t   target;    // 目标电平
    uint16_t  rate;      // 当前速率 (从 AR/DR/SR/RR 映射)
} smaf_eg_t;
```

速率表从 Ghidra 反编译的包络乘数表 (DAT 段) 提取，或使用标准指数映射。

### 5.3 LFO (颤音/震音)

- 4096 点正弦表 (DAT_0028d0f0)
- 调制 pitch (vibrato) 和 level (tremolo/AM)
- 频率由 LFO 参数控制

## 6. 混音器 (从 Ghidra CDinSynth::Generate 提取)

```c
// MA-7 混音器模型
typedef struct {
    int32_t *bus_main_L;    // 主输出左
    int32_t *bus_main_R;    // 主输出右
    int32_t *bus_aux_L;     // 辅助输出左
    int32_t *bus_aux_R;     // 辅助输出右
    // libsmaf 简化为 2 总线 (主 + 辅助)
} smaf_mixer_t;

// 每声道混音: Q15 乘法
static inline void mixer_add_sample(smaf_mixer_t *mix, int ch,
                                     int32_t sample, int16_t vol, int16_t pan_L, int16_t pan_R) {
    int32_t scaled = (sample * vol) >> 15;
    mix->bus_main_L[ch] += (scaled * pan_L) >> 15;
    mix->bus_main_R[ch] += (scaled * pan_R) >> 15;
}

// 输出阶段: 32-bit 累加 → 16-bit 饱和
static inline int16_t clamp16(int32_t v) {
    if (v > 32767) return 32767;
    if (v < -32768) return -32768;
    return (int16_t)v;
}
```

## 7. 内存预算 (修订)

### 7.1 RAM 使用

| 组件 | RAM | 说明 |
|------|-----|------|
| FM 声道 (简化到 16) | ~10 KB | 16 × 640B (MA-7 原始) 或 ~16×128B (精简) |
| WT 声道 (简化到 8) | ~4 KB | 8 × 512B (精简, 去掉 LPF/VolIP 大结构) |
| 波形表 (FM) | ~8 KB | 4 种波形 × 1024 × 2B |
| 波形数据 (WT/ADPCM) | ~32 KB | 按 MMF 文件内嵌大小 |
| ADPCM 状态 | ~64 B | 4 通道 × 16B |
| 包络状态 | ~1 KB | 24 通道 × ~40B |
| 混音缓冲 | ~2 KB | 双缓冲 1024 采样 × 2 声道 × 2B |
| LFO 正弦表 | ~8 KB | 4096 × 2B (或减半到 2048) |
| 序列器 | ~1 KB | 事件指针 + 计时 |
| **合计** | **~66 KB** | RP2350 520KB，余量充足 |

**精简方案** (减少到 16 FM + 4 WT): ~30 KB。

### 7.2 CPU 负载 (修订)

基于 MA-7 真实架构：

| 操作 | 每采样周期 | 22050Hz × 16ch |
|------|-----------|---------------|
| 相位更新 + 查表 | ~10 cyc/op | 640 cyc |
| FM 调制 | ~5 cyc/op | 320 cyc |
| 包络更新 | ~15 cyc/ch | 240 cyc |
| Q15 乘法 | ~3 cyc/op | 192 cyc |
| 混音 | ~8 cyc/ch | 128 cyc |
| **总计** | | **~1520 cyc** |
| 可用周期/采样 (150MHz) | | **6800 cyc** |
| **CPU 占用** | | **~22%** |

原设计估算 72% 是基于 Nuked-OPL3 的间接调用开销。直接实现 MA-7 算法只需 **22%**，单核绰绰有余，双核一个做合成一个做序列/音频输出。

## 8. 文件结构 (修订)

```
libsmaf/
├── include/
│   └── smaf.h               // 公共 API
├── src/
│   ├── smaf.c               // 公共 API 实现
│   ├── synth/
│   │   ├── synth.h          // 合成器接口
│   │   ├── synth.c          // 合成器调度 (FM + WT 混合渲染)
│   │   ├── fm_synth.c       // FM 合成核心 (CalcAlg0~7)
│   │   ├── fm_table.c       // FM 波形表 + adMask 表
│   │   ├── eg.c             // EG 包络 (ADSR 状态机)
│   │   ├── lfo.c            // LFO (4096 点正弦)
│   │   ├── wt_synth.c       // 波表合成 (8-bit PCM + 线性插值)
│   │   ├── adpcm.c          // Yamaha 4-bit ADPCM 解码
│   │   ├── noise.c          // 白噪声发生器
│   │   └── mixer.c          // 多通道→立体声混音
│   ├── parser/
│   │   ├── parser.h
│   │   ├── chunk.c          // SMAF chunk 解析
│   │   ├── score.c          // Score Track 事件解码
│   │   ├── voice_parse.c    // Setup Data 音色参数
│   │   ├── wave_parse.c     // 波形数据提取
│   │   └── opda.c           // 元数据解析
│   ├── sequencer/
│   │   ├── seq.h
│   │   └── seq.c
│   └── audio/
│       ├── audio.h
│       ├── audio_rp2350.c
│       └── audio_mock.c     // 写 WAV，桌面测试
├── test/
│   ├── test_fm.c            // FM 单音测试
│   ├── test_adpcm.c         // ADPCM 解码测试
│   ├── test_parser.c        // SMAF 解析测试
│   └── fixtures/            // MMF 测试文件
├── CMakeLists.txt
└── README.md
```

## 9. 开发路线 (修订)

### 阶段 1.1：FM 合成核心 (1-2 周)

1. 实现 1024 点波形表 (正弦 + 4 种标准波形)
2. 实现单算子: 相位累加 + 波表查找 + Q15 乘法
3. 实现 CalcAlg0~7 八种算法拓扑
4. 实现 EG 包络 (ADSR 参数化)
5. 实现 LFO (4096 点正弦)
6. 桌面验证: 生成正弦波/FM 音色 WAV，对比参考

### 阶段 1.2：ADPCM + 波表合成 (1 周)

1. 实现 Yamaha 4-bit ADPCM 解码 (用 vavi-sound Yamaha.java 交叉验证)
2. 实现 8-bit PCM 波表 + 线性插值
3. 实现白噪声发生器
4. 测试: 解码已知 ADPCM 波形，对比参考输出

### 阶段 1.3：SMAF 解析器 (1-2 周)

1. Chunk 解析: MMMD → CNTI → OPDA → MSTR → MTR
2. Score Track 解析: delta time + 事件解码
3. Setup Data 解析: FM 音色参数提取
4. 波形数据提取: Awa* / Mwa* chunk
5. 测试: 用 31 个 MMF 测试文件验证

### 阶段 1.4：序列器 + 混音 (1 周)

1. Tick-based 事件调度
2. 声部分配 (voice allocation)
3. 混音器: 多通道 → 立体声
4. 集成测试: 解析 MMF → 播放 → WAV 输出

### 阶段 1.5：RP2350 移植 (1 周)

1. audio_rp2350.c (PWM PIO 或 I2S)
2. DMA 双缓冲
3. 音质对比: 与 KEmulator 输出 A/B 测试

## 10. 风险 (修订)

| 风险 | 影响 | 对策 |
|------|------|------|
| ADPCM 步进表细节遗漏 | 中 | vavi-sound Yamaha.java 可交叉验证；31 个 MMF 文件做回归 |
| EG 包络参数映射不准 | 中 | fmfm.core 有完整的 rate 表；可用参考音色 A/B 对比 |
| SMAF 格式变种 | 低 | vavi-sound 覆盖最全；优先支持常见格式 |
| ~~OPL3 扩展问题~~ | ~~已消除~~ | 弃用 OPL3，直接实现 |
| RP2350 性能 | 低 | 22% CPU 占用，余量巨大 |

## 11. 参考资源

| 资源 | 用途 |
|------|------|
| **Ghidra MA-7 反编译** (ghidra_ma7_arm64/) | FM/ADPCM/WT 算法真值来源 |
| **MA7_CORE_ANALYSIS.md** | 架构总结文档 |
| fmfm.core (MIT) | FM 参数定义 + 算法拓扑 |
| vavi-sound Yamaha.java (BSD) | ADPCM 解码参考 |
| vavi-sound SMAF parser (BSD) | SMAF 解析参考 |
| retroYamaha (GPLv3) | SMAF 解析备选 |
| FFmpeg mmf.c (LGPL) | SMAF demuxer |
| SMAF Spec 3.06 | 官方格式规范 |
| MA-5 AT Manual | 音色参数定义 |
