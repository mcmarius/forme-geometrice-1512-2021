cmake_minimum_required(VERSION 3.17)
project(forme_geometrice_1512_2021)

set(CMAKE_CXX_FLAGS "-std=c++20 -pedantic")

add_executable(forme_geometrice_1512_2021
        main.cpp
        Cerc.cpp Plansa.cpp Plansa.h)
