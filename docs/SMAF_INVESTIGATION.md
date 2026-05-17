# KEmulator SMAF 播放核心封装架构调查报告

## 1. 背景

KEmulator 是一个跨平台 J2ME (Java ME) 模拟器。其最新版本 (v2.21, 2026.01) 中最重要的成果是将雅马哈 SMAF (Synthetic music Mobile Application Format) 播放核心从原先的自定义 JNI DLL (`mmfplayer.dll`) 完全重写为基于 **JNA (Java Native Access)** 的实现，并支持三代雅马哈合成芯片 (MA-3 / MA-5 / MA-7)。

这项工作由 Arman Jussupgaliyev 于 2025-2026 年完成，版本演进如下：
- **v2.21 (2026.01.12)**: 用 JNA 实现替换了 `mmfplayer.dll`，新增 MA-5 支持
- **v2.21.1 (2026.01.17)**: 实现了 SoftBank MEXA 的 SMAF 播放和 Phrase 播放
- **v2.21.2 (2026.01.22)**: 新增 MA-7 模拟器支持
- **v2.21.3 (2026.03.04)**: 新增通过 MA-3/MA-5 模拟器播放 MIDI 的选项

## 2. 整体架构

```
┌──────────────────────────────────────────────────────────────┐
│  OEM Java API 层 (面向 J2ME 应用)                            │
│  ┌──────────┐ ┌──────────┐ ┌──────────┐ ┌──────────────┐    │
│  │ jBlend   │ │ J-Phone  │ │ Vodafone │ │ LG MMPP      │    │
│  │ Smaf     │ │ Amuse    │ │ V10      │ │ Samsung      │    │
│  │ Player   │ │ Phrase   │ │ Sound    │ │ AudioClip    │    │
│  └────┬─────┘ └────┬─────┘ └────┬─────┘ └──────┬───────┘    │
└───────┼────────────┼────────────┼───────────────┼────────────┘
        │            │            │               │
        ▼            ▼            ▼               ▼
┌──────────────────────────────────────────────────────────────┐
│  jBlend SMAF Phrase API 层                                    │
│  ┌──────────────┐  ┌──────────────────┐  ┌───────────────┐  │
│  │PhrasePlayer  │  │PhraseTrack       │  │AudioPhrase    │  │
│  │(单例)        │  │(jBlend封装)       │  │Track          │  │
│  └──────┬───────┘  └────────┬─────────┘  └───────┬───────┘  │
└─────────┼───────────────────┼─────────────────────┼──────────┘
          │                   │                     │
          ▼                   ▼                     ▼
┌──────────────────────────────────────────────────────────────┐
│  核心实现层 (emulator.media.mmf)                              │
│  ┌─────────────────────┐  ┌────────────────────────────┐    │
│  │PhrasePlayerImpl     │  │PhraseTrackImpl             │    │
│  │(轨道池管理, 事件回调) │  │(单轨道操作, Master/Slave同步)│    │
│  └──────────┬──────────┘  └────────────┬───────────────┘    │
│             │                          │                     │
│  ┌──────────┴──────────────────────────┴──────────────┐     │
│  │  MMFPlayer (单例, DLL加载器, 生命周期管理)           │     │
│  └──────────────────────┬─────────────────────────────┘     │
│                          │                                   │
│  ┌──────────────────────▼─────────────────────────────┐     │
│  │  MaDll (JNA 接口定义, 所有 native 调用的唯一入口)   │     │
│  │  - MaSound: 通用声音播放 (load/play/stop/volume)   │     │
│  │  - Phrase: 乐句播放 (MA3/MA5 共用)                 │     │
│  │  - MA7: MA-7 专有接口 (含 AudioPhrase)             │     │
│  └──────────────────────┬─────────────────────────────┘     │
└─────────────────────────┼───────────────────────────────────┘
                          │ JNA (com.sun.jna.Native.load)
                          ▼
┌──────────────────────────────────────────────────────────────┐
│  雅马哈原生 DLL (32位 x86, 专有)                              │
│  ┌──────────────────┐ ┌──────────────────┐ ┌──────────────┐ │
│  │ ma3smwemu.dll    │ │ M5_EmuSmw5.dll  │ │M7_EmuSmw7.dll│ │
│  │ (MA-3 合成器)    │ │ M5_EmuHw.dll    │ │M7_EmuHw.dll  │ │
│  │                  │ │ (MA-5 合成器)    │ │(MA-7 合成器) │ │
│  └──────────────────┘ └──────────────────┘ └──────────────┘ │
└──────────────────────────────────────────────────────────────┘
```

## 3. 核心技术：JNA 替代 JNI

### 3.1 为什么选择 JNA 而不是 JNI

| 对比项 | JNI (旧方案) | JNA (新方案) |
|--------|-------------|-------------|
| 需要编写 C/C++ 桥接代码 | 是 | 否 |
| 需要编译 .dll/.so | 是 | 否 |
| 调用方式 | 编写 native 方法 + C 实现 | Java 接口声明 + 运行时动态绑定 |
| 开发效率 | 低 (需维护两套代码) | 高 (纯 Java) |
| 跨平台 | 需要为每个平台编译 | 自动适配 (同一 Java 代码) |
| 依赖 | 无额外依赖 | 需要 jna.jar |

旧版 KEmulator 使用自定义编译的 `mmfplayer.dll` 作为 JNI 桥接，新方案完全移除了这个中间层。

### 3.2 JNA 使用方式

项目使用 **JNA 5.7.0** (`lib/jna-5.7.0.jar`)，通过以下方式加载 DLL：

```java
// MaDll.java 构造函数
public MaDll(String dllPath, int mode) {
    if (mode == MODE_MA3) {
        this.library = Native.load(dllPath, MA3.class);
    } else if (mode == MODE_MA5) {
        this.library = Native.load(dllPath, MA5.class);
    } else if (mode == MODE_MA7) {
        this.library = Native.load(dllPath, MA7.class);
    }
    this.mode = mode;
}
```

DLL 中的 C 函数通过 Java 接口声明映射：

```java
// 声明 C 函数签名
private interface MaSound extends Library {
    int MaSound_Initialize();
    int MaSound_Create(int p1);
    int MaSound_Load(int p1, Pointer p2, int p3, int p4, int p5, int p6);
    int MaSound_Start(int p1, int p2, int p3, int p4);
    int MaSound_Stop(int p1, int p2, int p3);
    // ...
}
```

### 3.3 JNA 接口继承体系

MaDll.java 巧妙利用了 JNA 接口的**多继承**来统一不同芯片的差异：

```
                    Library (JNA)
                   /        \
             MaSound       Phrase
            /        \        \
          MA3        MA5       MA7
       (MaSound+   (MaSound+  (MaSound+
        Phrase)    Phrase+    独立API)
                 MA5扩展)
```

- **`MaSound`** — 通用声音操作接口 (所有芯片共用)
- **`Phrase`** — 乐句播放接口 (MA-3/MA-5 共用)
- **`MA3`** — 继承 MaSound + Phrase，最基础
- **`MA5`** — 继承 MaSound + Phrase，增加 `MaSound_EmuInitialize` 等扩展
- **`MA7`** — 仅继承 MaSound，但定义了大量 `Mapi_*` 和 `Mapi_Phrase_*` 独立 API

在调用时，通过 `mode` 字段做条件分发：

```java
public synchronized void phrasePlay(int ch, int loops) {
    int r;
    if (mode == MODE_MA7) {
        r = ((MA7) library).Mapi_Phrase_Play(ch, loops);
    } else {
        r = ((Phrase) library).Phrase_Play(ch, loops);
    }
    if (r != 0) throw new RuntimeException("Phrase_Play: " + r);
}
```

## 4. DLL 发现与加载机制

`MMFPlayer.java` 是单例管理器，负责 DLL 的发现和初始化：

```java
public static boolean initialize(boolean notMmf) {
    if (initialized) return true;
    if (Emulator.isX64()) return false;  // 仅 32 位

    File f;
    // 优先级: MA-7 > MA-5 > MA-3
    if (!notMmf && new File(path, "M7_EmuSmw7.dll").exists()
                  && new File(path, "M7_EmuHw.dll").exists()) {
        maDll = new MaDll(f.getAbsolutePath(), MaDll.MODE_MA7);
    } else if (new File(path, "M5_EmuSmw5.dll").exists()
             && new File(path, "M5_EmuHw.dll").exists()) {
        maDll = new MaDll(f.getAbsolutePath(), MaDll.MODE_MA5);
    } else if (new File(path, "ma3smwemu.dll").exists()) {
        maDll = new MaDll(f.getAbsolutePath(), MaDll.MODE_MA3);
    }
    maDll.init();
    return initialized = true;
}
```

关键设计点：
- DLL 放在模拟器安装目录 (`home/`)，用户自行放置
- 自动按优先级降级：MA-7 → MA-5 → MA-3
- MA-7 和 MA-5 各需要两个 DLL (Smw + Hw)
- MA-3 只需一个 DLL
- x64 架构直接返回失败 (雅马哈 DLL 仅提供 32 位版本)

## 5. 芯片初始化流程

### 5.1 MA-3 初始化

```java
((MA3) library).MaSound_Initialize();
initFormat(FORMAT_MMF);  // MaSound_Create(FORMAT_MMF)
```

### 5.2 MA-5 初始化

```java
int emuP = Native.malloc(1024);
// 在分配的内存中搜索特定对齐地址 (0x81)
while ((emuP & 0xFF) != 0x81) emuP++;
((MA5) library).MaSound_EmuInitialize(48000, 2, emuP);  // 48kHz, 双声道
((MA5) library).MaSound_Initialize(0, EmuBuf, 0);
((MA5) library).MaSound_DeviceControl(0x0D, 0, 0, 0);  // 一系列设备控制命令
((MA5) library).MaSound_DeviceControl(0x05, 2, 0, 0);
((MA5) library).MaSound_DeviceControl(0x06, 0, 0, 0);
((MA5) library).MaSound_DeviceControl(0x08, 2, 0, 0);
((MA5) library).MaSound_DeviceControl(0x09, 0, 0, 0);
initFormat(FORMAT_MMF);
```

### 5.3 MA-7 初始化

```java
Memory config = new Memory(72);
config.clear();
config.setInt(0, 2);          // 模式
config.setInt(4, 44100);      // 采样率
config.setByte(8, (byte) 1);  // 通道配置
config.setInt(12, 0);
config.setInt(16, 15);        // 复音数
config.setInt(20, 1);
config.setInt(24, 1);
// ... 设置 8 组声道参数 (FMDown/AM/FM 等)
// ... 每组: Volume(120), Attack(240), ... 等

((MA7) library).Mapi_EmuInitialize(0, config, null, null, null, 0);
((MA7) library).Mapi_Initialize();
((MA7) library).Mapi_DeviceControlEx(0x10000, 0, null);  // 取消静音
((MA7) library).Mapi_SetMode(2);  // Phrase 模式
((MA7) library).MaSound_Initialize();
initFormat(FORMAT_MMF);
```

## 6. SMAF 文件播放流程

以 `SmafPlayer` 为例的完整播放流程：

```
1. SmafPlayer.setData(SmafData)
   └─ MMFPlayer.initialize(false)       // 确保 DLL 已加载
   └─ MaDll.load(FORMAT_MMF, byte[])    // 加载 SMAF 数据到合成器
      └─ MaSound_Load(formatId, ptr, len, 0, 0, 0) → 返回 soundId
      └─ MaSound_Open(formatId, soundId, 0, 0)
      └─ MaSound_Standby(formatId, soundId, 0)
      └─ setVolume(127), setPitch(0), setTempo(100), seek(0)

2. SmafPlayer.play(count)
   └─ MaDll.start(FORMAT_MMF, soundId, count)
      └─ MaSound_Start(formatId, soundId, loops, 0)

3. SmafPlayer.getState()
   └─ MaDll.getStatus(FORMAT_MMF, soundId)
      └─ MaSound_Control(formatId, soundId, 6, NULL, 0)

4. SmafPlayer.stop()
   └─ MaDll.stop(FORMAT_MMF, soundId)
      └─ MaSound_Stop(formatId, soundId, 0)

5. SmafPlayer.close() / finalize()
   └─ MaDll.close(FORMAT_MMF, soundId)
      └─ MaSound_Stop → MaSound_Close → MaSound_Unload
```

## 7. Phrase (乐句) 播放系统

Phrase 系统允许多个轨道独立播放，并支持轨道同步：

```
┌─────────────────────────────────────────┐
│ PhrasePlayerImpl.open()                 │
│  └─ MMFPlayer.initialize(false)         │
│  └─ MaDll.phraseInitialize()            │
│     └─ Phrase_Initialize()              │
│     └─ Phrase_SetEvHandler(callback)    │
│  └─ 创建 4 个 PhraseTrackImpl 槽位      │
│  └─ 创建 1 个 AudioPhraseTrackImpl 槽位 │
└─────────────────────────────────────────┘

轨道操作:
  setPhrase(byte[]) → Phrase_SetData(ch, data, len, 1)
  play(loops)       → Phrase_Play(ch, loops)
  stop()            → Phrase_Stop(ch)
  setVolume(v)      → Phrase_SetVolume(ch, v)
  setPanpot(p)      → Phrase_SetPanpot(ch, p)
  setSubjectTo()    → Phrase_SetLink(ch, slaveMask) // Master/Slave 同步
```

**事件回调链:**
```
DLL (C callback) → PhraseEventCallback.callback(Pointer)
  → PhraseEvent 结构体解析 (ch, mode)
    → PhrasePlayerImpl.eventCallback(ch, mode)
      → PhraseTrackImpl.redirectEvent(mode)
        → IPhraseEventRedirect._redirectEvent(event)
          → PhraseTrackBase / OEM Listener
```

## 8. Stub 模式 (优雅降级)

当 DLL 不可用时，系统不会崩溃，而是自动进入 **Stub 模式**：

```java
public static PhrasePlayerImpl open(boolean audioTracks) {
    PhrasePlayerImpl inst = new PhrasePlayerImpl();
    try {
        MMFPlayer.initialize(false);
        MMFPlayer.getMaDll().phraseInitialize();
        // 正常初始化...
    } catch (Exception e) {
        // 降级到 stub 模式
        inst.tracks = new PhraseTrackImpl[4];
        inst.audioTracks = new AudioPhraseTrackImpl[4];
        inst.stub = true;  // 所有操作变成空操作
    }
    return inst;
}
```

在 Stub 模式下，`PhraseTrackImpl` 的 play/stop/pause 只是改变内部状态标志，不调用任何 native 方法。

## 9. JNA 结构体与回调

### 9.1 结构体映射

```java
// 设备信息结构体
public static class PhraseInfo extends Structure {
    public long makerID;
    public int deviceID;
    public int versionID;
    public int maxVoice;
    public int maxChannel;
    public int supportSMAF;
    public long latency;
    // getFieldOrder() 定义字段顺序
}

// 事件结构体 (用于回调参数)
public static class PhraseEvent extends Structure {
    public int ch;
    public int mode;
}
```

### 9.2 回调映射

```java
// Java → C 回调
private static class PhraseEventCallback implements Callback {
    public void callback(Pointer p) {
        PhraseEvent event = new PhraseEvent(p);
        phrasePlayer.eventCallback(event.ch, event.mode);
    }
}

// 注册到 DLL
((Phrase) library).Phrase_SetEvHandler(callback);
```

## 10. "跨平台" 的实际含义

### 10.1 当前支持

| 平台 | SMAF/MMF 支持 | 说明 |
|------|-------------|------|
| Windows x86 | 完整支持 | MA-3/MA-5/MA-7 |
| Windows x64 | 不支持 | 雅马哈 DLL 仅 32 位 |
| Linux | 不支持 | 无雅马哈 DLL |
| macOS | 不支持 | 无雅马哈 DLL |

**注意：** 所谓 "跨平台" 主要指 **JNA 框架本身的跨平台能力**，而非 SMAF 播放可以跨平台运行。实际的雅马哈合成器 DLL 是闭源的，只提供 32 位 Windows 版本。

### 10.2 JNA 的跨平台优势

如果未来能获得其他平台的雅马哈 DLL，只需：
1. 将对应平台的 .so / .dylib 放到对应目录
2. 修改 `MMFPlayer.initialize()` 中的 DLL 搜索路径
3. **所有 Java 代码无需任何修改**

这就是 JNA 的核心价值：Java 层代码是平台无关的，只有 DLL 文件本身是平台相关的。

## 11. ProGuard 混淆保护

由于 JNA 依赖反射来查找接口方法和结构体字段，必须通过 ProGuard keep 规则保护这些类不被混淆：

```
# win/obf/config.txt 和 x64/obf/config.txt
-keep class * extends com.sun.jna.Library { *; }
-keep class * extends com.sun.jna.Structure { *; }
-keep class * extends com.sun.jna.Callback { *; }
-keep interface emulator.media.mmf.* { *; }
-keepclassmembers class emulator.media.mmf.MaDll {
    *** callback;
    *** audioPhraseCallback;
}
```

## 12. 文件清单

### 核心层 (emulator.media.mmf)
| 文件 | 行数 | 职责 |
|------|------|------|
| `MaDll.java` | ~870 | JNA 接口定义, 所有 native 调用 |
| `MMFPlayer.java` | ~52 | 单例 DLL 加载器/生命周期管理 |
| `PhrasePlayerImpl.java` | ~205 | 轨道池管理, 事件分发 |
| `PhraseTrackImpl.java` | ~258 | 单轨道操作实现 |
| `AudioPhraseTrackImpl.java` | ~208 | 音频轨道实现 (MA-7) |
| `IPhraseEventRedirect.java` | ~5 | 事件回调接口 |

### jBlend SMAF API 层
| 文件 | 职责 |
|------|------|
| `SmafPlayer.java` | SMAF 播放器 (load/play/stop/volume/pitch/tempo) |
| `SmafData.java` | SMAF 数据容器 |
| `SmafDataTag.java` | 数据标签常量 |
| `SmafPlayerListener.java` | 播放事件监听器 |
| `phrase/PhrasePlayer.java` | Phrase 播放器 (单例) |
| `phrase/PhraseTrack.java` | 乐句轨道封装 |
| `phrase/AudioPhraseTrack.java` | 音频轨道封装 |
| `phrase/Phrase.java` / `AudioPhrase.java` | 数据容器 |

### OEM API 适配层 (均委托到核心层)
| 路径 | API 来源 |
|------|---------|
| `com/j_phone/amuse/` | J-Phone (Vodafone 日本) |
| `com/vodafone/v10/sound/` | Vodafone V10 |
| `mmpp/media/phrase/` | LG MMPP |
| `com/samsung/util/AudioClip.java` | Samsung |
| `com/pantech/titan/PantechAudio.java` | Pantech |

### 依赖
| 文件 | 用途 |
|------|------|
| `lib/jna-5.7.0.jar` | JNA 框架 (核心) |
| `lib/jna-platform-5.7.0.jar` | JNA 平台支持 |
| `home/ma3smwemu.dll` | MA-3 合成器 DLL (包含在仓库中) |

## 13. 对 libsmaf 封装的参考建议

### 13.1 推荐的架构分层

参考 KEmulator 的做法，libsmaf 建议采用以下分层：

```
┌────────────────────────────┐
│  libsmaf 公共 API 层        │  ← 你定义的对外接口
│  (纯 C/Python/Rust 等)     │
├────────────────────────────┤
│  SMAF 解析层               │  ← 解析 SMAF 文件格式
│  (解析 chunk, score 等)    │
├────────────────────────────┤
│  合成器抽象层               │  ← 统一 MA-3/5/7 差异
│  (接口 + 条件分发)          │
├────────────────────────────┤
│  Native 加载层             │  ← DLL/SO 发现和加载
│  (跨平台, 可选 stub)       │
├────────────────────────────┤
│  雅马哈 DLL                │  ← 实际合成器
└────────────────────────────┘
```

### 13.2 关键设计经验

1. **接口继承统一芯片差异**: MaDll 通过 JNA 接口继承 (`MA3 extends MaSound, Phrase`) 来统一不同芯片的 API，避免在业务逻辑中散布 if-else。libsmaf 可以用类似的 C 虚函数表或 Rust trait 来实现。

2. **单例 + 懒加载**: `MMFPlayer` 使用单例 + `initialize()` 懒加载，首次使用时才加载 DLL。建议 libsmaf 也采用这种方式。

3. **优雅降级**: DLL 不可用时自动进入 stub 模式，不崩溃。libsmaf 也应提供 fallback 路径。

4. **Stub 模式**: 所有操作在 stub 下变成空操作，保持调用者代码不变。

5. **资源管理**: 使用 `synchronized` 保证线程安全；`finalize()` 作为最后防线释放资源；`Memory` 对象保存在 Map 中防止 GC。

6. **格式分离**: `MaFormatInstance` 将 format ID 与 sound ID 分离，一个 format 可以加载多个 sound。

7. **事件回调链**: DLL C 回调 → Java 回调类 → 管理器 → 轨道实例 → 用户监听器。libsmaf 也需要设计类似的回调传递链。

8. **ProGuard/混淆保护**: 如果使用需要反射的语言 (Java/Kotlin)，确保 native 接口不被混淆。

### 13.3 跨平台 DLL 加载参考

```java
// KEmulator 的做法 (仅 Windows x86)
File f = new File(Emulator.getAbsolutePath(), "M7_EmuSmw7.dll");

// libsmaf 可以改进为:
String[] dllNames = {
    "libma7emu.so",           // Linux
    "libma7emu.dylib",        // macOS
    "M7_EmuSmw7.dll",         // Windows
};
// 按当前平台自动选择
```

### 13.4 注意事项

- 雅马哈 MA DLL 是闭源专有的，libsmaf 的用户需要自行获取
- MA-3 的 `ma3smwemu.dll` 在 KEmulator 仓库中有提供，可作为测试起点
- MA-5 和 MA-7 的 DLL 需要从其他渠道获取
- DLL 仅 32 位，64 位环境需要兼容方案 (如独立进程 + IPC)
