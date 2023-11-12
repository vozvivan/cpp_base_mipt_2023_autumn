cmake_minimum_required(VERSION 3.22)
project(phonetic)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} source/phonetic.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  phonetic_test
  source/phonetic_test.cc
)

target_link_libraries(
  phonetic_test
  ${PROJECT_NAME}
  GTest::gtest_main
)
target_include_directories(phonetic_test PUBLIC include)

include(GoogleTest)
gtest_discover_tests(phonetic_test)