cmake_minimum_required(VERSION 3.19)
project(CPP_02)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(ex03)

add_executable(CPP_02
        ex03/Fixed.cpp
        ex03/Fixed.hpp
        ex03/Fixed.o
        ex03/main.cpp
        ex03/main.o
        ex03/Makefile
        ex03/Point.cpp
        ex03/Point.hpp
        ex03/Point.o
        ex03/Triangle)
