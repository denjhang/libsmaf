@echo off
setlocal
set "JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-26.0.1.8-hotspot"
set "PATH=%JAVA_HOME%\bin;%PATH%"
set "GHIDRA_HOME=D:\Program Files\ghidra_12.1_PUBLIC_20260513\ghidra_12.1_PUBLIC"
set "PROJECT_DIR=C:\Users\denjhang\AppData\Local\Temp\ghidra_projects"
set "GHIDRA_EXPORT_DIR=D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter\ghidra_output_fc10"

set "OSGI_CACHE=C:\Users\denjhang\AppData\Roaming\ghidra\ghidra_12.1_PUBLIC\osgi\compiled-bundles\fd69aa21"
if exist "%OSGI_CACHE%\ExportDecompiled*" del /q "%OSGI_CACHE%\ExportDecompiled*"

if exist "%PROJECT_DIR%\ghidra_fc10" rd /s /q "%PROJECT_DIR%\ghidra_fc10"

"%GHIDRA_HOME%\support\analyzeHeadless.bat" "%PROJECT_DIR%" ghidra_fc10 -import "D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\libsmaf\tools\yamaha_converter\ghidra_dlls\Fc10.dll" -postScript ExportDecompiled -scriptPath "%GHIDRA_HOME%\Ghidra\Features\Decompiler\ghidra_scripts"
