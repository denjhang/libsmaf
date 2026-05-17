// Ghidra headless script: export decompiled C code for all exported functions
// Usage: analyzeHeadless ... -postScript ExportDecompiledFunctions.java
// @category Export

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.SymbolTable;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class ExportDecompiledFunctions extends GhidraScript {

    @Override
    public void run() throws Exception {
        String outDir = System.getenv("GHIDRA_EXPORT_DIR");
        if (outDir == null || outDir.isEmpty()) {
            outDir = "ghidra_output";
        }

        File dir = new File(outDir);
        dir.mkdirs();

        FunctionManager fm = currentProgram.getFunctionManager();
        SymbolTable symTable = currentProgram.getSymbolTable();
        DecompInterface dm = new DecompInterface();
        dm.openProgram(currentProgram);

        // Collect all exported functions
        java.util.List<Function> exports = new java.util.ArrayList<>();
        long iter = symTable.getExternalEntryPointIterator();
        while (iter.hasNext()) {
            long entry = iter.next();
            Function func = fm.getFunctionAt(entry);
            if (func != null) {
                exports.add(func);
            }
        }

        // Sort by name
        exports.sort((a, b) -> a.getName().compareTo(b.getName()));

        println("Found " + exports.size() + " exported functions");

        int success = 0;
        int skipped = 0;
        int errors = 0;

        for (Function func : exports) {
            String name = func.getName();

            // Skip C++ mangled and internal
            if (name.startsWith("_Z") || name.startsWith("__")) {
                skipped++;
                continue;
            }

            try {
                DecompileResults results = dm.decompileFunction(func, 120, monitor);
                if (results.getDecompiledFunction() == null) {
                    println("SKIP (no result): " + name);
                    errors++;
                    continue;
                }

                String cCode = results.getDecompiledFunction().getC();
                if (cCode == null || cCode.trim().isEmpty()) {
                    println("SKIP (empty): " + name);
                    errors++;
                    continue;
                }

                String safeName = name.replace("/", "_").replace("\\", "_");
                File f = new File(dir, safeName + ".c");
                FileWriter writer = new FileWriter(f);
                writer.write("/* Function: " + name + " */\n");
                writer.write("/* Address: " + func.getEntryPoint() + " */\n");
                writer.write("/* Size: " + func.getBody().getNumAddresses() + " bytes */\n\n");
                writer.write(cCode);
                writer.close();
                success++;
                println("OK: " + name + " (" + func.getBody().getNumAddresses() + " bytes)");
            } catch (Exception e) {
                println("ERROR: " + name + ": " + e.getMessage());
                errors++;
            }
        }

        dm.dispose();

        String summary = "Total: " + exports.size() + ", Decompiled: " + success
            + ", Skipped(mangled): " + skipped + ", Errors: " + errors;
        println(summary);

        // Write summary
        File sumFile = new File(dir, "_summary.txt");
        FileWriter writer = new FileWriter(sumFile);
        writer.write("Program: " + currentProgram.getName() + "\n");
        writer.write("Architecture: " + currentProgram.getLanguage().getLanguageID() + "\n");
        writer.write("Compiler: " + currentProgram.getCompilerSpec().getCompilerSpecID() + "\n");
        writer.write(summary + "\n\n");
        writer.write("=== Successfully decompiled ===\n");
        for (Function func : exports) {
            String name = func.getName();
            if (name.startsWith("_Z") || name.startsWith("__")) continue;
            String safeName = name.replace("/", "_").replace("\\", "_");
            File cf = new File(dir, safeName + ".c");
            if (cf.exists()) {
                writer.write("  " + padRight(name, 50) + " " + func.getEntryPoint()
                    + "  " + func.getBody().getNumAddresses() + " bytes\n");
            }
        }
        writer.write("\n=== Skipped (C++ mangled) ===\n");
        for (Function func : exports) {
            String name = func.getName();
            if (name.startsWith("_Z")) {
                writer.write("  " + name + "\n");
            }
        }
        writer.close();
    }

    private String padRight(String s, int n) {
        if (s.length() >= n) return s;
        StringBuilder sb = new StringBuilder(s);
        while (sb.length() < n) sb.append(' ');
        return sb.toString();
    }
}
