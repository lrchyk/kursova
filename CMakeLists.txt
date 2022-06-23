cmake_minimum_required(VERSION 3.22)
project(irchyk)

set(CMAKE_CXX_STANDARD 20)

add_executable(irchyk main.cpp Person.cpp Person.h Teacher.h Teacher.cpp Worker.h Worker.cpp)
