cmake_minimum_required(VERSION 3.12)
project(opencv)

set(CMAKE_CXX_STANDARD 14)
set(OpenCV_DIR %OPENCV_DIR%)
find_package(OpenCV REQUIRED)

add_executable(opencv main.cpp)

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(opencv ${OpenCV_LIBS})