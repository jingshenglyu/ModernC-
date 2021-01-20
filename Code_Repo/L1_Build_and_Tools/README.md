<!--
 * @Author: Jingsheng Lyu
 * @Date: 2021-01-19 20:57:03
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2021-01-20 22:37:00
 * @FilePath: /ModernCpp/Code_Repo/L1_Build_and_Tools/README.md
 * @Github: https://github.com/jingshenglyu
 * @Web: https://jingshenglyu.github.io/
 * @E-Mail: jingshenglyu@gmail.com
-->
## Compilation
1. Compilation process
   * What is a **compiler**?
   * easiest compile command 
      * c++ main.cpp / clang++ main.cpp
      * This will build a program call **a.out** that it is ready to run.
2. 4 steps for compiler
   1. Pre-process `clang++ -E main.cpp`  It will generate **main.i**.
   2. Compile `clang++ -S main.i` It will generate **main.s**.
   3. Assembly `clamng++ -c main.s` It will generate **main.o**.
   4. Link `clang++ main.o -o main`
3. Libraries
   1. Definition
      1. Collection of symbols and function implementations
4. Declaration and definition
5. Header / Source Separation   
   1. Move all declarations to .h
   2. Implementation goes to .cpp or .cc

## Build Systems
1. Build
    * All files -build-> the executable file

    1. Build Commands
        ```diff
        ! c++ -std=c++17 -c xxx.cpp -o xxx.o 
        ! ar rcs xxx.a xxx.o <other_modules> 
        - c++ -std=c++17 main.cpp -L . -ltools
        ```

    2. For a script
        ```diff
        ! add_library(xxx xxx.cpp)@@
        - add_executable(main main.cpp)+
         target_link_librarie(main xxx)
        ``` 
## Build
```
mkdir build
cd build
cmake ..
make
```

## Refresh: everything is broken.
```
cd project/build
make clean [remove generated binaries]
rm -rf * [make sure you are in build/ folder]
```

Short way: If you are in project/
```
rm -rf build/
```