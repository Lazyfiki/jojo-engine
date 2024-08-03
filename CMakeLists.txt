cmake_minimum_required(VERSION 3.14)
project(jojo)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

enable_testing()

add_subdirectory(3rdparty/googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

file(GLOB TEST_SOURCES tests/*.cpp)
add_executable(MyTest ${TEST_SOURCES})

target_link_libraries(MyTest gtest gtest_main)

add_test(NAME MyTest COMMAND MyTest)
