cmake_minimum_required(VERSION 3.12)
project(garden)

set(CMAKE_CXX_STANDARD 14)

add_executable(garden main.cpp Tree.cpp Tree.h Flower.cpp Flower.h Plant.cpp Plant.h Garden.cpp Garden.h)