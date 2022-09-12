set(SCHEDULER_SOURCES scheduler.cpp)

add_library(scheduler ${SCHEDULER_SOURCES})

target_link_libraries(scheduler task)

target_include_directories(scheduler PUBLIC ${CPlusPlusSnake_SOURCE_DIR}/lib/runtime/scheduler/inc)