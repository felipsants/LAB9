cmake_minimum_required(VERSION 3.28)
project(q3 C)

set(CMAKE_C_STANDARD 99)

add_executable(q3 main.c
        func.c
        func.h)
