include_directories(${CPlusPlusSnake_SOURCE_DIR}/lib/graphics/inc)

set(GRAPHICS_SOURCES graphics.cpp)

add_library(graphics ${GRAPHICS_SOURCES})
