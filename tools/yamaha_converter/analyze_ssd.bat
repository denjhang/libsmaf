@echo off
setlocal enabledelayedexpansion

echo ============================================================
echo SSD.exe Ghidra Analysis (Following GHIDRA_HEADLESS_GUIDE.md)
echo ============================================================
echo.

set "JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-26.0.1.8-hotspot"
set "PATH=%JAVA_HOME%\bin;%PATH%"
set "GHIDRA_HOME=D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC"
set "PROJECT_DIR=C:\Users\denjhang\AppData\Local\Temp\ghidra_projects"
set "GHIDRA_EXPORT_DIR=D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter\ghidra_output"
set "WORK_DIR=D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter"

echo Configuration:
echo   JAVA_HOME=%JAVA_HOME%
echo   PROJECT_DIR=%PROJECT_DIR%
echo   GHIDRA_EXPORT_DIR=%GHIDRA_EXPORT_DIR%
echo   WORK_DIR=%WORK_DIR%
echo.

REM Create output directory
if not exist "%GHIDRA_EXPORT_DIR%" mkdir "%GHIDRA_EXPORT_DIR%"

REM Clear OSGi cache
echo Clearing OSGi cache...
if exist "C:\Users\denjhang\AppData\Roaming\ghidra\ghidra_12.1_PUBLIC\compiled_scripts" (
    rd /s /q "C:\Users\denjhang\AppData\Roaming\ghidra\ghidra_12.1_PUBLIC\compiled_scripts"
)

REM Step 1: Import and analyze (no script yet)
"%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" ssd_analysis -import "%WORK_DIR%\SSD.exe"

echo.
echo ============================================================
echo Step 1 Complete: Program imported and analyzed
echo Now running export script...
echo ============================================================
echo.

REM Step 2: Export with script (reuse analysis, noanalysis is critical)
"%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" ssd_analysis -process "SSD.exe" -noanalysis -postScript ExportDecompiled -scriptPath "%GHIDRA_HOME%\Ghidra\Features\Decompiler\ghidra_scripts"

echo.
echo ============================================================
echo Analysis complete!
echo ============================================================
echo.
echo Output directory: %GHIDRA_EXPORT_DIR%
echo.
if exist "%GHIDRA_EXPORT_DIR%\ssd_cnvto_analysis.txt" (
    echo Contents of ssd_cnvto_analysis.txt:
    type "%GHIDRA_EXPORT_DIR%\ssd_cnvto_analysis.txt"
) else (
    echo No ssd_cnvto_analysis.txt found
)
echo.
pause
