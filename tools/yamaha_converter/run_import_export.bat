@echo off
setlocal
set "JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-26.0.1.8-hotspot"
set "PATH=%JAVA_HOME%\bin;%PATH%"
set "GHIDRA_HOME=D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC"
set "PROJECT_DIR=C:\Users\denjhang\AppData\Local\Temp\ghidra_projects"
set "GHIDRA_EXPORT_DIR=D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter\ghidra_output"

if exist "C:\Users\denjhang\AppData\Roaming\ghidra\ghidra_12.1_PUBLIC\osgi\compiled-bundles\fd69aa21\ExportDecompiled*" del /q "C:\Users\denjhang\AppData\Roaming\ghidra\ghidra_12.1_PUBLIC\osgi\compiled-bundles\fd69aa21\ExportDecompiled*"

REM Delete project to force re-import
if exist "%PROJECT_DIR%\ssd_analysis2" rd /s /q "%PROJECT_DIR%\ssd_analysis2"

"%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" ssd_analysis2 -import "D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter\SSD.exe" -postScript ExportDecompiled -scriptPath "%GHIDRA_HOME%\Ghidra\Features\Decompiler\ghidra_scripts"
