cmake_minimum_required(VERSION 3.17)
project(Google_tests)

add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run NoteTest.cpp CollectionTest.cpp runAllTests.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)
