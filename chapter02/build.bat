@echo off

mkdir builds
pushd builds
cl ../%1 -Zi -EHsc

popd ..