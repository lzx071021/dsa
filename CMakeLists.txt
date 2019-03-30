cmake_minimum_required(VERSION 3.13)
project(dsa)

set(CMAKE_CXX_STANDARD 11)

add_executable(dsa src/Vector/main.cpp src/_shared/Fib.h src/Vector/vector.h)
