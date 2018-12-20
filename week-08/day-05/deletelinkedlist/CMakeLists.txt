cmake_minimum_required(VERSION 3.12)
project(deletelinkedlist C)

set(CMAKE_C_STANDARD 99)

add_executable(deletelinkedlist main.c linkedlist.c linkedlist.h)