cmake_minimum_required(VERSION 3.23)
project(smart_pointers)

set(CMAKE_CXX_STANDARD 14)

add_executable(smart_pointers shared.cpp unique.cpp)
