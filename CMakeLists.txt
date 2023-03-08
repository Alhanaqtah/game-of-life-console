cmake_minimum_required(VERSION 3.24)
project(life_game_console)

set(CMAKE_CXX_STANDARD 20)

add_executable(life_game_console main.cpp Field.cpp Field.h Cell.cpp Cell.h)
