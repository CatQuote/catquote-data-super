@echo off
rmdir /s /q build
mkdir build && cd build
cmake .. -G "NMake Makefiles"
nmake
cd ..