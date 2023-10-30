cmake_minimum_required(VERSION 3.22)
project(2)

option(BUILD_TEST BOOL OFF)

add_executable(${PROJECT_NAME} main.cpp)
add_subdirectory(libfib)

target_link_libraries(${PROJECT_NAME} fib)

if(BUILD_TEST)
	message("Enable testing")
	enable_testing()
endif()
