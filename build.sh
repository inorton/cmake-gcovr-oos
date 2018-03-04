#!/bin/sh

set -ex

mkdir -p cmake-build-debug
cd cmake-build-debug

cmake ..

find . -type f -name *.gc* -delete
make clean
make test_program

./test/test_program
find . -type f -name *.gc*

gcovr -v -r ..