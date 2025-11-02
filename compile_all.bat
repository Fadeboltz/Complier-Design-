@echo off
cd /d "d:\AIUB MATERIALS\8th semester Fall 2025\Compiler Design\labworks"
setlocal enabledelayedexpansion
set "files="
for %%f in (*.cpp) do set "files=!files! "%%f""
"D:\mcyss\ucrt64\bin\g++.exe" -g %files% -o main.exe
if %errorlevel% neq 0 pause
endlocal
