cmake_minimum_required(VERSION 3.17)
project(BaroncelliLab)

set(CMAKE_CXX_STANDARD 14)

add_executable(BaroncelliLab main.cpp Note.h Note.cpp Collection.h Collection.cpp Important.h Important.cpp)