cmake_minimum_required(VERSION 3.21)
project(CP6 C)

set(CMAKE_C_STANDARD 99)

add_executable(CP6 field.c field.h input.c io.c io.h print.c generate.c)
