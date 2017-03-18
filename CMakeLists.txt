cmake_minimum_required(VERSION 3.6)
project(KR1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp head.h ch.cpp)
add_executable(KR1 ${SOURCE_FILES})