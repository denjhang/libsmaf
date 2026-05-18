@echo off
setlocal
set "JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-26.0.1.8-hotspot"
set "PATH=%JAVA_HOME%\bin;%PATH%"
set "GHIDRA_HOME=D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC"
set "PROJECT_DIR=C:\Users\denjhang\AppData\Local\Temp\ghidra_projects"
set "DLL_DIR=D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter\ghidra_dlls"
set "OUT_DIR=D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter\ghidra_output_ssddll"

REM Delete OSGi compiled cache
set "OSGI_CACHE=C:\Users\denjhang\AppData\Roaming\ghidra\ghidra_12.1_PUBLIC\osgi\compiled-bundles\fd69aa21"
if exist "%OSGI_CACHE%\ExportDecompiled*" del /q "%OSGI_CACHE%\ExportDecompiled*"

mkdir "%OUT_DIR%" 2>nul

REM Analyze each DLL with unique project name
for %%D in (
    Ssd_sscma3.dll
    Ssd_sscma2.dll
    Ssd_sscma5.dll
    Ssd_Parser.dll
    Ssd_VoiceCtrl.dll
    CnvMA3SMF.dll
    CnvMA5SMF.DLL
) do (
    echo.
    echo ============================================
    echo Analyzing %%D
    echo ============================================
    set "PRJ=ghidra_%%~nD"

    REM Generate safe output filename
    set "OUTFILE=%OUT_DIR%\%%~nD_decompiled.c"

    REM Delete old project
    if exist "%PROJECT_DIR%\%PRJ%" rd /s /q "%PROJECT_DIR%\%PRJ%"

    "%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" %PRJ% -import "%DLL_DIR%\%%D" -postScript ExportDecompiled -scriptPath "%GHIDRA_HOME%\Ghidra\Features\Decompiler\ghidra_scripts"

    REM Move output to final location
    if exist "ghidra_output\all_decompiled.c" (
        move /y "ghidra_output\all_decompiled.c" "%OUTFILE%"
        echo Output: %OUTFILE%
    ) else (
        echo WARNING: No output for %%D
    )
)

echo.
echo ============================================
echo All done!
echo ============================================
