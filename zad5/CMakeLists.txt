cmake_minimum_required(VERSION 3.29.1)

project(PGR_TASK_5.out)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ncurses) #linkowanie ncurses