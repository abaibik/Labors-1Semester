cmake_minimum_required(VERSION 4.0)
project(CPP LANGUAGES CXX)

# add_executable(Aufgabe0 Aufgabe0.сpp)
add_executable(Aufgabe4 Aufgabe4.cpp)
set_target_properties(
    Aufgabe4 PROPERTIES
    LINKER_LANGUAGE CXX
    CXX_STANDARD 11
    COMPILE_WARNING_AS_ERROR OFF
)

target_compile_options(Aufgabe4 PRIVATE -Wall -Wextra -Wpedantic -Wconversion)