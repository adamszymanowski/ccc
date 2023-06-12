@echo off

set target_exe="builds\%1.exe"
set project_root=%~dp0
if exist %target_exe% (
    devenv /edit %project_root%sources\%1.cpp /debugexe %target_exe%
) else (
    echo Target executable %target_exe% does not exist! Cannot debug.
)