# Ghidra headless script: export decompiled C code for exported functions
# Usage: analyzeHeadless ... -postScript ghidra_export_headless.py -scriptPath /path/to/script
# @category Export
import ghidra.app.decompiler as decompiler
import ghidra.program.model.symbol as symbol
import java.io as jio
import os

# Output directory from environment variable or default
OUTDIR = os.environ.get("GHIDRA_EXPORT_DIR", "ghidra_output")

program = getCurrentProgram()
fm = program.getFunctionManager()
dm = decompiler.DecompInterface()
dm.openProgram(program)

# Collect all externally visible functions
exports = []
sym_table = program.getSymbolTable()
for sym in sym_table.getExternalEntryPointIterator():
    func = fm.getFunctionAt(sym)
    if func is not None:
        exports.append(func)

exports.sort(key=lambda f: f.getName())

print("Found %d exported functions" % len(exports))

out_dir = jio.File(OUTDIR)
out_dir.mkdirs()

success = 0
skipped = 0
errors = 0

for func in exports:
    name = func.getName()

    # Skip C++ mangled names and internal symbols
    if name.startswith("_Z") or name.startswith("__"):
        skipped += 1
        continue

    try:
        results = dm.decompileFunction(func, 120, monitor)
        if results.depiledFunction is None:
            print("SKIP (no result): %s" % name)
            errors += 1
            continue

        c_code = results.getDecompiledFunction().getC()
        if c_code is None or len(c_code.strip()) == 0:
            print("SKIP (empty): %s" % name)
            errors += 1
            continue

        safe_name = name.replace("/", "_").replace("\\", "_")
        f = jio.File(out_dir, safe_name + ".c")
        writer = jio.FileWriter(f)
        writer.write("/* Function: %s */\n" % name)
        writer.write("/* Address: 0x%s */\n" % func.getEntryPoint())
        writer.write("/* Size: %d bytes */\n\n" % func.getBody().getNumAddresses())
        writer.write(c_code)
        writer.close()
        success += 1
        print("OK: %s (%d bytes)" % (name, func.getBody().getNumAddresses()))
    except Exception as e:
        print("ERROR: %s: %s" % (name, str(e)))
        errors += 1

dm.dispose()

summary = "Total: %d, Decomiled: %d, Skipped(mangled): %d, Errors: %d" % (len(exports), success, skipped, errors)
print(summary)

# Write summary
f = jio.File(out_dir, "_summary.txt")
writer = jio.FileWriter(f)
writer.write("Program: %s\n" % program.getName())
writer.write("Architecture: %s\n" % program.getLanguage().getLanguageID())
writer.write("Compiler: %s\n" % program.getCompilerSpec().getCompilerSpecID())
writer.write(summary + "\n\n")

writer.write("=== Successfully decompiled ===\n")
for func in exports:
    name = func.getName()
    if name.startswith("_Z") or name.startswith("__"):
        continue
    safe_name = name.replace("/", "_").replace("\\", "_")
    cfile = jio.File(out_dir, safe_name + ".c")
    if cfile.exists():
        writer.write("  %-50s 0x%s  %d bytes\n" % (name, func.getEntryPoint(), func.getBody().getNumAddresses()))

writer.write("\n=== Skipped (C++ mangled) ===\n")
for func in exports:
    name = func.getName()
    if name.startswith("_Z"):
        writer.write("  %s\n" % name)

writer.close()
