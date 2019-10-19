cmake_minimum_required(VERSION 3.14)
project(CPlusPlus)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(. source)

add_executable(CPlusPlus ${source})