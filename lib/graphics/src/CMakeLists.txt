set(GRAPHICS_SOURCES graphics.cpp)

add_library(graphics ${GRAPHICS_SOURCES})

target_link_libraries(graphics task)

target_include_directories(graphics PUBLIC ${CPlusPlusSnake_SOURCE_DIR}/lib/graphics/inc)