# fmfm.core MA-5 FM 合成实现分析

> 基于 [fmfm.core](https://github.com/but80/fmfm.core) 源码的逐文件审计，对照 MA-5 Authoring Tool Manual 参数规范。

## 1. 概述

fmfm.core 是 but80 用 Go 语言实现的 MA-5/YMF825 FM 合成克隆，基于 doomjs/opl3 但做了大量 MA-5 专用改造。

| 属性 | 详情 |
|------|------|
| 语言 | Go |
| 许可证 | MIT |
| 状态 | WIP (2019年后停更) |
| 合成核心文件 | `sim/operator.go`, `sim/channel.go`, `sim/envelope.go`, `sim/phase.go` |
| 常量表文件 | `ymf/ymfdata/data.go` |
| 寄存器接口 | `sim/register.go` |
| 控制器层 | `controller.go` (MIDI→芯片桥接) |

## 2. 完整性总评

| 模块 | 完整度 | 说明 |
|------|--------|------|
| 算子参数 (17项) | **100%** | 全部实现 |
| 通道参数 | **100%** | 全部实现 |
| 8种算法 | **100%** | 全部实现 |
| 32种波形 | **100%** | 全部生成 |
| 包络发生器 | **~95%** | ADSR+Release完整，SL=15特殊行为需验证 |
| 相位发生器 | **~90%** | MA-5专用公式完整，BO影响有TODO |
| LFO/Tremolo/Vibrato | **100%** | 4频率+4深度全部符合MA-5规范 |
| 反馈 | **100%** | 8级反馈，采样率自适应混合 |
| 控制器 (MIDI) | **~60%** | 仅FM音色，无鼓组，无GS/XG |
| 硬件验证 | **0%** | 无YMU765输出对比 |

## 3. 算子级参数逐项对照

MA-5 AT Manual 定义了17个算子参数，fmfm.core 全部实现：

### 3.1 MULT (频率倍率) — 完整

```
AT Manual: 0-15, 实际倍率 = {×1, ×2, ×4, ×6, ×8, ×10, ×12, ×14, ×16, ×18, ×20, ×20, ×24, ×24, ×30, ×30}
fmfm.core: MultTable2[16]uint64 = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 20, 24, 24, 30, 30}
位置: ymf/ymfdata/data.go
```

注意与OPL3的区别：OPL3使用0.5起步的半步倍率表，MA-5使用整数倍率表。

### 3.2 DT (去谐/Detune) — 完整 (MA-5专用)

```
AT Manual: 0-7, 单位Hz频率偏移
  DT=0: 无偏移
  DT=1-3: 正向偏移 (频率增加)
  DT=4: 无偏移
  DT=5-7: 负向偏移 (频率减少)

fmfm.core: DTCoef[8][16]float64 — Hz偏移量表
  DTCoef[0][*] = 0 (DT=0)
  DTCoef[4][*] = 0 (DT=4)
  DTCoef[1-3][*] = 正值
  DTCoef[5-7][*] = 负值
位置: ymf/ymfdata/data.go, sim/phase.go
```

**关键差异 (vs OPL3)**：MA-5的DT是**Hz频率偏移**，OPL3是**相位偏移**。fmfm.core正确实现了MA-5的方式：

```go
// phase.go - setFrequency()
operatorFrequency := baseFrequency + ymfdata.DTCoef[dt][ksn]
```

### 3.3 TL (总电平/Total Level) — 完整

```
AT Manual: 0-127, 步进 -0.75 dB
fmfm.core: tlDB := float64(tl) * -0.75
           → linear := Pow(10.0, tlDB / 20.0)
位置: sim/envelope.go
```

### 3.4 AR (攻击速率/Attack Rate) — 完整

```
AT Manual: 0-15, 与KSR/KSN联合决定实际攻击时间
fmfm.core: attackTimeSecAt1[2][9]float64 — 两组KSR下的基础攻击时间
  KSR=0: {3.07, 3.07, 3.07, 2.46, 2.46, 2.05, 2.05, 1.75, 1.75}
  KSR=1: {3.07, 2.46, 1.75, 1.23, 0.88, 0.61, 0.44, 0.31, 0.22}
  实际 = 基础时间 / (1 << (KSN高3位 + KSR))
位置: sim/envelope.go
```

### 3.5 DR/SR/RR (衰减/持续/释放速率) — 完整

```
AT Manual: 0-15, 单位 dB/sec @ 4kHz
fmfm.core: decayDBPerSecAt4[2][16]float64 — 两组KSR下的基础衰减速率
  KSR=0: {17.9, 17.9, 17.9, 17.9, 17.9, 22.4, 22.4, 22.4, 22.4, 26.9, 26.9, 26.9, 26.9, 31.4, 31.4, 31.4}
  KSR=1: {17.9, 22.4, 22.4, 31.4, 31.4, 44.9, 44.9, 62.8, 62.8, 89.7, 89.7, 125.6, 125.6, 179.3, 179.3, 250.9}

  实际dB/sample = 基础速率 * (1<<rate) / 16.0 / sampleRate
位置: sim/envelope.go
```

DR、SR、RR共享同一套衰减速率表，仅作用阶段不同。envelope_test.go 验证了RR的16×2种组合。

### 3.6 SL (持续电平/Sustain Level) — 完整

```
AT Manual: 0-15, 步进 -3.0 dB (SL=15表示永远持续)
fmfm.core: slDB := -3.0 * float64(sl)
           → linear := Pow(10.0, slDB / 20.0)
  特殊: SL=15 → slDB = -45.0 dB → 几乎无衰减
位置: sim/envelope.go
```

### 3.7 KSL (键缩放电平/Key Scale Level) — 完整

```
AT Manual: 0-3, 根据音符音高自动调节TL
fmfm.core: KSLTable[4][8][32]float64 — 4级×8 block×32 fnum查找表
  附加: kslBlockCoefs = {0, 3.0, 1.5, 6.01} dB/八度
位置: ymf/ymfdata/data.go
```

### 3.8 KSR (键缩放速率/Key Scale Rate) — 完整

```
AT Manual: 0或1, 影响AR/DR/SR/RR的KSN偏移
fmfm.core: ksr标志位，影响AR/DR/SR/RR计算时KSN的有效位数
位置: sim/envelope.go
```

### 3.9 WS (波形选择/Waveform Select) — 完整

```
AT Manual: 0-31, 32种波形
fmfm.core: Waveforms[32][]float64 — 全部32种波形在init()中生成

波形分组:
  0-5:   SIN 变体 (正弦波 + 不同谐波组合)
  6:     SQR (方波)
  7:     EXP (指数波)
  8-13:  CSIN 变体 (修正正弦)
  14:    SQR (方波变体)
  16-21: TRI 变体 (三角波)
  22:    SQR (方波变体)
  24-29: SAW 变体 (锯齿波)
  30:    SQR (方波变体)

每种波形1024个采样点 (10位索引)
位置: ymf/ymfdata/data.go init()
```

**OPL3只有8种波形**，fmfm.core的32种完全符合MA-5规范。

### 3.10 FB (反馈/Feedback) — 完整

```
AT Manual: 0-7
fmfm.core: FeedbackTable[8]float64 = {0, 1/32, 1/16, 1/8, 1/4, 1/2, 1.0, 2.0}
位置: ymf/ymfdata/data.go, sim/channel.go
```

特殊实现：采样率自适应反馈混合：
```go
feedbackBlendCurr = .5 * ymfdata.SampleRate / chip.sampleRate
feedback = feedbackBlendPrev * prevFeedback + (1-feedbackBlendPrev) * newFeedback
```

### 3.11 EAM (AM使能) / EVB (Vibrato使能) — 完整

```
AT Manual: 0=关闭, 1=开启
fmfm.core: 开关标志位，在算子运算时检查
位置: sim/operator.go
```

### 3.12 DAM (AM深度) — 完整 (MA-5专用)

```
AT Manual: 0-3, 4级AM调制深度
fmfm.core: TremoloTable[4][8192]float64 — 8192点×4深度查找表
  深度: {1.3, 2.8, 5.8, 11.8} dB

  与OPL3的区别: OPL3固定1.05 dB, MA-5有4级可编程深度
位置: ymf/ymfdata/data.go
```

### 3.13 DVB (Vibrato深度) — 完整 (MA-5专用)

```
AT Manual: 0-3, 4级Vibrato调制深度
fmfm.core: VibratoTableInt32Frac32[4][8192] — 8192点×4深度查找表
  深度: {3.4, 6.7, 13.5, 26.8} cents

  与OPL3的区别: OPL3固定深度, MA-5有4级可编程深度
位置: ymf/ymfdata/data.go, sim/phase.go
```

### 3.14 XOF (键关闭忽略/Key Off Ignore) — 完整

```
AT Manual: 0=正常, 1=键释放后算子不进入Release阶段
fmfm.core: xof标志位，影响key off行为
位置: sim/operator.go
```

## 4. 通道级参数

### 4.1 ALG (算法/Algorithm) — 完整

8种算法全部实现，使用CarrierMatrix和ModulatorMatrix布尔表定义算子连接：

```
ALG 0: OP1→OP2→OP3→OP4→OUT (全串联)
       OP1(调制)→OP2(调制)→OP3(调制)→OP4(载波)→输出

ALG 1: OP1→OP2→(OP3+OP4)→OUT
       OP1(调制)→OP2(调制)→OP3(调制)+OP4(载波)→输出

ALG 2: OP1→(OP2,OP3)→OP4→OUT
       OP1(调制)→OP2(调制)并行→OP3(调制)→OP4(载波)→输出

ALG 3: OP1→OP3→OP4, OP2→OP4
       OP1(调制)→OP3(调制)→OP4(载波), OP2(调制)→OP4(载波)

ALG 4: (OP1→OP2)→OUT, (OP3→OP4)→OUT
       两个独立2-op FM合成并行输出

ALG 5: OP1+OP2→OP3→OP4→OUT
       OP1+OP2(调制)→OP3(调制)→OP4(载波)→输出

ALG 6: OP1→OP2→OUT, OP3→OP4→OUT
       与ALG4类似但反馈路径不同

ALG 7: OP1+OP2+OP3+OP4→OUT
       四个独立算子并行输出
```

**OPL3只有4种有效算子组合**，ALG2/5/7在OPL3中无等价实现。

实现位置：`sim/channel.go` 的 `next()` 方法，lines 339-483，每种算法独立的case分支。

### 4.2 PANPOT (声像) + CH_PAN (声道相位) — 完整

```
PANPOT: 0-127, 0=左, 64=中, 127=右
CH_PAN: 附加声像偏移
混合: pan = ch.chpan + (ch.panpot - 15) * 4
输出: PanTable[pan][0]=左系数, PanTable[pan][1]=右系数 (sin/cos交叉淡入)
位置: ymf/ymfdata/data.go (PanTable[128][2]), sim/channel.go
```

### 4.3 VOL / EXP / VEL — 完整

```
三级音量乘积: output = VolumeTable[volume>>2] × VolumeTable[expression>>2] × VolumeTable[velocity>>2]
VolumeTable[32]: -dB到线性的查找表
位置: sim/channel.go (updateAttenuation)
```

### 4.4 LFO (低频振荡器) — 完整 (MA-5专用)

```
AT Manual: 0-3, 4个固定频率
fmfm.core: LFOFrequency[4]float64 = {1.8, 4.0, 5.9, 7.0} Hz
  LFO通过8192点查找表驱动Tremolo和Vibrato
  与OPL3的区别: OPL3有固定硬件LFO频率, MA-5有4个可编程频率
位置: ymf/ymfdata/data.go
```

### 4.5 FNUM / BLOCK / BO (频率控制) — 完整 (MA-5专用)

```
AT Manual:
  FNUM: 频率编号 (10位, 0-1023)
  BLOCK: 八度 (0-7, 每八度=频率×2)
  BO: Block Offset, 额外八度偏移

fmfm.core:
  FNUMCoef = float64(1<<19) / 48000.0 * 0.5  // MA-5专用系数
  baseFrequency = float64(fnum << uint(block+3-bo)) / (16.0 * FNUMCoef)

  与OPL3的区别:
    MA-5: (1<<19) / 48000 * 0.5 ≈ 10.89
    OPL3: (1<<20) / 49716    ≈ 21.33
    MA-5内部采样率48000Hz, OPL3为49716Hz

位置: sim/phase.go (setFrequency)
注意: BO影响有TODO注释，需验证
```

## 5. 核心数据结构

### 5.1 算子 (operator.go)

```go
type operator struct {
    ws    int     // 波形选择 0-31
    fb    int     // 反馈 0-7 (仅op1有效)
    eam   int     // AM使能
    evb   int     // Vibrato使能
    dam   int     // AM深度 0-3
    dvb   int     // Vibrato深度 0-3
    xof   int     // 键关闭忽略
    phaseGenerator  phaseGenerator
    envelopeGenerator envelopeGenerator
}
```

算子的核心运算在 `next(modIndex, modulator)` 方法中：

```go
func (op *operator) next(modIndex int, modulator float64) float64 {
    // 1. 相位累加 (含Vibrato调制)
    phaseFrac64 := op.phaseGenerator.getPhase(modIndex)
    // 2. 包络关闭则输出0
    if op.envelopeGenerator.stage == stageOff { return 0 }
    // 3. 获取当前包络值
    envelope := op.envelopeGenerator.getEnvelope(modIndex)
    // 4. 波形查表 (含FM调制)
    sampleIndex := uint64(phaseFrac64) >> WaveformIndexShift
    sampleIndex += uint64((modulator + WaveformLen) * WaveformLen)
    // 5. 波形×包络 = 输出
    return Waveforms[op.ws][sampleIndex & 1023] * envelope
}
```

### 5.2 相位发生器 (phase.go)

```go
type phaseGenerator struct {
    phaseFrac64         ymfdata.Int64Frac64   // 64位定点相位
    phaseIncrementFrac64 ymfdata.Int64Frac64   // 64位定点相位增量
    sampleRate          float64
    vibratoPhase        int
    dvb                int
}
```

`setFrequency()` 是MA-5专用频率计算的关键：

```go
func (pg *phaseGenerator) setFrequency(fnum, block, bo, mult, dt int) {
    baseFrequency := float64(fnum << uint(block+3-bo)) / (16.0 * ymfdata.FNUMCoef)
    ksn := block<<1 | fnum>>9
    operatorFrequency := baseFrequency + ymfdata.DTCoef[dt][ksn]       // ← Hz偏移!
    pg.phaseIncrementFrac64 = ymfdata.FloatToFrac64(operatorFrequency / pg.sampleRate)
    pg.phaseIncrementFrac64 = pg.phaseIncrementFrac64.MulUint64(ymfdata.MultTable2[mult])
    pg.phaseIncrementFrac64 >>= 1
}
```

### 5.3 包络发生器 (envelope.go)

```
阶段: Off → Attack → Decay → Sustain → Release → Off

Attack:  线性递增 (dB级别) → 到0dB
Decay:   指数衰减 → 到SL
Sustain: 在SL继续衰减 (SR=0则保持)
Release: 指数衰减 → 到-off
```

### 5.4 信道 (channel.go)

```go
type channel struct {
    alg     int     // 算法 0-7
    panpot  int     // 声像 0-127
    chpan   int     // 声道相位偏移
    volume  int     // 音量 0-127
    expression int   // 表情 0-127
    velocity int     // 力度 0-127
    kon     int     // 键开/关
    bo      int     // Block Offset
    fnum    int     // 频率编号
    block   int     // 八度
    operators [4]operator
    // 内部运算临时变量
    feedback         float64
    feedbackBlendPrev float64
    feedbackBlendCurr float64
    panCoefL         float64
    panCoefR         float64
    attenuation      float64
}
```

## 6. MA-5 vs OPL3 差异汇总

这是从fmfm.core源码中确认的关键差异，解释了为什么不能直接用Nuked-OPL3：

| 特性 | MA-5 (fmfm.core) | OPL3 (Nuked-OPL3) | 影响 |
|------|-----------------|-------------------|------|
| 算法数 | 8种 | 4种组合 | ALG 2/5/7无法映射 |
| 波形数 | 32种 | 8种 | 缺少24种波形 |
| DT类型 | Hz频率偏移 | 相位偏移 | 数学模型完全不同 |
| DT查找表 | `DTCoef[8][16]` | 硬编码相位表 | 需重写 |
| LFO频率 | 4个可编程 (1.8-7.0Hz) | 固定6.25Hz | 需重写 |
| Tremolo深度 | 4级 (1.3-11.8dB) | 固定1.05dB | 需重写 |
| Vibrato深度 | 4级 (3.4-26.8cents) | 固定7cents | 需重写 |
| FNUM系数 | `(1<<19)/48000*0.5` | `(1<<20)/49716` | 频率计算不同 |
| 内部采样率 | 48000Hz | 49716Hz | 整体节拍不同 |
| MULT表 | 整数倍率 | 0.5起步半步 | 查找表不同 |
| ModMultiplier | 4.0 (MA-5独有) | 无 | OPL3缺失 |
| KSL | 4级 dB/八度 | 3级 | 表结构不同 |

**结论：MA-5和OPL3的FM合成模型有本质区别，OPL3引擎约70%的代码需要重写才能适配MA-5。**

## 7. 移植到C/定点运算的工作量评估

### 7.1 需要改写的部分

| 源文件 | Go行数 | C估算行数 | 改写难度 |
|--------|--------|----------|---------|
| operator.go | ~80 | ~120 | 中 — float64→定点 |
| channel.go | ~200 | ~350 | 中 — 8个算法case |
| envelope.go | ~200 | ~300 | 高 — dB计算需定点 |
| phase.go | ~80 | ~150 | 高 — 64位定点相位 |
| data.go (常量) | ~412 | ~500 | 低 — 直接转写 |
| register.go | ~120 | ~150 | 低 — 寄存器映射 |
| **合计** | **~1092** | **~1570** | |

### 7.2 定点运算方案

fmfm.core全部使用 `float64`，RP2350无FPU，必须改写：

**推荐格式：Q15.17 定点 (32位)**
- 17位小数 → 精度约 7.6×10⁻⁶
- 15位整数 → 范围 ±32768
- 适合波形幅度 (-1.0~+1.0)、包络值、频率系数

**相位累加器：64位整数**
- fmfm.core已使用 `Int64Frac64` — 可直接沿用
- 高32位 = 整数相位, 低32位 = 小数相位

**包络 (dB域)：**
- TL: -0.75 dB/步 → 查表 (128 entries)
- SL: -3.0 dB/步 → 查表 (16 entries)
- AR/DR/SR/RR: dB/sample → 查表 (16×2 entries)

### 7.3 查找表内存

```
Waveforms[32][1024] float64 → float32 定点: 32×1024×2 = 64 KB (Flash)
  可优化: 10位索引可减为256点+线性插值 → 16 KB

TremoloTable[4][8192] → 可减为256点: 4×256×2 = 2 KB
VibratoTable[4][8192] → 可减为256点: 4×256×4 = 4 KB
PanTable[128][2] → 128×2×2 = 512 B
VolumeTable[32] → 32×2 = 64 B
KSLTable[4][8][32] → 4×8×32×2 = 2 KB
FeedbackTable[8] → 8×2 = 16 B
DTCoef[8][16] → 8×16×4 = 512 B
MultTable2[16] → 16×4 = 64 B
LFOFrequency[4] → 4×4 = 16 B
attackTimeSecAt1[2][9] → 18×4 = 72 B
decayDBPerSecAt4[2][16] → 32×4 = 128 B

Flash总计: ~74 KB (优化后 ~26 KB)
RAM: 无 (全部Flash驻留)
```

## 8. 未完成项与风险

### 8.1 fmfm.core README 标注的 TODO

1. **分析 ATS-MA5 输出** — Waveform DVB 的精确行为
2. **MIDI颤音分辨率** — 与硬件的实际对比
3. **声道声像分辨率** — PanTable 精度验证
4. **声道声像与音色声像混合** — CH_PAN + PANPOT 联合行为

### 8.2 代码中的 TODO

- `phase.go` `setFrequency()`: 关于 BO (Block Offset) 对 KSN 计算影响的疑问
- `channel.go`: 反馈混合的采样率自适应公式未与硬件验证

### 8.3 缺失的测试

- 仅有 `envelope_test.go` (验证RR衰减速率)
- 无算子输出波形测试
- 无算法正确性测试
- 无相位发生器精度测试
- 无集成测试 (完整音符渲染)

### 8.4 移植风险

| 风险 | 等级 | 说明 |
|------|------|------|
| 定点化精度损失 | 中 | float64→Q15.17可能有可闻失真，需A/B测试 |
| 波形表过大 | 低 | 64KB可优化到16KB |
| 包络定点化 | 高 | dB域的乘法和指数运算需要仔细设计查找表 |
| 未知硬件差异 | 中 | 无YMU765对比数据 |

## 9. 移植建议

### 9.1 推荐策略

```
1. 直接翻译 fmfm.core 的数学模型为C (不经过OPL3)
2. 查找表全部用定点数 (Q15或Q23)，放在Flash
3. 包络计算预计算为"每步衰减系数表"，运行时只做乘法
4. 相位累加器沿用 fmfm.core 的64位定点方案
5. 保留 float64 桌面版本用于对比验证
```

### 9.2 文件结构建议

```
libsmaf/src/synth/
├── ma5_tables.h      // 所有常量查找表 (纯数据, 从data.go直译)
├── ma5_phase.c       // 相位发生器 (从phase.go翻译)
├── ma5_envelope.c    // 包络发生器 (从envelope.go翻译)
├── ma5_operator.c    // 算子 (从operator.go翻译)
├── ma5_channel.c     // 信道+算法 (从channel.go翻译)
├── ma5_chip.c        // 芯片顶层 (多声道管理)
├── ma5_register.c    // 寄存器写入接口 (从register.go翻译)
└── ma5_tables_float.h // float64版本 (桌面测试用, 对比验证)
```

## 10. 参考资源

| 资源 | 用途 |
|------|------|
| [fmfm.core](https://github.com/but80/fmfm.core) | MA-5 FM合成源码 (MIT) |
| [MA-5 AT Manual](https://ia902302.us.archive.org/24/items/at-manual-e/AT_Manual_e.pdf) | 官方参数规范 |
| [KEmulator SMAF封装](../KEmulator-main/SMAF_INVESTIGATION.md) | JNA调用流程参考 |
| [Nuked-OPL3](https://github.com/nukeykt/Nuked-OPL3) | 定点整数运算风格参考 |
