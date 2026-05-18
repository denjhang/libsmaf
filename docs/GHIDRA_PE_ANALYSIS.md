# Ghidra Headless PE 分析记录

目标：对 Yamaha SSD.exe（MA Decorator 的 MIDI→MMF 转换工具）进行反编译，提取 CnvTo 函数调用约定。

## 踩坑记录

### 1. 项目冲突导致导入失败

**错误**: `Found conflicting program file in project: /SSD.exe`

**原因**: Ghidra 项目中已存在同名程序文件，再次 `-import` 会冲突。

**解决**: 删除项目目录中的 `.rep` 和 `.gpr` 文件再重新导入。注意 `rd /s /q` 在 bash 中可能因权限问题失败，改用 `rm -rf`。

### 2. -process -noanalysis 模式不编译新脚本

**错误**: `Failed to get OSGi bundle containing script`

**原因**: Ghidra 12 的 OSGi 只在 `-import`（首次导入+分析）阶段触发脚本编译。使用 `-process -noanalysis` 复用已有项目时，OSGi 不会重新编译脚本目录中新增或修改的 .java 文件。

**解决**: 每次修改脚本后，必须用 `-import` 重新导入（会重新分析，约 120 秒），而非 `-process`。

### 3. 删除整个 osgi/compiled-bundles 导致 Ghidra 崩溃

**错误**: 所有脚本都无法加载，包括之前能正常工作的脚本

**原因**: `osgi/compiled-bundles/fd69aa21/` 不仅包含用户脚本的编译结果，还包含 Ghidra 核心 Feature bundle 的编译类。全部删除后 Ghidra 自身功能受损。

**解决**: 只删除 `fd69aa21/` 中用户脚本的 .class 文件，不删除整个目录。

### 4. 其他脚本编译错误阻塞新脚本

**错误**: ExportROMData.java 编译错误（非目标脚本）阻止整个 bundle 编译

**原因**: OSGi bundle 是按 Feature 目录整体编译的。同一个目录下有一个 .java 文件编译失败，整个 bundle 的脚本都无法加载。

**解决**: 删除或修复目录中所有有编译错误的脚本文件。

### 5. bash 中 set + cmd.exe 的引号转义问题

**错误**: `'\"...' is not recognized as an internal or external command`

**原因**: MSYS2 bash 环境中 `set "VAR=value" && command` 的引号转义与 Windows cmd 不兼容。多个 `&&` 连接的 set 命令在 bash 下经常失败。

**解决**: 使用 `.bat` 批处理文件来封装所有 Windows 命令，从 bash 中用 `cmd.exe //c "full_path.bat"` 调用。

### 6. getCalledFunctions() 返回类型变化

**错误**: `incompatible types: java.util.Set<Function> cannot be converted to FunctionIterator`

**原因**: Ghidra 12.1 API 中 `Function.getCalledFunctions()` 返回 `Set<Function>`，不是 `FunctionIterator`。

**解决**: 用 `java.util.Set<Function>` 接收返回值，用 for-each 遍历。

### 7. AI 模型切换导致脚本质量下降

**现象**: Claude Opus 4.7（之前）写的脚本一次编译通过，切换到 GLM-5-Turbo 后同一模式的脚本反复出现 API 错误、导入缺失、引号转义等问题。

**原因**: 不同模型对 Ghidra 12.1 API 的熟悉程度不同。Opus 4.7 更准确地使用了 Ghidra API，GLM-5-Turbo 在 API 细节上出错率更高，需要更多试错。

**经验**: 对 Ghidra 脚本编写这类需要精确 API 调用的任务，使用对 Ghidra API 更熟悉的模型效果更好。切换模型后应先用简单脚本验证 API 调用方式。

## 最终工作流程

### 导入 + 脚本执行（一次性完成）

```bat
set "JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-26.0.1.8-hotspot"
set "PATH=%JAVA_HOME%\bin;%PATH%"
set "GHIDRA_HOME=D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC"
set "PROJECT_DIR=C:\Users\denjhang\AppData\Local\Temp\ghidra_projects"
set "GHIDRA_EXPORT_DIR=D:\output\directory"

REM 必须删除旧项目避免冲突
rd /s /q "%PROJECT_DIR%\my_project" 2>nul

REM 用 -import 而非 -process，确保脚本被编译
"%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" my_project ^
  -import "target.exe" ^
  -postScript MyScript -scriptPath "%GHIDRA_HOME%\Ghidra\Features\Decompiler\ghidra_scripts"
```

关键要点：
- 修改脚本后必须用 `-import` 重新导入，`-process -noanalysis` 不会触发编译
- 每次导入前删除旧项目目录（或换项目名）避免冲突
- 同一 Feature 目录下不能有编译错误的脚本
- 用 .bat 文件封装命令，从 bash 用 `cmd.exe //c` 调用

## 反编译结果

### SSD.exe (x86 PE, ~5MB)

| 指标 | 数值 |
|------|------|
| 总函数数 | 2579 |
| 成功反编译 | 1543 |
| 跳过（thunk/小函数） | 1036 |
| 错误 | 0 |
| 分析耗时 | ~120s |

## 关键发现

SSD.exe **不直接调用** CnvMA3SMF.dll 等转换 DLL，而是加载 **SSD.dll**，通过函数指针调用内部 API：

```c
// FUN_0041b640 — DLL 加载函数
LoadLibraryA(*(param_1 + 8));                        // 加载 SSD.dll
GetProcAddress(hModule, "Ssd_SmfFmt10Cnv");           // +0x110: MIDI→SMAF 转换
GetProcAddress(hModule, "Ssd_SmfParse_Rsrc");           // +0x114: SMF资源解析
GetProcAddress(hModule, "Ssd_SmfParse");                // +0x118: SMF解析
GetProcAddress(hModule, "Ssd_VoiceCtrl");               // +0x11C: 音色控制
GetProcAddress(hModule, "Ssd_SscCnv_Rsrc");             // +0x120: SSC转换(资源)
GetProcAddress(hModule, "Ssd_SscCnv");                  // +0x124: SSC→SMAF 转换
GetProcAddress(hModule, "Ssd_SmafPlay_Rsrc");           // +0x128: SMAF播放(资源)
GetProcAddress(hModule, "Ssd_SmafPlay");                // +0x12C: SMAF播放
```

### Ssd_SmfFmt10Cnv 调用约定（MIDI→SMAF）

来自 `FUN_0041b7e0`（地址 0x0041b7e0, 203B）：

```c
int Ssd_SmfFmt10Cnv(
    void* midi_data,      // 输入 MIDI 数据指针
    int   midi_size,      // 输入 MIDI 数据大小
    void* output_buf,     // 输出缓冲区指针
    int   output_size,    // 输出缓冲区大小
    void* config          // 配置结构体指针（240字节，初始全零）
);
// 返回值: >=0 成功(输出大小), -1 内存不足, -18 参数错误
```

### Ssd_SscCnv 调用约定（SSC→SMAF）

来自反编译代码（偏移+0x124 处调用）：

```c
int Ssd_SscCnv(
    void* input_data,    // 输入数据指针
    int   input_size,    // 输入数据大小
    void* config,        // 配置结构体指针
    int   format_flags   // 格式标志: 0x2002=MA-2, 0x3002=MA-3, 0x5000=MA-5
);
```

### 配置结构体布局（param_1）

| 偏移 | 大小 | 内容 |
|------|------|------|
| +0x04 | 4 | HMODULE（DLL 句柄） |
| +0x08 | 4 | DLL 路径指针 |
| +0x10C | 4 | 音色数据指针 |
| +0x110 | 4 | Ssd_SmfFmt10Cnv 函数指针 |
| +0x114 | 4 | Ssd_SmfParse_Rsrc 函数指针 |
| +0x118 | 4 | Ssd_SmfParse 函数指针 |
| +0x11C | 4 | Ssd_VoiceCtrl 函数指针 |
| +0x120 | 4 | Ssd_SscCnv_Rsrc 函数指针 |
| +0x124 | 4 | Ssd_SscCnv 函数指针 |
| +0x128 | 4 | Ssd_SmafPlay_Rsrc 函数指针 |
| +0x12C | 4 | Ssd_SmafPlay 函数指针 |

## DLL 反编译进展

### 已反编译的 DLL

| DLL | 函数数 | 跳过 | 错误 | 输出文件 |
|-----|--------|------|------|----------|
| SSD.dll | 454 | 160 | 0 | `ghidra_output_ssddll/all_decompiled.c` |
| Fc10.dll | 201 | 60 | 0 | `ghidra_output_fc10/all_decompiled.c` |
| SSD.exe | 1543 | 1036 | 0 | `ghidra_output/all_decompiled.c` |

### DLL 调用链发现

通过 Ghidra 反编译 SSD.dll，发现完整的 DLL 调用链：

```
SSD.exe
  └─ SSD.dll
       ├─ Ssd_SmfFmt10Cnv → Fc10.dll::ConvertSMF1ToSMF0  (SMF1→SMF0 格式转换)
       ├─ Ssd_SmfParse_Rsrc → Ssd_Parser.dll::Ssd_SmfParse_Rsrc
       ├─ Ssd_SmfParse → Ssd_Parser.dll::Ssd_SmfParse
       ├─ Ssd_VoiceCtrl → Ssd_VoiceCtrl.dll
       ├─ Ssd_SscCnv → Ssd_sscma{2,3,5}.dll::SscCnv  (SSC→SMAF 核心转换)
       ├─ Ssd_SscCnv_Rsrc → Ssd_sscma{2,3,5}.dll::Ssd_SscCnv_Rsrc
       ├─ Ssd_SmafPlay → Ssd_Parser.dll
       └─ Ssd_SmafPlay_Rsrc → Ssd_Parser.dll
```

**关键发现：`Ssd_SmfFmt10Cnv` 只是 MIDI 格式转换（SMF1→SMF0），不是 MIDI→SMAF！**
真正的 MIDI→SMAF 转换走的是 `Ssd_SscCnv` 路径，由 `Ssd_sscma3.dll`（MA-3）等 DLL 实现。

### Fc10.dll::ConvertSMF1ToSMF0（已验证）

```c
// __cdecl 调用约定
int ConvertSMF1ToSMF0(
    char* midi_data,      // 输入 MIDI SMF1 数据
    int   midi_size,      // 输入数据大小
    void* output_buf,     // 输出缓冲区（SMF0 格式）
    uint  output_size     // 输出缓冲区大小
);
// 返回值: >=0 成功(输出字节数), -1 内部错误, -2 无效格式,
//         -3 未知, -4 未知, -5 参数无效, -6 缓冲区不足
```

**注意**: SSD.dll 在运行时通过 `LoadLibraryA("Fc10.dll")` 动态加载 Fc10.dll，
所以调用 SSD.dll 前，Fc10.dll 必须在 DLL 搜索路径中（同目录或系统目录）。

### Ssd_SmfFmt10Cnv 完整签名（已修正）

```c
// __cdecl，不是 __stdcall！
void __cdecl Ssd_SmfFmt10Cnv(
    void* midi_data,      // 输入 MIDI 数据
    int   midi_size,      // 输入大小
    void* output_buf,     // 输出缓冲区
    int   output_size,    // 输出缓冲区大小
    uint32_t* error_code  // [out] 错误详情
);
// 内部调用 Fc10.dll::ConvertSMF1ToSMF0，映射返回值：
//   -6 → 0xFFFFFFFE (-2, 缓冲区不足)
//   -5 → 0xFFFFFFFD (-3, 写 error_code=0xf1000002)
//   -4 → 0xFFFFFFFC (-4, 写 error_code=0xf1000004)
//   -1 → 0xFFFFFFFF (Fc10.dll 加载失败)
```

### CnvMA3SMF.dll::CnvTo（未解决）

从反汇编发现 CnvTo 不是简单的 `CnvTo(input_path, output_path, config)` 签名。
arg1 被当作结构体指针，其中 `+4` = 数据指针, `+8` = 数据大小。
函数验证 "MThd" magic，说明 arg1 是一个包含 MIDI 文件内存数据的描述符。
需要进一步反编译 CnvMA3SMF.dll 来确认完整签名。

### Ssd_sscma3.dll（待反编译）

核心 MIDI→SMAF 转换 DLL，导出：
- `SscCnv` @ RVA 0x6050
- `Ssd_SscCnv` @ RVA 0x7e60
- `Ssd_SscCnv_Rsrc` @ RVA 0x7e30

## 相关文件

| 文件 | 路径 |
|------|------|
| SSD.exe（复制自安装目录） | `tools/yamaha_converter/SSD.exe` |
| SSD.exe 反编译代码 | `tools/yamaha_converter/ghidra_output/all_decompiled.c` |
| SSD.dll 反编译代码 | `tools/yamaha_converter/ghidra_output_ssddll/all_decompiled.c` |
| Fc10.dll 反编译代码 | `tools/yamaha_converter/ghidra_output_fc10/all_decompiled.c` |
| DLL加载函数分析 | `tools/yamaha_converter/ghidra_output/cnvto_usage_analysis.txt` |
| DLL 文件副本 | `tools/yamaha_converter/ghidra_dlls/` |
| 导入+导出批处理 | `tools/yamaha_converter/run_import_export.bat` |
| midi2mmf 测试程序 | `tools/yamaha_converter/midi2mmf.c` |

## 另见

### Android SO 文件分析

Android 版本（libM7_EmuSmw7.so 等）的分析记录见 [GHIDRA_HEADLESS_GUIDE.md](GHIDRA_HEADLESS_GUIDE.md)。PE 分析与 SO 分析的主要区别：
- PE 文件使用 `-import` + `-postScript`，SO 文件同样适用
- PE 文件有 `ExternalEntryPointIterator`（导出表），SO 文件使用 `getExternalEntryPointIterator` 或遍历所有函数
- PE 文件的 DLL 加载分析需要关注 `LoadLibraryA`/`GetProcAddress` 调用链
