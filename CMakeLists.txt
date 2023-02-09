cmake_minimum_required(VERSION 3.7)

project(n2)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(n2 Main.cpp)
target_link_libraries(n2 ${SDL2_LIBRARIES})