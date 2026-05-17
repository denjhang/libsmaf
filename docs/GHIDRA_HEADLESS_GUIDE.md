# Ghidra Headless 反编译调试记录

目标：对 Yamaha MA-7 引擎 (libM7_EmuSmw7.so) 进行批量反编译导出伪 C 代码。

## 环境配置

| 项目 | 版本/路径 |
|------|----------|
| Ghidra | 12.1 PUBLIC (20260513) |
| Java | Eclipse Temurin JDK 26.0.1.8 |
| Ghidra 安装路径 | `D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC` |
| 目标文件 | libM7_EmuSmw7.so (ARM64 4.5MB, ARM32 4.0MB) |
| Ghidra 项目目录 | `C:\Users\denjhang\AppData\Local\Temp\ghidra_projects` |

## 踩坑记录

### 1. Python 脚本不可用

**错误**: `Ghidra was not started with PyGhidra. Python is not available`

**原因**: Ghidra headless 模式默认只支持 Java 脚本，Python 脚本需要 PyGhidra 启动。

**解决**: 改用 Java 编写脚本 (`ExportDecompiled.java`)。

### 2. MSYS2 Bash 路径含空格

**错误**: `'D:\Program' 不是内部或外部命令`

**原因**: MSYS2 bash 直接调用含空格路径的 .bat 文件时路径解析失败。

**解决**: 通过 Windows `cmd.exe //c` 调用 bat 文件，bat 文件内部所有路径用双引号包裹。

### 3. OSGi Bundle 找不到脚本类

**错误**: `The class could not be found. It must be the public class of the .java file: Failed to get OSGi bundle containing script`

**原因**: Ghidra 12 使用 Apache Felix OSGi 框架，Java 脚本必须放在正确的 Feature 脚本目录中才能被 classloader 发现。用户脚本目录 (`AppData\Roaming\ghidra\...\scripts`) 和任意 `-scriptPath` 指定的外部目录都不能被 OSGi 编译加载。

**解决**: 将脚本放在 Ghidra 内置 Feature 的脚本目录中：
```
D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC\
  Ghidra\Features\Decompiler\ghidra_scripts\ExportDecompiled.java
```

### 4. 脚本编译错误 — API 类型不兼容

**错误**: 
- `cannot find symbol: class FunctionManager`
- `incompatible types: AddressIterator cannot be converted to long[]`

**原因**: Ghidra API 中 `FunctionManager` 的完整路径和 `getExternalEntryPointIterator()` 返回类型需要用正确类型。

**解决**: 
- `FunctionManager` → `Listing` (通过 `currentProgram.getListing().getFunctionAt(addr)`)
- `long[]` → `AddressIterator` (迭代获取 `Address` 对象)

### 5. Lambda 表达式语法错误

**错误**: `')' or ',' expected` 在 lambda 表达式处

**原因**: Ghidra 12 的 OSGi 内置 Java 编译器可能使用 Java 7 源码级别，不支持 lambda 表达式。

**解决**: 将所有 lambda 改为匿名内部类：
```java
// 不行
exports.sort((a, b) -> a.getName().compareTo(b.getName()));
// 行
Collections.sort(exports, new Comparator<Function>() {
    public int compare(Function a, Function b) {
        return a.getName().compareTo(b.getName());
    }
});
```

### 6. -process 参数文件名格式

**错误**: `invalid filename specified`

**原因**: `-process` 参数不能带前导 `/`，必须使用 Ghidra 项目内的文件名。

**解决**: `-process "libM7_EmuSmw7.so"` 而非 `-process "/libM7_EmuSmw7.so"`

## 最终工作流程

### 第一步：自动分析（只需跑一次，~10分钟）

```bat
set "JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-26.0.1.8-hotspot"
set "PATH=%JAVA_HOME%\bin;%PATH%"
set "GHIDRA_HOME=D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC"
set "PROJECT_DIR=C:\Users\denjhang\AppData\Local\Temp\ghidra_projects"

"%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" ma7_arm64 -import "libM7_EmuSmw7.so"
```

### 第二步：脚本导出（复用分析结果，几秒~几分钟）

```bat
set "GHIDRA_EXPORT_DIR=D:\output\directory"
"%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" ma7_arm64 -process "libM7_EmuSmw7.so" -noanalysis -postScript ExportDecompiled.java -scriptPath "%GHIDRA_HOME%\Ghidra\Features\Decompiler\ghidra_scripts"
```

关键参数：
- `-import` — 首次导入+分析（耗时）
- `-process` — 复用已有项目（快速）
- `-noanalysis` — 跳过分析阶段（复用时必须加）
- `-postScript` — 分析后执行的脚本
- `-scriptPath` — 必须指向 Ghidra 内置 Feature 脚本目录
- `GHIDRA_EXPORT_DIR` — 环境变量，指定输出目录

### 第三步：修改脚本后需要清理 Ghidra 缓存

如果修改了 `ExportDecompiled.java`，需要删除 OSGi 编译缓存：
```
C:\Users\denjhang\AppData\Roaming\ghidra\ghidra_12.1_PUBLIC\compiled_scripts\
```

## 反编译结果

### ARM64 (libM7_EmuSmw7.so, 4.5MB)

| 指标 | 数值 |
|------|------|
| 导出函数总数 | 1454 |
| 成功反编译 | 1442 |
| C++ mangled 跳过 | 12 |
| 错误 | 0 |
| 输出文件数 | 1215 |
| 分析耗时 | ~600s |

### 关键函数

| 函数 | 说明 |
|------|------|
| `Mapi_EmuGenerate` | 调用 `CM7_EmuSmw7App::EmuGenerateApi` |
| `FMCONTROL_Generate` | 调用 `CFmSynth::Generate` |
| `CFmSynth::CFmSynth` | 构造函数，设置采样率频率表 |
| `Java_com_yamaha_..._init` | JNI init → `CSmwCtrl::Init` |
| `Java_com_yamaha_..._start` | JNI start → 加载+播放 |
| `Java_com_yamaha_..._getGenerateData` | JNI 获取 PCM 数据 |
| `CalcAlg0~7` | FM 合成 8 种算法 |
| `lset_pitch/lset_lfo/lset_flt` | 运算器参数设置 |
| `Hw_Generate` | 硬件仿真生成一帧 |
| `MaSound_*` | MA-3 兼容接口 (18个) |
| `Mapi_*` | MA-7 原生接口 (97个) |

## 脚本文件位置

| 文件 | 路径 |
|------|------|
| ExportDecompiled.java (运行用) | `Ghidra\Features\Decompiler\ghidra_scripts\` |
| ExportDecompiledFunctions.java (废弃) | `libsmaf/` |
| ghidra_export_headless.py (废弃) | `libsmaf/` |
| run_ghidra_export.bat | `libsmaf/` |

## SSD.exe 逆向分析

### 目标
逆向 Yamaha SSD.exe（MA Decorator 的 MIDI→MMF 转换工具），提取 CnvTo 函数的调用约定。

### 关键发现

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

### 反编译统计

| 指标 | 数值 |
|------|------|
| 导出函数总数 | 1543 |
| 成功反编译 | 1543 |
| 跳过（thunk/小函数） | 1036 |
| 错误 | 0 |
| 分析耗时 | ~120s |

### 相关文件

| 文件 | 路径 |
|------|------|
| SSD.exe（复制自安装目录） | `tools/yamaha_converter/SSD.exe` |
| 全部反编译代码 | `tools/yamaha_converter/ghidra_output/all_decompiled.c` |
| DLL加载函数分析 | `tools/yamaha_converter/ghidra_output/cnvto_usage_analysis.txt` |
| 分析批处理 | `tools/yamaha_converter/run_import_export.bat` |
| 导出批处理 | `tools/yamaha_converter/export_ssd.bat` |

### Ghidra OSGi 脚本编译注意事项

1. **-import 模式**会触发 OSGi 编译新脚本，**-process -noanalysis 模式不会**
2. 修改脚本后必须删除 `osgi/compiled-bundles/fd69aa21/` 中对应的 .class 文件
3. 不能删除整个 `osgi/compiled-bundles/` 目录，否则 Ghidra 核心 bundle 会丢失
4. 使用 `-import` 而非 `-process` 来运行修改过的脚本（即重新导入）
