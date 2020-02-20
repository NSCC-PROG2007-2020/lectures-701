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
add_executable(incrementer loops/incrementer/main.c)

add_executable(simple_decisions decisions/simple_decisions/main.c)
add_executable(divisible decisions/evenly_divisible/main.c)
add_executable(calculator decisions/calculator/main.c)

add_executable(simple_arrays arrays/simple_arrays/main.c)
add_executable(simple_strings arrays/simple_strings/main.c)

add_executable(math_functions functions/math_functions/main.c)
add_executable(scope functions/scope/main.c)
add_executable(static functions/static/main.c)
add_executable(array_functions functions/arrays/main.c)