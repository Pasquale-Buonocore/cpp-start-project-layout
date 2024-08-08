cmake_minimum_required(VERSION 3.10)
project(Tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 --coverage")

# Add the source directory
add_subdirectory(../src ${CMAKE_BINARY_DIR}/src)

# Enable testing
enable_testing()

# Find GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test executable
add_executable(UnitTests
    test_main.cpp
    ./test_main_class/test_main_class.cpp
    ./mocks/MockDependency1.hpp
    ./mocks/MockDependency2.hpp
)

# Link test executable against gtest & gtest_main and MyLibrary
target_link_libraries(UnitTests gtest gtest_main gmock pthread MyLibrary)
