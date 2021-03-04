@echo off

mkdir builds
pushd builds
cl ../%1 -Zi -EHsc Kernel32.lib

popd ..