cmake_minimum_required(VERSION 3.24)
project(test1)

set(CMAKE_CXX_STANDARD 98)

add_executable(test1 lesson1/main.cpp lesson2/lesson1_5.cpp lesson3/lesson1_6.cpp main.h)
