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

### Ssd_SscCnv 调用约定（SSC→SMAF）— 已修正

**重要修正：param_3 是错误码输出指针，不是数据缓冲区！**

来自 sscma3.dll 反编译 `Ssd_SscCnv @ 0x10007e60`：
```c
void Ssd_SscCnv(
    void*  smf_data,      // param_1: SMF 数据指针（实际读取 this+0xc0）
    size_t smf_size,       // param_2: SMF 数据大小（实际读取 this+0xc4）
    uint32_t* error_ptr,  // param_3: 错误码输出指针（写入具体错误码）
    uint32_t format_flags // param_4: 格式标志 (0x2002=MA-2, 0x3002=MA-3, 0x5000=MA-5)
);
// 返回值: 成功时 ≥0, 失败时 -1 或 -2
// 错误码写入 *error_ptr, 不是写入数据缓冲区
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
| Ssd_sscma3.dll | 664 | — | 0 | `ghidra_output_sscma3/all_decompiled.c` |
| SSD.exe | 1543 | 1036 | 0 | `ghidra_output/all_decompiled.c` |

### DLL 调用链发现

通过 Ghidra 反编译 SSD.dll，发现完整的 DLL 调用链：

```
SSD.exe 完整转换流程:
  1. Ssd_SmfFmt10Cnv → Fc10.dll::ConvertSMF1ToSMF0  (SMF1→SMF0)
  2. Ssd_SmfParse_Rsrc → Ssd_Parser.dll  (解析 SMF，生成语音信息和流配置)
  3. Ssd_SmfParse → Ssd_Parser.dll  (额外解析)
  4. Ssd_VoiceCtrl → Ssd_VoiceCtrl.dll  (语音控制)
  5. Ssd_SscCnv_Rsrc → Ssd_sscma{N}.dll  (资源初始化，写入 SSC)
  6. Ssd_SscCnv → Ssd_sscma{N}.dll::SscCnv  (最终转换)
       ├─ 动态加载 CnvMA{N}SMF.dll  (ID=7)
       └─ 动态加载 CnvMA{N}SMAF_SC.dll  (ID=8)

SSD.dll 函数路由:
  Ssd_SscCnv(format_flags) → (byte[1]>>4) 选择 Ssd_sscma{2,3,5}.dll
  Ssd_SscCnv_Rsrc → 转发到对应 Ssd_sscma{N}.dll
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
该 DLL 由 Ssd_sscma3.dll 在转换过程中动态加载（ID=7）。

### Ssd_sscma3.dll（已反编译，664 函数）

核心 SSC→SMAF 转换 DLL。关键发现：

#### 导出函数

| 导出名 | 内部函数 | RVA | 大小 | 说明 |
|--------|---------|-----|------|------|
| `SscCnv` | FUN_10006080 | 0x6050 | 5835B | 底层转换函数 |
| `Ssd_SscCnv` | FUN_10007f10 | 0x7e60 | — | SSD 集成封装 |
| `Ssd_SscCnv_Rsrc` | FUN_10007e80 | 0x7e30 | — | 资源初始化 |

#### DLL 内部加载机制（FUN_10001d20）

Ssd_sscma3.dll 通过整数 ID 动态加载子 DLL：

| ID | DLL 文件名 | 用途 |
|----|-----------|------|
| 0 | CnvMA1SMF.dll | MA-1 SMF 转换 |
| 7 | CnvMA3SMF.dll | MA-3 SMF 转换 |
| 8 | CnvMA3SMAF_SC.dll | MA-3 SMAF SC 转换 |
| — | CnvMA5SMF.dll | MA-5 SMF 转换 |

FUN_10001c90(n) 通过 LoadLibraryA 加载对应 DLL，失败时返回错误码：
- 0x31000004 = FUN_10001c90(7) 失败（CnvMA3SMF.dll 未找到）
- 0x31000006 = FUN_10001c90(8) 失败（CnvMA3SMAF_SC.dll 未找到）

#### Ssd_SscCnv_Rsrc 参数存储（FUN_10007e80）

| 参数 | 存储偏移 | 说明 |
|------|---------|------|
| param_1 | this + 0xC0 | 输入数据指针（已解析的 MML） |
| param_2 | this + 0xC4 | 输入数据大小 |
| param_3 | this + 0xC8 | 语音流配置数据（66 字节） |
| param_4 | this + 0xCC | SMAF 资源配置头（844 字节） |
| param_5 | this + 0xD0 | 输出缓冲区（1672 字节，SSC 数据） |
| param_6 | this + 0xD4 | 附加参数 |

#### Ssd_SscCnv 格式标志验证（FUN_10007f10）

Ssd_SscCnv 对 `param_4`（format_flags）和 `this+0xD0` 缓冲区进行验证：

**format_flags 验证：**
```c
if ((param_4 & 0xFF00) != 0x3000) return 0xF1F00002;  // MA-3 必须为 0x30xx
```

**this+0xD0 字符串指针验证（param_5 来自 Rsrc）：**

**重要修正：this+0xD0 存储的是一个字符串指针，不是数据缓冲区！**

```c
pcVar13 = *(char **)((int)this + 0xD0);   // 解引用得到字符串
if (*pcVar13 != '\0')                     // byte[0] 必须为 '\0'
    return 0xF1F00000;
if ((2 < pcVar13[1]) && (pcVar13[1] != 0x23)) || (pcVar13[2] < 0xF8))
    return 0xF1F00000;
```

param_5 在 SSD.exe 中是 `main_obj + 0x50C4`（1672 字节缓冲区）。
byte[0]=0 通过，byte[1]<=2 或 0x23 通过，byte[2]>=0xF8 通过。
如果 0x50C4 全零，byte[2]=0 不满足 >=0xF8——但 SSD.exe 能工作，
说明 0x50C4 在调用前被修改了，或验证路径不同。

### Ssd_SscCnv 输出到文件（非内存）

**关键发现：sscma3.dll 的 FUN_10007f10（Ssd_SscCnv）将 SMAF 数据写入文件，
不是直接写内存缓冲区！**

```c
// FUN_10007f10 中的关键代码（简化）：
local_2f8 = (int *)*piVar7;           // 从全局对象获取临时文件路径
HVar8 = OpenFile((LPCSTR)local_2f8, ...); // 打开文件写入
// ... SMAF 数据写入 local_2f8 指定的文件 ...
```

临时文件路径来自 `FUN_1001b31e()` 返回的全局对象：
```c
iVar6 = FUN_1001b31e();
FUN_10014fe5(&local_2fc, *(LPCSTR *)(*(int *)(iVar6 + 4) + 0x8c));
```

这意味着：
1. Ssd_SscCnv 的第 3 个参数（param_3）是**错误码/状态指针**，不是输出缓冲区
2. SMAF 输出写入了 sscma3.dll 内部管理的临时文件
3. 临时文件路径由 sscma3.dll 的全局对象决定，不受调用者控制
4. 调用者需要从 sscma3.dll 获取输出文件路径（或预设）

### Ssd_Parser.dll 分析（357 函数，已反编译）

| 导出名 | RVA | 大小 | 签名 |
|--------|-----|------|------|
| Ssd_SmfParse_Rsrc | 0x4760 | 132B | (smf_data, smf_size, channel_buf, score_buf, ext_buf) → 0 |
| Ssd_SmfParse | 0x47f0 | 81B | (format_flags, err_buf) → 解析结果大小或错误 |

**Ssd_SmfParse_Rsrc 只是存储数据到全局对象，不做解析。**
- FUN_10001950: 分配内部缓冲区（this+0x18=数据副本, this+0x30=输出缓冲区）
- FUN_100019a0: 复制 SMF 数据到内部缓冲区
- FUN_100019d0: 存储 3 个缓冲区指针到 this+0x20/0x24/0x28

**Ssd_SmfParse 执行实际解析，但使用虚函数表调用：**
- FUN_100022d0: 设置 MA 版本标志 this+0x5a = format_flags >> 8
- FUN_100022f0: 初始化通道映射数组
- FUN_10002320: 根据 MA 版本复制数据或加载 sscma2.dll 的 filter
- 虚函数调用：`(*(code *)**(undefined4 **)this)(this+0x30, this+0x34)`

**Ssd_SmfParse 在 midi2mmf.c 中导致 segfault。** 原因可能是：
1. Ssd_Parser.dll 的全局对象 DAT_10014188 的 vtable 指针无效
2. 或格式不符（SMF0 vs 期望的 SMF1 格式）

Ssd_SmfParse 的错误码 0xF1000005 = MA-3/MA-5 通道数 > 128。
通道数来自 channel_info 缓冲区的第一个字节。
```

#### 当前错误：0xF1F00000

midi2mmf.c 当前传入 format_flags=0x3002，format_flags 验证应通过（0x30xx）。
但 this+0xD0 缓冲区的验证失败，因为 Ssd_SscCnv_Rsrc 的 param_5 应该是 1672 字节的输出缓冲区（由 DLL 写入 SSC 数据），而不是目录路径字符串。

### SSD.exe 完整转换流程（已分析）

SSD.exe 的 MIDI→SMAF 转换分两条路径：

**路径 A：打开并转换（FUN_00417830）**
1. `Ssd_SmfFmt10Cnv` — SMF1→SMF0 格式转换
2. `Ssd_SmfParse_Rsrc` — 解析 SMF，填充语音信息结构体（+0x197E）和流配置（+0x5080）
3. `Ssd_SmfParse` — 额外解析
4. `Ssd_VoiceCtrl` — 语音控制/分配

**路径 B：主转换（FUN_004188c0）**
1. `Ssd_SscCnv_Rsrc` — 读取已解析数据（+0x1982/0x1986）、流配置（+0x5080）、资源配置头（+0xC60）；输出 SSC 到 +0x50C4
2. `Ssd_SscCnv` — 最终转换，使用格式标志

#### SSD.exe 主对象关键偏移

| 偏移 | 大小 | 说明 | 初始化值 |
|------|------|------|---------|
| +0xC38 | — | 转换引擎对象（用于 Ssd_SscCnv） | — |
| +0xC4C | — | 转换引擎对象（用于 Rsrc 等其他函数） | — |
| +0xC60 | 844B | SMAF 资源配置头 | byte[0]=0, byte[1]=0/2/0x23, byte[2]=0xF8~0xFF |
| +0x197E | 14082B | 语音信息结构体（+4=数据指针, +8=数据大小） | DLL 填充 |
| +0x5080 | 66B | 语音流配置 | byte[0]=0xFF, 后续由 DLL 填充 |
| +0x50C4 | 1672B | SSC 输出缓冲区 | 全零（由 Ssd_SscCnv_Rsrc 写入） |

### format_flags 构造（FUN_0041ba40）

```c
// param_3 = 芯片类型 (2=MA-2, 3=MA-3, 5=MA-5)
// param_4 = 基础标志（来自 FUN_0041a840，通常为 0）
format_flags = param_4 | 2;  // bit 1 始终置位
if (param_3 == 2) format_flags |= 0x2002;  // MA-2: bits 1, 13
if (param_3 == 3) format_flags |= 0x3002;  // MA-3: bits 1, 12, 13
if (param_3 == 5) format_flags |= 0x5000;  // MA-5: bits 12, 14
```

MA 版本选择由 SSD.dll 完成：`(format_flags >> 8 & 0xFF) >> 4` 提取版本号。

| 芯片类型 | format_flags | byte[1] | (byte[1]>>4) | 选择 DLL |
|---------|-------------|---------|-------------|---------|
| MA-2 | 0x2002 | 0x20 | 2 | Ssd_sscma2.dll |
| MA-3 | 0x3002 | 0x30 | 3 | Ssd_sscma3.dll |
| MA-5 | 0x5000 | 0x50 | 5 | Ssd_sscma5.dll |

### midi2mmf.c v9 当前状态

| 步骤 | 函数 | 状态 | 说明 |
|------|------|------|------|
| 1. SMF1→SMF0 | Ssd_SmfFmt10Cnv | 通过 | 输出 MThd 头的正确 SMF0 数据 |
| 2. 资源初始化 | Ssd_SmfParse_Rsrc | 返回 0 | 存储数据到 sscma3.dll 全局对象 |
| 3. SMF 解析 | Ssd_SmfParse | **崩溃** | Ssd_Parser.dll vtable 全零，无法修复（见下文） |
| 4. 资源设置 | Ssd_SscCnv_Rsrc | 返回 0 | 传递 SMF/channels/score/ssc 数据 |
| 5. SSC→SMAF | Ssd_SscCnv | 0x31000101 | CnvMA3SMF.dll 返回 buffer too small |
| 6. 直接调用 | CnvMA3SMF.CnvTo | **成功** | 返回处理后的 SMF 数据（非 SMAF 格式） |

### Ssd_SmfParse 崩溃根因（已确认）

Ssd_Parser.dll 全局对象 `DAT_10014188` 在 .data 段初始值**全零**：
```
[+0x00]=0x00000000  ← vtable pointer = NULL → 调用时崩溃！
[+0x04]=0x00000000
...
[+0x3C]=0x00000000
```
- DLL 无 `.CRT` 段，无全局构造函数
- DLL entry (`FUN_10007adc`) 中无 vtable 初始化代码
- **结论：vtable 从未被设置，Ssd_SmfParse 无法在任何环境中工作**
- 这可能是原始 DLL 的 bug，或者 vtable 由 SSD.exe 在外部手动设置（但未找到相关代码）

### Ssd_SscCnv 错误 0x31000101 分析（已确认）

错误码映射链：
```
Ssd_SscCnv 返回 -18 (0xFFFFFFEE)
  → *param_3 = 0x31000101
  → 来自 sscma3.dll FUN_10007f10
  → FUN_10001af0 调用 CnvMA3SMF.dll (DLL ID=7)
  → CnvMA3SMF.dll CnvFrom 返回 0x80000001
  → 含义: 输出缓冲区太小 (param_1[4] < 实际需要的大小)
```

CnvMA3SMF.dll 内部分配的输出缓冲区大小 = SMF 原始大小（param_2），但实际转换后数据可能更大。

### CnvMA3SMF.dll 直接调用（v9 突破）

**CnvMA3SMF.dll 可以绕过 sscma3.dll 直接调用！**

两个导出函数（通过序号访问）：

| 函数 | 序号 | 地址 | 大小 | 签名 |
|------|------|------|------|------|
| CnvFrom | 1 | 0x10001010 | 21270B | MA3→SMF 转换 |
| CnvTo | 2 | 0x10006620 | 8604B | SMF→MA3 转换 |

**CnvTo 参数结构体：**
```c
uint32_t params[5];
params[0] = 0;                         // flags
params[1] = (uint32_t)midi_data_ptr;     // 输入 SMF 数据指针
params[2] = (uint32_t)midi_data_size;    // 输入 SMF 数据大小
params[3] = (uint32_t)output_buf_ptr;    // 输出缓冲区指针
params[4] = (uint32_t)output_buf_size;   // 输出缓冲区大小
uint32_t result = CnvTo(params);
// 成功: result & 0x80000000 == 0, params[4] = 实际输出大小
// 失败: result == 0x80000001 (buffer too small), params[4] = 需要的大小
```

**测试结果 (BluesyPosition.mid, 15448 bytes):**
- CnvTo 返回 0x00003C24（成功）
- 输出 15396 字节
- 输出以 `MThd` 开头 — **CnvTo 的输出是处理后的 SMF 格式，不是最终 SMAF 文件**
- sscma3.dll 的 FUN_10007f10 在 CnvTo 之后还需要构建 SMAF 文件结构

### CnvMA3SMAF_SC.dll（已分析，876 函数）

被 sscma3.dll 的 FUN_10001af0 在 CnvTo 之后调用（DLL ID=8, 函数ID=1）。
负责：将 CnvMA3SMF.dll 的处理结果包装为最终 MMF 文件格式（`MMMD` header）。

**导出函数（3个）：**

| Ordinal | 名称 | 地址 | 说明 |
|---------|------|------|------|
| 1 | GetMAxVersion | 0x10001000 | 返回 MA-x 版本号 |
| 2 | CnvFrom | 0x10001050 | SMAF→SMF 反向转换 |
| 3 | CnvTo | 0x10002a20 | SMF→SMAF 正向转换（11649字节） |

**CnvTo 参数结构**（与 CnvMA3SMF.dll 相同）：
```c
uint32_t params[5];
params[0] = flags;        // 转换标志，内部会 & 0xFFFF
params[1] = input_ptr;    // 处理后的 SMF 数据
params[2] = input_size;   // 输入大小
params[3] = output_ptr;   // 输出缓冲区
params[4] = output_size;  // 输入=缓冲区容量，输出=实际写入大小
```

**注意：CnvTo 是 ordinal 3**（CnvMA3SMF.dll 中 CnvTo 是 ordinal 2，因为 SC 版本多了 GetMAxVersion）。

**错误码：**
- `0x80000001` = 输出缓冲区太小
- `0x80000002` = 输入格式无效

**完整调用链：**
```
原始 SMF (MIDI)
    ↓ CnvMA3SMF.dll::CnvTo (ordinal 2)
处理后的 SMF (MThd格式，优化过的事件)
    ↓ CnvMA3SMAF_SC.dll::CnvTo (ordinal 3)
MMF 文件 (MMMD header + CNTI + OPDA + MTR chunks)
```

**实测结果（midi2mmf v10）：**
- BrilliantSnow.mid (10905B) → Stage1 10898B → Stage2 5673B MMF
- Sony PS2 Seq.mid (5156B) → Stage1 5141B → Stage2 3543B MMF
- 输出文件以 `MMMD` 开头（Mobile Music Data），与 Yamaha 参考文件格式一致

### 错误码汇总

| 错误码 | 来源 | 含义 | 状态 |
|--------|------|------|------|
| 0xF1000000 | Ssd_SscCnv | 无有效 SMF 数据 | 已解决 |
| 0xF1000001 | Ssd_SscCnv | SMF 数据格式错误 | 已解决 |
| 0xF1000002 | Ssd_SscCnv | 多音轨 SMF | 已解决 |
| 0xF1000003 | Ssd_SscCnv | 无有效通道的 note 数据 | 已理解 |
| 0xF1F00000 | Ssd_SscCnv | this+0xD0 验证失败 | 已解决 (ssc_output[2]=0xF8) |
| 0xF1F00002 | Ssd_SscCnv | format_flags 不匹配 | 已解决 |
| 0x31000004 | Ssd_SscCnv | CnvMA3SMF.dll 加载失败 | — |
| 0x31000005 | Ssd_SscCnv | DVAchecker.dll 加载失败 | — |
| 0x31000007 | Ssd_SscCnv | 临时文件创建失败 (MFC未初始化) | 已理解 |
| 0x31000100 | Ssd_SscCnv | CnvMA3SMF.dll 0x80000000 | — |
| 0x31000101 | Ssd_SscCnv | CnvMA3SMF.dll 0x80000001 (buffer too small) | 已理解 |
| 0x31000200 | Ssd_SscCnv | CnvMA3SMAF_SC.dll 0x80000000 | — |
| 0x31000207 | Ssd_SscCnv | CnvMA3SMAF_SC.dll 0x80000040 | — |

## 相关文件

| 文件 | 路径 |
|------|------|
| SSD.exe（复制自安装目录） | `tools/yamaha_converter/SSD.exe` |
| SSD.exe 反编译代码 | `tools/yamaha_converter/ghidra_output/all_decompiled.c` |
| Ssd_sscma3.dll 反编译代码 | `tools/yamaha_converter/ghidra_output_sscma3/all_decompiled.c` |
| Ssd_Parser.dll 反编译代码 | `tools/yamaha_converter/ghidra_output_parser/all_decompiled.c` |
| CnvMA3SMF.dll 反编译代码 | `tools/yamaha_converter/ghidra_output_cnvma3smf/all_decompiled.c` |
| CnvMA3SMAF_SC.DLL 反编译代码 | `tools/yamaha_converter/ghidra_output_cnvma3smaf_sc/` |
| SSD.dll 反编译代码 | `tools/yamaha_converter/ghidra_output_ssddll/all_decompiled.c` |
| Fc10.dll 反编译代码 | `tools/yamaha_converter/ghidra_output_fc10/all_decompiled.c` |
| DLL加载函数分析 | `tools/yamaha_converter/ghidra_output/cnvto_usage_analysis.txt` |
| DLL 文件副本 | `tools/yamaha_converter/ghidra_dlls/` |
| 导入+导出批处理 | `tools/yamaha_converter/run_import_export.bat` |
| midi2mmf 转换器 (v10) | `tools/yamaha_converter/midi2mmf.c` |

## 另见

### Android SO 文件分析

Android 版本（libM7_EmuSmw7.so 等）的分析记录见 [GHIDRA_HEADLESS_GUIDE.md](GHIDRA_HEADLESS_GUIDE.md)。PE 分析与 SO 分析的主要区别：
- PE 文件使用 `-import` + `-postScript`，SO 文件同样适用
- PE 文件有 `ExternalEntryPointIterator`（导出表），SO 文件使用 `getExternalEntryPointIterator` 或遍历所有函数
- PE 文件的 DLL 加载分析需要关注 `LoadLibraryA`/`GetProcAddress` 调用链
