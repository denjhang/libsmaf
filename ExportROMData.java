// ExportROMData.java — 从 Ghidra 项目中导出 MA-7 ROM 波形数据
// 放置于: Ghidra/Features/Decompiler/ghidra_scripts/
// 用法: analyzeHeadless ... -process "libM7_EmuSmw7.so" -noanalysis -postScript ExportROMData.java

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryAccessException;
import java.io.*;

public class ExportROMData extends GhidraScript {
    @Override
    public void run() throws Exception {
        String outDirStr = System.getenv("GHIDRA_EXPORT_DIR");
        if (outDirStr == null) {
            outDirStr = System.getProperty("user.home");
        }
        File outDir = new File(outDirStr);
        outDir.mkdirs();

        Memory mem = currentProgram.getMemory();

        // 定义要导出的数据块
        // 格式: {名称, 起始地址, 大小(字节), 描述}
        String[][] dataBlocks = {
            // FM 波形表 (每表 1024 × int16 = 2048 字节)
            // 这些地址来自 CFmSynth 构造函数中 this+0x6820/0x6828/0x6830 的赋值
            {"fm_wave_11025_t0", "0x003bf7c0", "2048", "FM wave table 11025Hz slot0"},
            {"fm_wave_11025_t1", "0x003bf8c0", "2048", "FM wave table 11025Hz slot1"},
            {"fm_wave_11025_t2", "0x003bf9c0", "2048", "FM wave table 11025Hz slot2"},
            {"fm_wave_16000_t0", "0x003bf9d0", "2048", "FM wave table 16000Hz slot0"},
            {"fm_wave_16000_t1", "0x003bfad0", "2048", "FM wave table 16000Hz slot1"},
            {"fm_wave_16000_t2", "0x003bfbd0", "2048", "FM wave table 16000Hz slot2"},
            {"fm_wave_22050_t0", "0x003bf7c0", "2048", "FM wave table 22050Hz slot0 (same as 11025)"},
            {"fm_wave_22050_t1", "0x003bfbe0", "2048", "FM wave table 22050Hz slot1"},
            {"fm_wave_22050_t2", "0x003bfce0", "2048", "FM wave table 22050Hz slot2"},
            {"fm_wave_24000_t0", "0x003bfcf0", "2048", "FM wave table 24000Hz slot0"},
            {"fm_wave_24000_t1", "0x003bfdf0", "2048", "FM wave table 24000Hz slot1"},
            {"fm_wave_24000_t2", "0x003bfef0", "2048", "FM wave table 24000Hz slot2"},
            {"fm_wave_32000_t0", "0x003c0320", "2048", "FM wave table 32000Hz slot0"},
            {"fm_wave_32000_t1", "0x003c0420", "2048", "FM wave table 32000Hz slot1"},
            {"fm_wave_32000_t2", "0x003c0520", "2048", "FM wave table 32000Hz slot2"},
            {"fm_wave_44100_t0", "0x003bff00", "2048", "FM wave table 44100Hz slot0"},
            {"fm_wave_44100_t1", "0x003c0000", "2048", "FM wave table 44100Hz slot1"},
            {"fm_wave_44100_t2", "0x003c0100", "2048", "FM wave table 44100Hz slot2"},
            {"fm_wave_48000_t0", "0x003c0110", "2048", "FM wave table 48000Hz slot0"},
            {"fm_wave_48000_t1", "0x003c0210", "2048", "FM wave table 48000Hz slot1"},
            {"fm_wave_48000_t2", "0x003c0310", "2048", "FM wave table 48000Hz slot2"},

            // LFO 正弦表 (4096 × int32 = 16384 字节)
            {"lfo_sine_4096", "0x0028d0f0", "16384", "LFO sine table 4096 entries"},

            // ROM 波形源数据 (64KB)
            {"rom_wave_source", "0x0027bf50", "65536", "ROM wave source data 64KB"},

            // WT 波形表
            {"wt_wave_48000_t0", "0x0031f460", "256", "WT wave 48000Hz table0"},
            {"wt_wave_48000_t1", "0x0031f560", "256", "WT wave 48000Hz table1"},
            {"wt_wave_48000_t2", "0x0031f660", "16", "WT wave 48000Hz table2"},
            {"wt_wave_48000_t3", "0x0031f670", "16", "WT wave 48000Hz table3"},

            // 默认音色参数表 (从 MaCmd_NoteOn 引用)
            // 音高表 (256 × int16 = 512 字节)
            {"fm_pitch_table", "0x0052f850", "512", "FM pitch lookup table"},

            // WT 周期表
            {"wt_period_table1", "0x00530150", "256", "WT period table 1"},
            {"wt_period_table2", "0x00530240", "256", "WT period table 2"},

            // 默认 AL/FL 参数表 (128 条目)
            {"fm_default_al_fl", "0x00531250", "256", "FM default AL/FL params"},

            // 对数量化表
            {"wt_log2_table", "0x00531150", "256", "WT log2 quantize table"},

            // WT 波号查找表 (128 × uint16 = 256 字节)
            {"wt_wave_number_lut", "0x00532d60", "256", "WT wave number lookup"},

            // CSM/HV 波形数据
            {"csm_wave_48000", "0x00331970", "256", "CSM wave 48000Hz"},
            {"csm_area_48000", "0x00331b80", "64", "CSM area 48000Hz"},
            {"csm_aux_48000", "0x00331bb0", "64", "CSM aux 48000Hz"},

            // ADPCM 步进表 (从 oscSlot_4 引用, 8 × uint16 = 16 字节)
            // 注意: 步进表可能内联在代码中而非独立数据段
            // {"adpcm_step_table", "0x????????", "16", "Yamaha 4-bit ADPCM step table"},
        };

        int okCount = 0;
        int errCount = 0;

        for (int i = 0; i < dataBlocks.length; i++) {
            String name = dataBlocks[i][0];
            long addrVal = Long.decode(dataBlocks[i][1]).longValue();
            int size = Integer.parseInt(dataBlocks[i][2]);
            String desc = dataBlocks[i][3];

            try {
                Address addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addrVal);

                if (!mem.contains(addr)) {
                    println("SKIP: " + name + " (address " + dataBlocks[i][1] + " not in memory)");
                    errCount++;
                    continue;
                }

                byte[] data = new byte[size];
                mem.getBytes(addr, data);

                // 也导出为 C 头文件格式 (int16 数组)
                File binFile = new File(outDir, name + ".bin");
                File cFile = new File(outDir, name + ".h");

                // 写二进制
                FileOutputStream fos = new FileOutputStream(binFile);
                fos.write(data);
                fos.close();

                // 写 C 头文件
                PrintWriter pw = new PrintWriter(new FileWriter(cFile));
                pw.println("// " + desc);
                pw.println("// Address: " + dataBlocks[i][1] + ", Size: " + size + " bytes");
                pw.print("const int16_t " + name + "[] = {");

                // int16 格式
                for (int j = 0; j < size / 2; j++) {
                    int lo = data[j * 2] & 0xFF;
                    int hi = data[j * 2 + 1] & 0xFF;
                    int val = (short)(lo | (hi << 8));
                    if (j % 16 == 0) pw.print("\n    ");
                    pw.print(val);
                    if (j < size / 2 - 1) pw.print(", ");
                }
                pw.println("\n};");
                pw.close();

                // 打印前几个值用于验证
                String preview = "";
                int previewCount = Math.min(4, size / 2);
                for (int j = 0; j < previewCount; j++) {
                    int lo = data[j * 2] & 0xFF;
                    int hi = data[j * 2 + 1] & 0xFF;
                    int val = (short)(lo | (hi << 8));
                    preview += val + " ";
                }
                println("OK: " + name + " (" + size + "B) [" + preview.trim() + "]");
                okCount++;
            } catch (Exception e) {
                println("ERR: " + name + " - " + e.getMessage());
                errCount++;
            }
        }

        println("Total: " + (okCount + errCount) + " OK:" + okCount + " Err:" + errCount);

        // 额外: 尝试查找 ADPCM 步进表的精确位置
        // 步进表值为: 0x3980, 0x3980, 0x3980, 0x3980, 0x4CC0, 0x6640, 0x8000, 0x9980
        // 在 .rodata 段中搜索这个模式
        println("\nSearching for ADPCM step table pattern...");
        byte[] pattern = new byte[16];
        int[] steps = {0x3980, 0x3980, 0x3980, 0x3980, 0x4CC0, 0x6640, 0x8000, 0x9980};
        for (int i = 0; i < 8; i++) {
            pattern[i * 2] = (byte)(steps[i] & 0xFF);
            pattern[i * 2 + 1] = (byte)((steps[i] >> 8) & 0xFF);
        }

        // Search in first 4MB
        Address searchStart = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(0);
        Address found = mem.findBytes(searchStart, pattern, null, true, null);
        if (found != null) {
            println("FOUND: ADPCM step table at " + found);
            byte[] adpcmData = new byte[16];
            mem.getBytes(found, adpcmData);
            File adpcmFile = new File(outDir, "adpcm_step_table.bin");
            FileOutputStream fos = new FileOutputStream(adpcmFile);
            fos.write(adpcmData);
            fos.close();
            okCount++;
        } else {
            println("NOT FOUND: ADPCM step table pattern in memory");
        }
    }
}
