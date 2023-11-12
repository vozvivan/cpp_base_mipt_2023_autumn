cmake_minimum_required(VERSION 3.22)
project(stemmer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} source/stemmer.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  tests
  source/tests.cc
)

target_link_libraries(
  tests
  ${PROJECT_NAME}
  GTest::gtest_main
)
target_include_directories(tests PUBLIC include)

include(GoogleTest)
gtest_discover_tests(tests)