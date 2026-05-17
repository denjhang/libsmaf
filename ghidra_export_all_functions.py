# Ghidra script: export decompiled C code for all exported functions
# @category Export
import ghidra.app.decompiler as decompiler
import ghidra.program.model.symbol as symbol
import java.io as jio

OUTDIR = askString("Output Directory", "Directory for decompiled C files:")
if OUTDIR is None:
    OUTDIR = "/tmp/ghidra_output"

program = getCurrentProgram()
fm = program.getFunctionManager()
listing = program.getListing()
dm = decompiler.DecompInterface()
dm.openProgram(program)

# Collect all exported functions
exports = []
sf = program.getSymbolTable().getExternalEntryPointIterator()
while sf.hasNext():
    entry = sf.next()
    func = fm.getFunctionAt(entry)
    if func is not None:
        exports.append(func.getName())

# Also collect functions from the export table directly
sym_table = program.getSymbolTable()
for sym in sym_table.getAllSymbols(True):
    if sym.isExternalEntryPoint():
        func = fm.getFunctionAt(sym.getAddress())
        if func is not None and func.getName() not in exports:
            exports.append(func.getName())

exports.sort()

print("Found %d exported functions" % len(exports))

out_dir = jio.File(OUTDIR)
out_dir.mkdirs()

success = 0
errors = 0

for name in exports:
    func = fm.getFunction(name)
    if func is None:
        continue

    # Skip non-interesting functions
    if name.startswith("_Z") or name.startswith("__"):
        continue

    try:
        results = dm.decompileFunction(func, 60, monitor)
        if results.depiledFunction is None:
            errors += 1
            continue

        c_code = results.getDecompiledFunction().getC()
        if c_code is None or len(c_code.strip()) == 0:
            errors += 1
            continue

        # Write to file
        safe_name = name.replace("/", "_").replace("\\", "_")
        f = jio.File(out_dir, safe_name + ".c")
        writer = jio.FileWriter(f)
        writer.write("/* Function: %s */\n" % name)
        writer.write("/* Address: %s */\n" % func.getEntryPoint())
        writer.write("/* Size: %d bytes */\n\n" % func.getBody().getNumAddresses())
        writer.write(c_code)
        writer.close()
        success += 1
    except Exception as e:
        print("Error decompiling %s: %s" % (name, str(e)))
        errors += 1

dm.dispose()

summary = "Exported: %d, Decomiled OK: %d, Errors: %d" % (len(exports), success, errors)
print(summary)

# Write summary
f = jio.File(out_dir, "_summary.txt")
writer = jio.FileWriter(f)
writer.write("Program: %s\n" % program.getName())
writer.write("Architecture: %s\n" % program.getLanguage().getLanguageID())
writer.write(summary + "\n\n")
writer.write("=== All exported functions ===\n")
for name in sorted(exports):
    func = fm.getFunction(name)
    if func:
        writer.write("%-50s %s (%d bytes)\n" % (name, func.getEntryPoint(), func.getBody().getNumAddresses()))
writer.close()
