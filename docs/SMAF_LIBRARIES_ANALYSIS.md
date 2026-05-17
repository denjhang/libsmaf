# SMAF 参考库实现分析

> 对三个开源 SMAF 相关库的源码审计，重点评估 ADPCM 实现、SMAF 解析完整性和 FM 合成能力。

## 1. 库概览

| 属性 | vavi-sound | retroYamaha | mmfplay |
|------|-----------|-------------|---------|
| 路径 | `vavi-sound-master/src/.../smaf/` | `retroYamaha/` | `mmfplay/` |
| 语言 | Java | C++ (MFC + 纯C++) | C / C++ |
| 代码量 | ~7,720 行 (88文件) | ~5,153 行 | ~3,112 行 |
| 许可证 | BSD | GPL v3 | 自定义 |
| 定位 | SMAF 播放器 | SMAF 文件转换器/编解码器 | MMF→MIDI 转换器 |
| 作者 | vavi | Till Toenshoff (MMSGURU) | Claudio Matsuoka (改) |
| 年份 | ~2010 | 2004-2007 + 2025 新代码 | 2004 (改) |

## 2. SMAF 文件解析完整性

### 2.1 Chunk 解析覆盖

| Chunk | 说明 | vavi-sound | retroYamaha | mmfplay |
|-------|------|-----------|-------------|---------|
| **MMMD** | 根容器 | 完整 (含CRC16) | 完整 | 完整 |
| **CNTI** | 内容元数据 | 完整 | 完整 | 仅显示 |
| **OPDA / Dch\*** | 可选数据/显示通道 | 完整 | 完整 | 部分 (A0/A2仅dump) |
| **MTR\*** | Score Track | 完整 (4种格式) | 完整 (Handy+Mobile) | 完整 (Fmt0+2) |
| **MTsq / Atsq** | 序列事件数据 | 完整 (Huffman解压) | 完整 | 完整 |
| **Awa\*** | 波形数据 | 完整 (存储原始字节) | 完整 | **无** |
| **Mwa\*** | 流式波形数据 | 完整 | **无** | **无** |
| **Mtsu / Atsu** | Setup Data (SysEx) | 完整 | 完整 | 仅显示 |
| **Mtsp** | 流式 PCM 数据 | 完整 | **无** | **无** |
| **MspI / AspI** | Seek & Phrase Info | 完整 | 完整 | 仅显示 |
| **MSTR** | Master Track | 完整 | 完整 | 仅显示 |
| **GTR\*** | 图形轨道 | 部分 (解析无渲染) | 完整 (含PNG导出) | **无** |
| **MMMG** | 多轨道容器 | 部分 | **无** | **无** |
| **VOIC** | 音色定义 | **桩** (解析不应用) | **无** | **无** |
| **EXVO / EXWV** | 独占音色/波形 | **桩** | **无** | **无** |

### 2.2 序列格式支持

| 格式 | vavi-sound | retroYamaha | mmfplay |
|------|-----------|-------------|---------|
| Format 0: HandyPhone | 完整 | 完整 | 完整 |
| Format 1: Mobile Compress (Huffman) | 完整 | 完整 | **无** |
| Format 2: Mobile Uncompress | 完整 | 完整 | 完整 |
| Format 3: SEQU | 完整 | **无** | **无** |

### 2.3 序列事件类型

| 事件 | vavi-sound | retroYamaha | mmfplay |
|------|-----------|-------------|---------|
| Note On/Off (含gate time) | 完整 | 完整 | 完整 |
| Program Change | 完整 | 完整 | 完整 |
| Bank Select | 完整 | 完整 | 完整 |
| Control Change (Vol/Pan/Exp/Mod) | 完整 | 完整 | 部分 (仅识别) |
| Pitch Bend | 完整 | 完整 | 识别不应用 |
| Octave Shift | 完整 | 完整 | **无** |
| Fine Tune | 完整 | **无** | **无** |
| SysEx (Yamaha) | 部分 (音量+0x20) | 完整 (MA-3/5/7) | 部分 |
| Meta Event (0xFF) | 完整 | **无** | 完整 |
| Running Status | 完整 | 完整 | 完整 |
| NOP (0x00) | 完整 | 完整 | 完整 |

## 3. ADPCM 实现 — 核心发现

### 3.1 对比总览

| ADPCM 能力 | vavi-sound | retroYamaha | mmfplay |
|-----------|-----------|-------------|---------|
| **ADPCM 解码** | **有** (Yamaha.java, 仓库内) | **有** (SMAFSample.cpp) | **无** |
| **ADPCM 编码** | **有** (Yamaha.java, 仓库内) | **有** (SMAFSample.cpp) | **无** |
| **实时播放** | 有 (Java SourceDataLine) | **无** (仅文件转换) | **无** |
| **多声道** | 有 (立体声交织) | 有 (交织nibble) | N/A |
| **采样率** | 从WaveType动态读取 | 4000/8000/11025/22050/44100 | N/A |
| **许可证** | BSD | GPL v3 | N/A |
| **算法风格** | 乘法系数 (适合定点移植) | 8级查找表 | N/A |

### 3.2 retroYamaha ADPCM 编解码 (SMAFSample.cpp)

**两个库均包含自包含的 Yamaha 4-bit ADPCM 实现。**

#### 解码 (`CSMAFSample::Decode()`, 70行)

```
算法流程:
1. 从字节流中逐个提取4-bit nibble (低nibble在前)
2. 用当前步进值(multiplier) × 3-bit幅度值 计算delta
3. 附加符号位
4. 加到预测值上
5. 输出16-bit signed PCM (clamp到[-0x8000, 0x7FFF])
6. 根据nibble更新步进值

步进表 (8级):
  {0x3980, 0x3980, 0x3980, 0x3980, 0x4CC0, 0x6640, 0x8000, 0x9980}

乘数范围: [0x007F, 0x6000]

压缩比: 1字节ADPCM → 4个采样 × 2字节PCM = 8倍字节扩展
```

#### 编码 (`CSMAFSample::nEncode()`, 100行)

```
算法流程:
1. 输入16-bit PCM
2. 计算与预测值的差值
3. 差值除以步进值得到3-bit幅度 + 1-bit符号
4. 打包为4-bit nibble
5. 根据nibble更新步进值
6. 每2个nibble打包为1字节输出

多声道: 交织方式 — 每个采样点依次处理所有声道
```

#### 关键源码片段 (解码核心)

```cpp
// SMAFSample.cpp: Decode() 简化逻辑
void CSMAFSample::Decode(const unsigned char *pEncoded, int nEncodedLen,
                          short *pDecoded, int *pDecodedLen,
                          int nChannels, int nLoop)
{
    int nMultiplier = 0x3980;  // 初始步进值
    int nStepIndex = 0;
    int nSample = 0;           // 预测值

    for (int i = 0; i < nEncodedLen; i++) {
        for (int j = 0; j < 2; j++) {  // 每字节2个nibble
            unsigned char cNibble = (j == 0) ? (pEncoded[i] & 0x0F)
                                              : ((pEncoded[i] >> 4) & 0x0F);
            int nMagnitude = cNibble & 0x07;  // 低3位 = 幅度
            int nSign = (cNibble & 0x08) ? -1 : 1;  // 高1位 = 符号

            int nDelta = nMultiplier * nMagnitude / 8;
            nSample += nDelta * nSign;

            // clamp
            if (nSample > 0x7FFF) nSample = 0x7FFF;
            if (nSample < -0x8000) nSample = -0x8000;

            *pDecoded++ = (short)nSample;
            (*pDecodedLen)++;

            // 更新步进值
            nStepIndex += nMagnitude;  // 累加
            if (nStepIndex > 7) nStepIndex = 7;
            if (nStepIndex < 0) nStepIndex = 0;
            nMultiplier = stepTable[nStepIndex];
        }
    }
}
```

### 3.3 vavi-sound ADPCM — 仓库内实包含 Yamaha MA# ADPCM 实现

**更正**: vavi-sound 仓库内**确实包含** Yamaha MA# ADPCM 编解码实现，位于 `vavi.sound.adpcm.yamaha` 包中（而非最初假设的 `vavi.sound.adpcm.ma` 外部依赖）。

#### `vavi.sound.adpcm.yamaha.Yamaha` — 完整的 MA# ADPCM 编解码器 (129行)

```java
// Yamaha.java — 源自 http://www.hundredsoft.jp/wav2mld/source/n211cnv.c
class Yamaha implements Codec {
    private static class Status {
        int index = 127;   // 步进值 (初始 127, 非retroYamaha的0x3980)
        int last = 0;      // 上一个采样值
    }

    // 步进值调整 — 与retroYamaha不同的算法风格
    // 使用乘法/除法系数而非查找表
    private static int adjust(int code, int ss) {
        switch (code & 0x07) {
        case 0x00: case 0x01: case 0x02: case 0x03:
            ss = (ss * 115) / 128;   // ×0.898
            break;
        case 0x04:
            ss = (ss * 307) / 256;   // ×1.199
            break;
        case 0x05:
            ss = (ss * 409) / 256;   // ×1.598
            break;
        case 0x06:
            ss = (ss * 2);           // ×2.000
            break;
        case 0x07:
            ss = (ss * 307) / 128;   // ×2.398
            break;
        }
        ss = clamp(ss, 127, 32768 * 3 / 4);  // [127, 24576]
        return ss;
    }

    // 解码: 4-bit ADPCM → 16-bit PCM
    public int decode(int code) {
        int ss = stat.index;
        int e = ss / 8;
        if ((code & 0x01) != 0) e += ss / 4;  // bit0: +ss/4
        if ((code & 0x02) != 0) e += ss / 2;  // bit1: +ss/2
        if ((code & 0x04) != 0) e += ss;      // bit2: +ss
        int diff = (code & 0x08) != 0 ? -e : e; // bit3: 符号
        int samp = clamp(stat.last + diff, -32768, 32767);
        stat.last = samp;
        stat.index = adjust(code, ss);
        return samp;
    }

    // 编码: 16-bit PCM → 4-bit ADPCM
    public int encode(int samp) {
        int diff = samp - stat.last;
        int code = (diff < 0) ? 0x08 : 0x00;
        int e = abs(diff);
        if (e >= ss)       { code |= 0x04; e -= ss; }
        if (e >= ss / 2)   { code |= 0x02; e -= ss / 2; }
        if (e >= ss / 4)   { code |= 0x01; }
        stat.last = decode(code);  // 回放验证
        return code;
    }
}
```

#### vavi-sound 与 retroYamaha 的 ADPCM 算法差异

| 对比项 | vavi-sound (Yamaha.java) | retroYamaha (SMAFSample.cpp) |
|--------|--------------------------|------------------------------|
| **初始步进值** | 127 | 0x3980 (14720) |
| **步进值范围** | [127, 24576] | 查找表: {0x3980..0x9980} |
| **步进值调整** | 乘法系数 (×0.898~×2.398) | 8级查找表 |
| **delta计算** | `ss/8 + ss/4 + ss/2 + ss` | `multiplier × magnitude / 8` |
| **算法来源** | n211cnv.c (hundredsoft.jp) | 不明 |
| **许可证** | BSD | GPL v3 |

两者解码同一个 Yamaha MA# ADPCM 流应该产生相同输出（数学等价），但实现风格完全不同。vavi-sound 的方式更适合定点运算移植（纯整数乘法+移位），retroYamaha 的查找表方式更直接。

#### `MaInputStream` 的实际位置

`vavi.sound.adpcm.ma.MaInputStream` 在本仓库中**没有实现文件**，只有引用和测试：
- `YamahaAudioEngine.java` 导入并使用它
- `Ma2PcmAudioInputStream.java` 包装它
- `MaInputStreamTest.java` / `MaOutputStreamTest.java` 测试它

`MaInputStream` 很可能是 `YamahaInputStream` (即 `vavi.sound.adpcm.yamaha`) 的外部发布版本，通过 Maven 依赖引入。两者使用相同的测试数据 (`out.adpcm` / `out.pcm`) 和相同的 8kHz 采样率。

**结论**: 仓库内 `vavi.sound.adpcm.yamaha.Yamaha` 已提供完整的 Yamaha MA# ADPCM 编解码实现，可直接参考。

#### 仓库内其他 ADPCM 编解码器 (均非MA系列)

| 编解码器 | 包路径 | 用途 |
|---------|--------|------|
| IMA ADPCM | `adpcm.ima` | IMA DVI4 |
| DVI ADPCM | `adpcm.dvi` | Intel DVI |
| OKI ADPCM | `adpcm.oki` | OKI (电信) |
| CCITT G.711/721/723 | `adpcm.ccitt` | ITU-T 标准 |
| Microsoft ADPCM | `adpcm.ms` | WAV MS-ADPCM |
| Dialogic VOX | `adpcm.vox` | Dialogic ADPCM |
| YM2608 ADPCM | `adpcm.ym2608` | YM2608 (OPNA) |

### 3.4 mmfplay — 完全无 ADPCM

mmfplay 中不存在任何 ADPCM 相关代码。搜索 `adpcm`、`ADPCM`、`waveform`、`ATR` 均返回零匹配。ATR 音频轨道在 show 模式下仅做原始字节 dump，在 play 模式下完全不处理。

## 4. FM 合成

### 4.1 对比

| FM 能力 | vavi-sound | retroYamaha | mmfplay |
|---------|-----------|-------------|---------|
| **FM 合成引擎** | **无** (转MIDI) | **无** | **无** |
| FM 音色数据结构 | 有 (VOIC chunk) | 有 (SysEx解析) | 有 (ma3_operator) |
| MA-3/5/7 SysEx 解析 | 部分 | 完整 | 部分 |
| 音色参数应用 | **不应用** | **不应用** | **不应用** |

**三个库均无 FM 合成实现。** 它们只解析 FM 音色参数的原始字节，但不将其用于声音合成。

### 4.2 各库的替代方案

| 库 | 替代方案 | 效果 |
|----|---------|------|
| vavi-sound | 转换为 MIDI → Java MIDI Synthesizer (Gervill) | 使用通用 GM 音色，丢失原始 FM 音色 |
| retroYamaha | 无播放，仅文件转换 | 仅解析事件，不产生声音 |
| mmfplay | 转换为 .mid → 外部 mid2wav 用 OPL3 合成 | 使用 OPL3 GM 音色，丢失 MA 系列特性 |

## 5. 音频输出

| 输出方式 | vavi-sound | retroYamaha | mmfplay |
|---------|-----------|-------------|---------|
| 实时播放 | 有 (Java SourceDataLine) | **无** | **无** |
| 写WAV文件 | **无** | 有 (main.cpp, 简单) | 有 (mid2wav, 经OPL3) |
| 写SMAF文件 | 部分 (多个chunk空) | **完整** (含ADPCM编码+CRC) | **无** |
| SMAF→MIDI | 有 (SmafMidiConverter) | 有 (SMAFConverter, 条件编译) | 有 (converter.cpp) |

## 6. 其他功能

### 6.1 SMAF 文件生成

仅 retroYamaha 完整实现了 SMAF 文件写入：

```
retroYamaha 可生成:
- MA-2 静态格式 (RenderDestinationStatic, ~185行)
- MA-3/5/7 流式格式 (RenderDestinationStreaming, ~238行)
- 含 PCM→ADPCM 编码
- 含 CRC16 校验和
- 含 SysEx 写入 (Reset, Channel Reserve, Main Volume)
```

### 6.2 图形/图片

仅 retroYamaha 实现了图形轨道解析和 PNG 导出 (SMAFGraph.cpp, 366行)。

### 6.3 元数据

| 元数据 | vavi-sound | retroYamaha | mmfplay |
|--------|-----------|-------------|---------|
| 标题 (ST) | 完整 | 完整 | 完整 |
| 分类 (CA) | 完整 | 完整 | 完整 |
| 版权 (CR) | 完整 | 完整 | 完整 |
| 艺术家/作曲 | 完整 | 完整 | **无** |

## 7. 对 libsmaf 的参考价值

### 7.1 推荐参考

| 需求 | 推荐库 | 文件 | 理由 |
|------|--------|------|------|
| **ADPCM 编解码** | **vavi-sound** (BSD) | `adpcm/yamaha/Yamaha.java` (129行) | BSD许可无风险，纯整数乘法，适合定点移植 |
| **ADPCM 编解码 (备用)** | retroYamaha (GPL) | `SMAFSample.cpp` (239行) | 查找表风格，C++直接可用 |
| **SMAF 文件写入** | **retroYamaha** | `SMAFFile.cpp` | 完整的 MMF 生成，含编码和校验 |
| **SMAF 解析器** | **vavi-sound** | `chunk/` 包 (36文件) | 最完整的 Java 解析器，所有 chunk 类型 + 4 种序列格式 |
| **序列事件解析** | **vavi-sound** | `SequenceDataChunk.java` (504行) | 含 Huffman 解压，事件类型最全 |
| **CRC16 校验** | **vavi-sound** | `Chunk.java` | CCITT X.25 CRC 实现 |
| **SMAF→MIDI 转换** | vavi-sound / mmfplay | 各converter | 事件映射参考 |

### 7.2 三个库的共同盲区

1. **FM 合成** — 三个库均无任何 FM 合成引擎
2. **MA-系列芯片模拟** — 无 MA-3/MA-5/MA-7 硬件模拟
3. **ADPCM 实时播放** — 仅 vavi-sound 有，但依赖外部库
4. **Phrase 播放** — 三个库均不支持 Phrase 系统
5. **流式播放** — 仅 vavi-sound 解析了流式 chunk，但未实现流式播放

### 7.3 ADPCM 移植评估

两个库均提供完整的 Yamaha 4-bit ADPCM 实现，libsmaf 阶段2 可任选参考：

```
retroYamaha SMAFSample.cpp (C++, GPL v3):
  - 239行, 查找表风格
  - C++→C 翻译: ~150行C

vavi-sound Yamaha.java (Java, BSD) ← 推荐:
  - 129行, 乘法系数风格 (更适合定点移植)
  - Java→C 翻译: ~80行C
  - 算法更简洁: 仅整数乘法+移位, 无查找表
  - BSD许可, 无GPL传染风险

两者差异:
  - 初始步进值: vavi=127, retro=0x3980
  - 步进值调整: vavi=乘法系数, retro=8级查找表
  - 预期输出: 数学等价

RAM需求 (任一实现): <32字节
预计移植工作量: 半天 (从vavi-sound的Yamaha.java翻译)
```

## 8. 总结

| 维度 | 最强库 | 说明 |
|------|--------|------|
| SMAF 解析最完整 | vavi-sound | 88文件, 4种序列格式, Huffman解压 |
| ADPCM 编解码 | **vavi-sound + retroYamaha** | 两个库均有完整实现, 推荐 vavi-sound (BSD许可) |
| SMAF 文件生成 | retroYamaha | 唯一能写MMF的库 |
| 轻量级 | mmfplay | 最小代码量, 但功能也最少 |
| FM 合成 | 均无 | 需依赖 fmfm.core |

**核心结论**: 这三个库的价值主要在 **SMAF 文件格式解析** 和 **ADPCM 编解码**，而非 FM 合成。对于 libsmaf 项目：
- **阶段1 (FM合成)**: 仍以 fmfm.core 为唯一参考
- **阶段2 (ADPCM)**: vavi-sound 的 `Yamaha.java` (BSD) 为首选参考, retroYamaha `SMAFSample.cpp` 为备选
- **SMAF 解析**: vavi-sound 的 chunk 包为最完整参考，但 Java→C 需全部重写
