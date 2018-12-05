cmake_minimum_required(VERSION 3.12)
project(carpark)

set(CMAKE_CXX_STANDARD 14)

add_executable(carpark_run main.cpp)

include_directories(carpark)
add_subdirectory(carpark)
add_subdirectory(carpark_test)

target_link_libraries(carpark_run carpark)