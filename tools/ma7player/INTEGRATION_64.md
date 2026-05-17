# 64位应用程序集成MA DLL指南

## 问题说明

Yamaha MA DLL（M7_EmuSmw7.dll等）是**32位x86 PE文件**，无法直接在64位进程中加载。

## 解决方案

### 方案1：进程外通信（推荐）

**架构**：
```
64位主进程 (你的播放器)
    ↓ IPC (stdin/stdout / 共享内存 / 命名管道)
32位helper进程 (ma_helper.exe)
    ↓ 直接调用
MA DLL (32位)
```

**优点**：
- ✅ 64位和32位完全隔离
- ✅ 不修改主进程架构
- ✅ 稳定可靠
- ✅ 易于调试

**实现**：
1. 编译32位helper程序（ma_helper.exe）
2. 64位主进程启动helper作为子进程
3. 通过IPC发送命令：INIT, LOAD, START, STOP等
4. Helper执行MA DLL调用并返回结果

### 方案2：DLL代理（复杂）

**架构**：
```
64位主进程
    ↓ COM/IPC
32位代理进程 (加载MA DLL + COM服务器)
    ↓ COM接口
主进程调用
```

**优点**：
- ✅ 标准COM接口
- ✅ 类型安全

**缺点**：
- ❌ 需要实现COM服务器
- ❌ 复杂度高

### 方案3：使用libsmaf纯软件实现（最佳长期方案）

**架构**：
```
64位主进程
    ↓ 直接调用
libsmaf (纯C，64位兼容)
    ↓ 软件合成
音频输出
```

**优点**：
- ✅ 无需32位进程
- ✅ 跨平台
- ✅ 完全控制

**缺点**：
- ❌ 需要完整实现MA芯片仿真（进行中）

## 推荐实现：方案1进程外通信

### 文件结构

```
libsmaf/
├── tools/ma7player/
│   ├── ma_dll.h           # 32位MA DLL接口（已有）
│   ├── ma_dll.c           # 32位MA DLL实现（已有）
│   ├── ma_helper.h        # Helper头文件
│   ├── ma_helper.c        # Helper实现
│   ├── ma_dll_64.h        # 64位包装器接口
│   ├── ma_dll_64.c        # 64位包装器实现
│   └── ma_helper.exe      # 32位helper可执行文件
```

### IPC协议定义

```c
// 请求消息
typedef struct {
    uint32_t type;        // 命令类型
    uint32_t data_size;   // 数据大小
    int32_t param1;       // 参数1
    int32_t param2;       // 参数2
} ipc_request_t;

// 响应消息
typedef struct {
    int32_t result;       // 返回码
    int32_t data_size;   // 返回数据大小
    uint8_t data[1024];  // 返回数据
} ipc_response_t;
```

### 使用示例

```c
// 64位主进程代码
#include "ma_dll_64.h"

ma_context_64_t ctx;
ma_init_64(&ctx, "/path/to/dlls", MODE_MA7, 44100);

ma_load_64(&ctx, FORMAT_MMF, mmf_data, mmf_size);
ma_start_64(&ctx, FORMAT_MMF, sound_id, 0);

// 查询状态
while (ma_get_status_64(&ctx, FORMAT_MMF, sound_id) == STATE_PLAYING) {
    int pos = ma_get_position_64(&ctx, FORMAT_MMF, sound_id);
    printf("Position: %d ms\n", pos);
    Sleep(100);
}

ma_stop_64(&ctx, FORMAT_MMF, sound_id);
ma_cleanup_64(&ctx);
```

## 快速集成步骤

### 步骤1：编译32位helper
```bash
cd tools/ma7player
gcc -m32 -o ma_helper.exe ma_helper.c ma_dll.c -lstdc++
```

### 步骤2：在64位项目中使用
```c
#define WIN64
#include "ma_dll_64.h"

// 你的64位播放器代码
void play_mmf(const char* mmf_file) {
    ma_context_64_t ctx;
    ma_init_64(&ctx, "path/to/dlls", MODE_MA7, 44100);

    // 读取MMF文件
    // ...

    ma_load_64(&ctx, FORMAT_MMF, data, size);
    ma_start_64(&ctx, FORMAT_MMF, sound_id, 0);

    // 等待播放完成或控制播放
    // ...

    ma_cleanup_64(&ctx);
}
```

## 性能考虑

- **IPC开销**：~1-2ms每命令（可接受）
- **内存**：helper进程 ~10MB
- **延迟**：启动helper ~100ms（一次性）
- **音频同步**：helper内部处理，无额外延迟

## 替代方案：libsmaf纯软件

如果你不想使用进程外通信，可以等待libsmaf纯C实现完成：

- ✅ 64位原生支持
- ✅ 跨平台（Windows/Linux/macOS/嵌入式）
- ✅ 无外部DLL依赖
- ✅ 可直接集成到任何项目

当前进度：FM合成器基本完成，WT/ADPCM进行中。

## 总结

对于**64位播放器项目**集成MMF播放：

**短期方案**：使用进程外通信（ma_helper.exe）
**长期方案**：等待libsmaf纯软件实现完成

推荐：先使用进程外通信快速集成，后续切换到libsmaf纯软件实现。
