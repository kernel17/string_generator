cmake_minimum_required(VERSION 3.24)
project(string_generator)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)

add_executable(string_generator
        main.cpp
        strgen.h)
