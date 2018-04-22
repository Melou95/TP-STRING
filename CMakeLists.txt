cmake_minimum_required(VERSION 3.1.3)

project (TP7 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14) 

set(CMALE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

add_executable(executable TP7.cpp String.cpp)
