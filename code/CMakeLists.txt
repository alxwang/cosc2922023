
cmake_minimum_required(VERSION 3.24)
project(code C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_REQUIRED_FLAGS "-Wl,--dynamicbase")
#add_executable(code Intro/App.c)
#add_executable(code Header/App.c Header/pingpong.c Header/autopingpong.h Header/autopingpong.c)
#add_executable(code Memory/App.c Memory/memmap.c)
add_executable(code input/inputfuncs.c)

