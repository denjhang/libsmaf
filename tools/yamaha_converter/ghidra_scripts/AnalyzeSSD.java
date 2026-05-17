import ghidra.app.decompiler.*;
import ghidra.app.decompiler.compile.*;
import ghidra.app.script.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.*;
import java.io.*;

/**
 * Analyze SSD.exe for CnvTo function usage
 * Extracts the correct configuration structure and calling convention
 */
public class AnalyzeSSD extends GhidraScript {

    @Override
    public void run() throws Exception {
        String exportDir = System.getenv("GHIDRA_EXPORT_DIR");
        if (exportDir == null) {
            exportDir = "D:\\working\\vscode-projects\\Reference_Project\\RP2350-Reference\\smaf_20260516\\libsmaf\\tools\\yamaha_converter\\ghidra_output";
        }

        File outDir = new File(exportDir);
        if (!outDir.exists()) {
            outDir.mkdirs();
        }

        PrintWriter writer = new PrintWriter(new FileWriter(
            new File(outDir, "ssd_analysis.txt")));

        try {
            // Find CnvTo function calls
            writer.println("=== SSD.exe CnvTo Usage Analysis ===\n");

            // Find external reference to CnvTo
            ExternalManager extMgr = currentProgram.getExternalManager();
            FunctionManager funcMgr = currentProgram.getFunctionManager();

            // Search for CnvTo import
            writer.println("Searching for CnvTo references...\n");

            boolean found = false;
            FunctionIterator funcs = funcMgr.getFunctions(true);
            while (funcs.hasNext()) {
                Function func = funcs.next();

                // Check if this function calls CnvTo
                Listing listing = currentProgram.getListing();
                InstructionIterator instructions = listing.getInstructionIterator(func.getBody(), true);

                while (instructions.hasNext()) {
                    Instruction instr = instructions.next();

                    // Check for external calls
                    Address[] refs = instr.getReferencesFrom();
                    for (Address ref : refs) {
                        if (ref.getExternalAddress() != null) {
                            String refName = ref.getExternalAddress().toString();
                            if (refName.contains("CnvTo")) {
                                writer.println("Found CnvTo call at: " + instr.getAddress());
                                writer.println("  In function: " + func.getName());
                                writer.println("  Instruction: " + instr);

                                // Try to decompile this function
                                try {
                                    DecompInterface decompiler = new DecompInterface();
                                    decompiler.openProgram(currentProgram);

                                    DecompileResults res = decompiler.decompileFunction(
                                        func, DecompileOptions.getDefaultDiagnostics(), monitor);

                                    writer.println("\n  Decompiled code:");
                                    writer.println(res.getDecompiledCode());

                                    decompiler.dispose();
                                } catch (Exception e) {
                                    writer.println("  Decompilation failed: " + e.getMessage());
                                }

                                writer.println("\n  ---\n");
                                found = true;
                            }
                        }
                    }
                }
            }

            if (!found) {
                writer.println("No direct CnvTo calls found. Searching for indirect calls...\n");

                // Search for LoadLibrary calls that might load CnvMA3SMF.dll
                funcs = funcMgr.getFunctions(true);
                while (funcs.hasNext()) {
                    Function func = funcs.next();
                    String funcName = func.getName().toLowerCase();

                    if (funcName.contains("loadlibrary") || funcName.contains("getprocaddress")) {
                        writer.println("\nFound: " + func.getName());
                        writer.println("  Address: " + func.getEntryPoint());

                        try {
                            DecompInterface decompiler = new DecompInterface();
                            decompiler.openProgram(currentProgram);

                            DecompileResults res = decompiler.decompileFunction(
                                func, DecompileOptions.getDefaultDiagnostics(), monitor);

                            writer.println("\n  Code:\n" + res.getDecompiledCode());

                            decompiler.dispose();
                        } catch (Exception e) {
                            writer.println("  Error: " + e.getMessage());
                        }

                        writer.println("\n  ---\n");
                    }
                }
            }

            // List all imported DLLs
            writer.println("\n=== Imported DLLs ===\n");
            ExternalManager extMgr = currentProgram.getExternalManager();
            ExternalLocationIterator extLocs = extMgr.getExternalLocations();

            while (extLocs.hasNext()) {
                ExternalLocation extLoc = extLocs.next();
                String extName = extLoc.getExternalAddress().toString();

                if (extName.endsWith(".dll") || extName.endsWith(".DLL")) {
                    writer.println("  " + extName);
                }
            }

            writer.println("\n=== Analysis Complete ===");

        } finally {
            writer.close();
        }
    }
}
