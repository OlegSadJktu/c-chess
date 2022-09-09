cmake_minimum_required(VERSION 3.10)
project(Chess VERSION 0.1)

# set(CMAKE_MESSAGE_LOG_LEVEL "WARNING")

add_executable(Chess main.c)
target_link_libraries(Chess curses)
target_link_libraries(Chess m)
