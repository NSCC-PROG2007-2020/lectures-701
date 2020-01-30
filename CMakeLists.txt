cmake_minimum_required(VERSION 3.14)
project(intro/datatypes C)

set(CMAKE_C_STANDARD 11)

add_executable(datatypes intro/datatypes/main.c)
add_executable(celsius intro/celsius/main.c)
add_executable(test_char intro/test_char/test_char.c)
add_executable(polynomial intro/polynomial/main.c)
add_executable(scientific_notation intro/scientific_notation/main.c)
add_executable(evenly_divisible intro/evenly_divisible/main.c)
add_executable(conversions intro/conversions/main.c)

add_executable(triangular loops/triangular/main.c)
add_executable(squares loops/squares/main.c)
add_executable(digit_sum loops/digit_sum/main.c)