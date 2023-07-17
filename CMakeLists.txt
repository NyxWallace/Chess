cmake_minimum_required(VERSION 3.10)

project(Chess++)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_COMPILER cl.exe)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc")

add_executable(chess Chess++.cpp Game.cpp)