cmake_minimum_required(VERSION 3.25)
project(mpi)

set(CMAKE_CXX_STANDARD 17)

add_executable(mpi main.cpp structures.cpp structures.h randfuncs.cpp randfuncs.h operations.cpp operations.h)
