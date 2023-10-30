cmake_minimum_required(VERSION 3.22)
project(my)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} src/utils.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  utils_test
  src/utils_test.cpp
)
target_link_libraries(
  utils_test
  GTest::gtest_main
  ${PROJECT_NAME}
)
target_include_directories(utils_test PUBLIC include)

include(GoogleTest)
gtest_discover_tests(utils_test)
