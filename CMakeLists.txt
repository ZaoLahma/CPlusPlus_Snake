#Requirements
cmake_minimum_required(VERSION 3.10)


#Project settings
project(CPlusPlusSnake VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(CPlusPlusSnakeConfig.h.in CPlusPlusSnakeConfig.h)

add_subdirectory(app)
add_subdirectory(lib)
