cmake_minimum_required(VERSION 3.16)
project(incarray C)

set(CMAKE_C_STANDARD 99)

add_executable(incarray main.c increment_numbers_array.c increment_numbers_array.h main.h)