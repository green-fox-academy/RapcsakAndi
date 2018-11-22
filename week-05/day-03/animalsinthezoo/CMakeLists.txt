cmake_minimum_required(VERSION 3.12)
project(animalsinthezoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(animalsinthezoo main.cpp animal.cpp animal.h Reptile.cpp Reptile.h Mammal.cpp Mammal.h Bird.cpp Bird.h)