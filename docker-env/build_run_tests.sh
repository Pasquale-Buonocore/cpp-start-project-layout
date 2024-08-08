#!/bin/bash
set -e

cd /host/tests

# build the tests
mkdir -p build
cd build
cmake ..
make -j4

# Run the tests
./UnitTests

# Move to the Unittest.dir folder
cd CMakeFiles/UnitTests.dir

# Use gcov and lcov to compute coverage and html report
gcov test_main.cpp.gnco
lcov --capture --directory . --output-file gtest_coverage.info
genhtml gtest_coverage.info --output-directory ./../../code_coverage