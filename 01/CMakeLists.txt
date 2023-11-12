cmake_minimum_required(VERSION 3.22)

project(task01)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(libphonetic)

target_link_libraries(${PROJECT_NAME} phonetic)