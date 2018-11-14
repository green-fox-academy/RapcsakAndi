cmake_minimum_required(VERSION 3.12)
project(fleetofthings)

set(CMAKE_CXX_STANDARD 14)

add_executable(fleetofthings main.cpp fleet.cpp fleet.h thing.cpp thing.h)