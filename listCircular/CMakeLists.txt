cmake_minimum_required(VERSION 3.27)
project(listCircular)

set(CMAKE_CXX_STANDARD 17)

add_executable(listCircular main.cpp
        Nodo.cpp
        Nodo.h
        List.cpp
        List.h)
