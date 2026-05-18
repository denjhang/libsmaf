# libsmaf

Yamaha SMAF/MMF 格式研究工具集。目标是为 RP2350 嵌入式平台开发纯软件 SMAF/MMF 播放库。

## 项目成果

### 1. MMF 播放器（32/64 位）

基于 Yamaha MA-3/5/7 芯片仿真 DLL 的 MMF 文件播放器。

```
tools/ma7player/
├── smaf_play.exe    — 32位播放器（直接调用 MA DLL）
├── smaf_play64.exe  — 64位播放器（通过 IPC 调用 32位 helper）
└── ma_helper.exe    — 32位 IPC 服务端
```

- 支持 MA-3（16复音）、MA-5（32复音）、MA-7（64复音）
- 自动检测可用 DLL（MA-7 > MA-5 > MA-3）
- 播放控制：play/stop/pause/resume/seek/volume/pan/pitch/tempo
- 32位版本直接调用 DLL，64位版本通过 stdin/stdout IPC 桥接
- 详细文档：[tools/ma7player/README.md](tools/ma7player/README.md)

### 2. MIDI → MMF 转换器

通过逆向 Yamaha SSD.exe 转换工具，直接调用其 CnvMA3SMF.dll + CnvMA3SMAF_SC.dll 实现转换。

```
tools/yamaha_converter/
├── midi2mmf.exe         — MIDI→MMF 转换器（v10，两阶段管线）
├── midi2mmf.c           — 源码
├── CnvMA3SMF.dll        — SMF→处理后SMF（Stage 1）
├── CnvMA3SMAF_SC.DLL    — SMF→MMF（Stage 2）
├── SsdDefMA3_16.vm3     — Standard 风格音色库
└── ghidra_output_*/     — 各 DLL 的 Ghidra 反编译输出
```

**转换管线：**
```
MIDI (.mid) → CnvMA3SMF.dll::CnvTo (ordinal 2) → 处理后 SMF
           → CnvMA3SMAF_SC.dll::CnvTo (ordinal 3) → MMF (MMMD格式)
```

**使用：**
```bash
./midi2mmf.exe input.mid output.mmf
```

**已验证：** 输出 MMMD 格式 MMF 文件，可正常播放，Standard 风格音色。

### 3. SMAF/MMF 纯 C 播放库（开发中）

目标平台 RP2350 的纯软件 FM 合成播放库。

```
src/
├── smaf.c          — 主入口
├── parser/chunk.c  — SMAF chunk 解析器
├── sequencer/seq.c — 事件排序器
├── synth/          — FM 合成器（fm_synth, eg, mixer, adpcm, noise）
└── audio/audio_mock.c — 音频输出抽象层
```

### 4. 逆向工程研究成果

完整的 Yamaha SMAF 技术栈逆向分析，覆盖 MA-3/5/7 引擎和转换工具链。

**反编译统计：**

| 目标 | 平台 | 函数数 | 反编译输出 |
|------|------|--------|-----------|
| MA-7 引擎 (.so) | ARM64 | 1454 | 1215 .c 文件 |
| MA-7 引擎 (.so) | ARM32 | 1473 | 1209 .c 文件 |
| SSD.exe + 7个DLL | x86 PE | 4590 | `tools/yamaha_converter/ghidra_output_*/` |

**DLL 调用链（SSD.exe MIDI→MMF 转换）：**
```
SSD.exe → SSD.dll → Ssd_sscma3.dll → CnvMA3SMF.dll → CnvMA3SMAF_SC.dll
                                    → SsdDefMA3_16.vm3 (音色库)
                                    → DVAchecker.dll (仅检查)
                                    → Ssd_Parser.dll (vtable未初始化，不可用)
```

**关键文档：**
- [docs/GHIDRA_PE_ANALYSIS.md](docs/GHIDRA_PE_ANALYSIS.md) — SSD.exe 及全部 DLL 的逆向分析记录
- [docs/MA7_CORE_ANALYSIS.md](docs/MA7_CORE_ANALYSIS.md) — MA-7 引擎核心架构分析
- [docs/SMAF_INVESTIGATION.md](docs/SMAF_INVESTIGATION.md) — SMAF 格式逆向调查总报告
- [docs/README.md](docs/README.md) — 全部研究文档索引

## 项目结构

```
libsmaf/
├── src/                        — 纯 C 播放库源码（RP2350 目标）
├── test/                       — 测试程序
├── tools/
│   ├── ma7player/              — MMF 播放器（32/64位）
│   └── yamaha_converter/       — MIDI→MMF 转换器 + 逆向分析
├── docs/                       — 研究文档
├── third_party/                — 第三方库
├── ringtones/                  — 测试铃声文件
└── build/                      — 构建输出
```

## 许可声明

本项目代码仅供教育和研究用途。Yamaha MA DLLs 为专有软件，需要适当授权。
