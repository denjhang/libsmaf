# libsmaf 研究资料汇总

本目录是 libsmaf 项目的全部研究成果，目标是为 RP2350 嵌入式平台开发纯软件 SMAF/MMF 播放库。

## 目录结构

```
libsmaf/
├── docs/                           ← 研究文档（本目录）
│   ├── README.md                   ← 你正在看的索引
│   ├── FMFM_MA5_ANALYSIS.md        ← fmfm.core MA-5 FM 合成完整性分析
│   ├── SMAF_LIBRARIES_ANALYSIS.md  ← 三大开源 SMAF 库对比（含 ADPCM）
│   ├── SMAF_INVESTIGATION.md       ← SMAF 格式逆向调查总报告
│   ├── LIBSMAF_PHASE1_DESIGN.md    ← libsmaf 第一阶段设计文档
│   ├── BridgeFrontendDocs.md       ← 桥接前端设计文档
│   ├── IdeaSupport.md              ← 创意支持功能文档
│   ├── YAMAHA_DLLS_ANALYSIS.md     ← Yamaha 原版 DLL/SO 导出函数分析
│   ├── MA7_CORE_ANALYSIS.md        ← MA-7 引擎核心架构分析（Ghidra 反编译）
│   ├── GHIDRA_HEADLESS_GUIDE.md    ← Ghidra headless 批量反编译调试记录
│   ├── ghidra_ma7_arm64/           ← 1215 个反编译 .c 文件（ARM64）
│   ├── ghidra_ma7_arm32/           ← 1209 个反编译 .c 文件（ARM32）
│   └── apk_decompiled/             ← jadx 反编译的 Android Java 源码
├── ma3-windows-x86/                ← MA-3 (YMU762) 引擎
├── ma5-windows-x86/                ← MA-5 (YMU765) 引擎
├── ma7-windows-x86/                ← MA-7 引擎（MCP-MA7 官方工具）
├── ma7-android-arm64/              ← MA-7 引擎（Android APK 提取）
├── ma7-android-arm32/              ← MA-7 引擎（Android APK 提取）
└── mmfs/                           ← 31 个 MMF 测试文件
```

## 原版 Yamaha 引擎文件

### MA-3 (YMU762) — ma3-windows-x86/

| 文件 | 大小 | 来源 |
|------|------|------|
| ma3smwemu.dll | 708K | KEmulator 内置 |

- 32 位 Windows PE，单文件包含合成+硬件仿真
- 导出 42 个函数：16 MaSound + 26 Phrase + 工具函数
- 自带音频输出（DirectSound），调用方无需拉取缓冲区

### MA-5 (YMU765) — ma5-windows-x86/

| 文件 | 大小 | 来源 |
|------|------|------|
| M5_EmuSmw5.dll | 2.0M | SMAF_newer_DLLs |
| M5_EmuHw.dll | 1.1M | SMAF_newer_DLLs |
| SMAFMMS5EMU.dll | 2.3M | SMAF_newer_DLLs |
| Smaf.dll | 132K | SMAF_newer_DLLs/Addins |

- Smw5 = 合成引擎，Hw = 硬件仿真（分离式架构）
- 比 MA-3 新增：MaSound_EmuInitialize, MaSound_EmuTerminate, MaSound_Generate 等仿真接口
- 26 个导出函数（含 Phrase_* 系列）

### MA-7 — ma7-windows-x86/

| 文件 | 大小 | 来源 |
|------|------|------|
| M7_EmuSmw7.dll | 9.4M | MCP-MA7 官方工具 |
| M7_EmuHw.dll | 2.2M | MCP-MA7 官方工具 |
| SMAFMMS7EMU.dll | 600K | MCP-MA7 官方工具 |
| EMOJIMGR.dll | 2.5M | MCP-MA7 官方工具 |
| MCP-MA7.exe | 636K | MCP-MA7 官方工具 |

- 9.4MB 的 Smw7 比 Android 版 (4.5MB) 大一倍，包含更完整的调试代码
- 129 个导出函数，三套兼容接口：MaSound_*(18) + MaSmw_*(14) + Mapi_*(97)
- Mapi_ 系列是 MA-7 原生接口，包含 Melody/Stm/Hvs/Rec/Din/Dtmf 等子通道

### MA-7 — ma7-android-arm64/ & ma7-android-arm32/

| 文件 | 大小 |
|------|------|
| libM7_EmuSmw7.so | 4.5M / 4.0M |
| libacdrm.so | 50K / 66K |

- 来自 Yamaha 官方铃声 APP (jp.co.ymm.android.ringtone 1.8.19)
- Smw+Hw 合并为单一 .so，无需额外硬件仿真库
- 导出 148 个函数 + JNI 接口 (com.yamaha.smafsynth.m7.emu.EmuSmw7)
- 内置 26 个 MMF 测试铃声（GM2/GM5/GM6/GM7/AU 格式）

## 文档阅读顺序

1. **SMAF_INVESTIGATION.md** — SMAF 格式整体逆向调查，了解全貌
2. **YAMAHA_DLLS_ANALYSIS.md** — 原版 DLL 导出函数对照表，做 smafplay 必读
3. **MA7_CORE_ANALYSIS.md** — MA-7 引擎三大核心子系统深度分析（Ghidra 伪代码解读）
4. **SMAF_LIBRARIES_ANALYSIS.md** — 开源库对比，特别是 Yamaha ADPCM 算法
5. **FMFM_MA5_ANALYSIS.md** — fmfm.core 的 MA-5 FM 参数完整性评估
6. **LIBSMAF_PHASE1_DESIGN.md** — 第一阶段设计方案（待更新 fmfm.core）
7. **GHIDRA_HEADLESS_GUIDE.md** — 下次需要重新跑 Ghidra 时的参考

## 关键发现

- **MA-7 向下兼容**：M7_EmuSmw7.dll 同时导出 MaSound_*(MA-3) 和 MaSmw_*(MA-5) 接口
- **ADPCM 算法**：vavi-sound (BSD) 的 Yamaha.java 是最佳移植参考，129 行纯算法
- **FM 合成**：fmfm.core 覆盖 MA-5 的 ~90% 核心参数，适合作为纯软件合成基础
- **DLL 音频模型**：DLL 内部输出音频到系统设备，调用方不需要 DirectSound 拉缓冲区
- **调用优先级**：MA-7 > MA-5 > MA-3（与 KEmulator MMFPlayer.java 一致）

## 工具需求（已安装）

- **jadx 1.5.5** — 反编译 classes.dex（Java 层 JNI 接口）✓
- **Ghidra 12.1 PUBLIC** — 反编译 .so/.dll（C 层合成算法）✓
- **Eclipse Temurin JDK 26** — jadx + Ghidra 运行时 ✓
- **Ghidra headless** — 批量反编译脚本 ExportDecompiled.java ✓

## 反编译成果

| 平台 | 导出函数 | 成功反编译 | 输出文件 |
|------|----------|-----------|----------|
| ARM64 | 1454 | 1442 | 1215 .c |
| ARM32 | 1473 | 1436 | 1209 .c |
