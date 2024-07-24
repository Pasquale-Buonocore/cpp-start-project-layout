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