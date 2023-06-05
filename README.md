# C++ Crash Course
Code examples from [C++ Crash Course](https://ccc.codes/) book.

[Errata](https://ccc.codes/#errata)
- [`const` in wrong place](https://github.com/JLospinoso/ccc/issues/201)

I go through them one by one. I already know a bit about C, and a bit about C++
but I want to revise C++ in an organized manner.

# Environment

## Windows (msvc)
I use Visual Studio 2022. 
- `cl` for compiling, [options](https://docs.microsoft.com/en-us/cpp/build/reference/compiler-options?view=msvc-170)
- `devenv` for debugging, [options](https://learn.microsoft.com/en-us/visualstudio/ide/reference/devenv-command-line-switches?view=vs-2022)
but there are corresponding scripts to do that, see below:

MAKE SURE, you use **x64 Native Tools Command Prompt**, more on that [here](https://github.com/MicrosoftDocs/cpp-docs/blob/master/docs/build/building-on-the-command-line.md).

- **How to compile**
- run script, for example: `build.bat listing-1-1`
- **How to debug**
- run script, for example: `debug.bat listing-1-1`
- debugging shortcuts:
    - `F5` Start debugging
    - `F10` Step over
    - `F11` Step into
- **How to run**
- run script, for example: `run.bat listing-1-1`

 
## Linux (gcc)
I use `g++`
- **How to compile**
- run script, for example: `build.sh listing-1-1` - make sure you `chmod +x build.sh` before you run it.
- **How to debug**
- TODO

### References and Notes
Build script based on [this](https://davidgow.net/handmadepenguin/ch1.html)
- `mkdir -p builds` the `-p` option 