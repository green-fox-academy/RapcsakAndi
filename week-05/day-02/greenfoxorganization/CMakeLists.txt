cmake_minimum_required(VERSION 3.12)
project(greenfoxorganization)

set(CMAKE_CXX_STANDARD 14)

add_executable(greenfoxorganization main.cpp Person.cpp Person.h Student.cpp Student.h Mentor.cpp Mentor.h Sponsor.cpp Sponsor.h Chohort.cpp Chohort.h)