cmake_minimum_required(VERSION 3.22)
project(sem1)

add_subdirectory(my)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} my)

enable_testing()
