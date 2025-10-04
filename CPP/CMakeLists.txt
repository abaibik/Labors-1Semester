cmake_minimum_required(VERSION 4.0)
project(CPP LANGUAGES CXX)

add_executable(Aufgabe0 Aufgabe0.сpp)
set_target_properties(
    Aufgabe0 PROPERTIES
    LINKER_LANGUAGE CXX
    CXX_STANDARD 11)