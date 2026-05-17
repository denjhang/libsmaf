// ExportGMVoices.java - Export MA-7 GM voice tables from BSS
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import java.io.*;

public class ExportGMVoices extends GhidraScript {
    @Override
    public void run() throws Exception {
        String outDirStr = System.getenv("GHIDRA_EXPORT_DIR");
        if (outDirStr == null) outDirStr = System.getProperty("user.home");
        File outDir = new File(outDirStr);
        outDir.mkdirs();
        Memory mem = currentProgram.getMemory();

        long[][] tables = {
            {0x0052de00, 256,  "melody_param1_u16"},
            {0x0052df00, 256,  "melody_param2_u16"},
            {0x0052e000, 512,  "melody_voice_table"},
            {0x0052e080, 2560, "melody_param3_u16"},
            {0x0052e580, 1792, "melody_param4_u16"},
            {0x0052ec80, 256,  "drum_param_u16"},
            {0x0052ed80, 768,  "drum_voice_table"},
            {0x0052ea80, 512,  "drum_extra_u16"},
            {0x0052ee00, 128,  "drum_vel_table"},
            {0x0052ee80, 128,  "drum_pitch_table"},
            {0x005833c0, 65536, "rom_copy_target"},
            {0x0074a410, 26064, "voice_instance_seq0"},
        };

        int okCount = 0;
        int zeroCount = 0;

        for (long[] t : tables) {
            byte[] data = new byte[(int)t[1]];
            try {
                mem.getBytes(addr(t[0]), data);
            } catch (Exception e) {
                println("ERR: " + t[2] + " - " + e.getMessage());
                continue;
            }
            int nonZero = 0;
            for (byte b : data) if (b != 0) nonZero++;
            new java.io.FileOutputStream(new java.io.File(outDir, t[2] + ".bin")).write(data);
            String p = "";
            for (int i = 0; i < Math.min(16, data.length); i++) p += String.format("%02x", data[i] & 0xFF);
            if (nonZero == 0) {
                println("ZERO: " + t[2] + " (" + t[1] + "B)");
                zeroCount++;
            } else {
                println("OK: " + t[2] + " (" + t[1] + "B, " + nonZero + " nz) [" + p + "]");
                okCount++;
            }
        }
        println("\nTotal: OK:" + okCount + " Zero:" + zeroCount);
    }
    private Address addr(long a) {
        return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(a);
    }
}
