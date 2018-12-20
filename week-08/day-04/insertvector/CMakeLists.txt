cmake_minimum_required(VERSION 3.12)
project(insertvector C)

set(CMAKE_C_STANDARD 99)

add_executable(insertvector main.c vector.c vector.h)