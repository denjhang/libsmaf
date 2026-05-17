@echo off
set "JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-26.0.1.8-hotspot"
set "PATH=%JAVA_HOME%\bin;%PATH%"

set "GHIDRA_HOME=D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC"
set "DECOMP_SCRIPTS=%GHIDRA_HOME%\Ghidra\Features\Decompiler\ghidra_scripts"
set "PROJECT_DIR=C:\Users\denjhang\AppData\Local\Temp\ghidra_projects"

if "%1"=="arm64" (
    set "GHIDRA_EXPORT_DIR=D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\docs\ghidra_ma7_arm64"
    "%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" ma7_arm64 -process "libM7_EmuSmw7.so" -noanalysis -postScript ExportDecompiled.java -scriptPath "%DECOMP_SCRIPTS%"
) else if "%1"=="arm32" (
    set "GHIDRA_EXPORT_DIR=D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\docs\ghidra_ma7_arm32"
    "%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" ma7_arm32 -process "libM7_EmuSmw7.so" -noanalysis -postScript ExportDecompiled.java -scriptPath "%DECOMP_SCRIPTS%"
) else (
    echo Usage: run_ghidra_export.bat [arm64^|arm32]
)
