set(CORE_SOURCES game_container.cpp game_object.cpp vector.cpp graphics.cpp)

add_library(core ${CORE_SOURCES})

target_link_libraries(core task)

target_include_directories(core PUBLIC ${CPlusPlusSnake_SOURCE_DIR}/lib/game/core/inc)