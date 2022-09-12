set(TASK_SOURCES task.cpp)

add_library(task ${TASK_SOURCES})

target_include_directories(task PUBLIC ${CPlusPlusSnake_SOURCE_DIR}/lib/runtime/task/inc)