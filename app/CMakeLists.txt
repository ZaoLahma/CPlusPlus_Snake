include_directories(${CPlusPlusSnake_SOURCE_DIR})

add_executable(CPlusPlusSnake main.cpp)

target_link_libraries(CPlusPlusSnake graphics)
target_link_libraries(CPlusPlusSnake scheduler)