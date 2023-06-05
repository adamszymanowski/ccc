@echo off

set target_exe="builds\%1.exe"
if exist %target_exe% (
    devenv /edit sources\%1.cpp /debugexe %target_exe%
) else (
    echo Target executable %target_exe% does not exist! Cannot debug.
)