// Ghidra headless script: export decompiled C code for ALL functions in SSD.exe
// Usage: analyzeHeadless ... -postScript ExportSSDFunctions.java -scriptPath /path/to/script
// @category Export

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Listing;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class ExportSSDFunctions extends GhidraScript {

    @Override
    public void run() throws Exception {
        String outDir = System.getenv("GHIDRA_EXPORT_DIR");
        if (outDir == null || outDir.isEmpty()) {
            outDir = "D:\\working\\vscode-projects\\Reference_Project\\RP2350-Reference\\smaf_20260516\\libsmaf\\tools\\yamaha_converter\\ghidra_output";
        }

        File dir = new File(outDir);
        dir.mkdirs();

        Listing listing = currentProgram.getListing();
        DecompInterface dm = new DecompInterface();
        dm.openProgram(currentProgram);

        // Collect ALL functions
        List<Function> allFuncs = new ArrayList<>();
        FunctionIterator iter = listing.getFunctions(currentProgram.getMinAddress(), true);
        while (iter.hasNext() && !monitor.isCancelled()) {
            allFuncs.add(iter.next());
        }

        println("Total functions found: " + allFuncs.size());

        // Write all decompiled code to a single file
        PrintWriter allWriter = new PrintWriter(new FileWriter(new File(dir, "all_decompiled.c")));
        PrintWriter summaryWriter = new PrintWriter(new FileWriter(new File(dir, "_summary.txt")));

        int success = 0;
        int errors = 0;
        int skipped = 0;

        // Filter out thunk and import functions
        List<Function> namedFuncs = new ArrayList<>();
        for (Function func : allFuncs) {
            String name = func.getName();
            // Skip thunk functions
            if (func.isThunk()) {
                skipped++;
                continue;
            }
            // Skip library/import functions
            if (name.startsWith("__imp_") || name.startsWith("_imp_")) {
                skipped++;
                continue;
            }
            namedFuncs.add(func);
        }

        println("After filtering: " + namedFuncs.size() + " functions to decompile");

        for (Function func : namedFuncs) {
            String name = func.getName();
            long addr = func.getEntryPoint().getOffset();

            try {
                DecompileResults results = dm.decompileFunction(func, 120, monitor);
                if (results == null || !results.decompileCompleted() || results.getDecompiledFunction() == null) {
                    allWriter.println("// Function: " + name + " at 0x" + Long.toHexString(addr) + " - DECOMPILATION FAILED");
                    allWriter.println();
                    errors++;
                    continue;
                }

                String cCode = results.getDecompiledFunction().getC();
                if (cCode == null || cCode.trim().isEmpty()) {
                    allWriter.println("// Function: " + name + " at 0x" + Long.toHexString(addr) + " - EMPTY OUTPUT");
                    allWriter.println();
                    errors++;
                    continue;
                }

                // Write to combined file
                allWriter.println("// ============================================================");
                allWriter.println("// Function: " + name);
                allWriter.println("// Address:  0x" + Long.toHexString(addr));
                allWriter.println("// Size:     " + func.getBody().getNumAddresses() + " bytes");
                allWriter.println("// ============================================================");
                allWriter.println(cCode);
                allWriter.println();

                // Write individual file for significant functions (> 10 bytes)
                if (func.getBody().getNumAddresses() > 10) {
                    String safeName = name.replace("/", "_").replace("\\", "_").replace(" ", "_");
                    File f = new File(dir, safeName + ".c");
                    FileWriter fw = new FileWriter(f);
                    fw.write("/* Function: " + name + " */\n");
                    fw.write("/* Address: 0x" + Long.toHexString(addr) + " */\n");
                    fw.write("/* Size: " + func.getBody().getNumAddresses() + " bytes */\n\n");
                    fw.write(cCode);
                    fw.close();
                }

                success++;
            } catch (Exception e) {
                allWriter.println("// Function: " + name + " at 0x" + Long.toHexString(addr) + " - ERROR: " + e.getMessage());
                allWriter.println();
                errors++;
            }
        }

        allWriter.close();

        // Write summary
        summaryWriter.println("Program: " + currentProgram.getName());
        summaryWriter.println("Architecture: " + currentProgram.getLanguage().getLanguageID());
        summaryWriter.println("Compiler: " + currentProgram.getCompilerSpec().getCompilerSpecID());
        summaryWriter.println("Total functions: " + allFuncs.size());
        summaryWriter.println("Filtered functions: " + namedFuncs.size());
        summaryWriter.println("Decompiled OK: " + success);
        summaryWriter.println("Skipped (thunk/import): " + skipped);
        summaryWriter.println("Errors: " + errors);
        summaryWriter.println();
        summaryWriter.println("=== All functions ===");
        for (Function func : namedFuncs) {
            String name = func.getName();
            long addr = func.getEntryPoint().getOffset();
            long size = func.getBody().getNumAddresses();
            summaryWriter.println(String.format("  0x%08X  %5d bytes  %s", addr, size, name));
        }
        summaryWriter.println();
        summaryWriter.println("=== Skipped ===");
        for (Function func : allFuncs) {
            String name = func.getName();
            if (func.isThunk() || name.startsWith("__imp_") || name.startsWith("_imp_")) {
                summaryWriter.println("  " + name);
            }
        }
        summaryWriter.close();

        dm.dispose();

        println("Done! Decompiled: " + success + ", Errors: " + errors + ", Skipped: " + skipped);
        println("Output in: " + outDir);
    }
}
