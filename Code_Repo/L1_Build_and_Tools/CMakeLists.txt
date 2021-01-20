cmake_minimum_required(VERSION 3.16)    #Mandatory
project(first_project)                  #Mandatory (project name)
set(CMAKE_CXX_STANDARD 17)              #Use c++17 (replace -std=c++17)

# tell cmake where to look for *.hpp, *.h files
# include_directories(include/)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)   #important
# generate compile_commands.json. This file include all commands for compile.

# create library "libtools"
add_library(tools tools.cpp)        #creates libtools.a

# add executable main
add_executable(main main.cpp) #main.o

#tell the linker to bind these objects together
target_link_libraries(main tools)       # ./main