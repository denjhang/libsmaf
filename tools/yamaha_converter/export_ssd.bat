@echo off
setlocal enabledelayedexpansion

echo Step 2: Exporting decompiled code...
echo.

set "JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-26.0.1.8-hotspot"
set "PATH=%JAVA_HOME%\bin;%PATH%"
set "GHIDRA_HOME=D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC"
set "PROJECT_DIR=C:\Users\denjhang\AppData\Local\Temp\ghidra_projects"
set "GHIDRA_EXPORT_DIR=D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter\ghidra_output"

echo Export directory: %GHIDRA_EXPORT_DIR%
echo.

"%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" ssd_analysis -process "SSD.exe" -noanalysis -postScript ExportDecompiled -scriptPath "%GHIDRA_HOME%\Ghidra\Features\Decompiler\ghidra_scripts"

echo.
echo ============================================================
echo Export complete!
echo ============================================================
echo.
echo Output: %GHIDRA_EXPORT_DIR%
echo.
dir "%GHIDRA_EXPORT_DIR%"
echo.
pause
