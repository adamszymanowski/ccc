@echo off

mkdir builds
pushd builds
cl ..\sources\%1.cpp -Od -Zi -EHsc /std:c++17
popd ..