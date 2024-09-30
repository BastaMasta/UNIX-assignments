cmake_minimum_required(VERSION 3.29)
project(libprojC C)

set(CMAKE_C_STANDARD 23)

add_library(libprojC STATIC library.c)
