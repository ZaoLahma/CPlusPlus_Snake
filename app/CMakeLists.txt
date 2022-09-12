include_directories(${CPlusPlusSnake_SOURCE_DIR})
include_directories(${CPlusPlusSnake_SOURCE_DIR}/lib/graphics/inc)

add_executable(CPlusPlusSnake main.cpp)

target_link_libraries(CPlusPlusSnake graphics)