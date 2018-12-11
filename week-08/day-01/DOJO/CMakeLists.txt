cmake_minimum_required(VERSION 3.12)
project(DOJO)

set(CMAKE_CXX_STANDARD 14)

add_executable(DOJO_run main.cpp)

include_directories(DOJO)
add_subdirectory(DOJO)
add_subdirectory(DOJO_test)

target_link_libraries(DOJO_run DOJO)