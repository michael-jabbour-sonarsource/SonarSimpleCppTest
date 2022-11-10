#!/bin/bash


mkdir build_cov
cd build_cov

cmake -DENABLE_COVERAGE=ON ..
make -j 18
ctest

mkdir gcov_dir
pushd gcov_dir
find .. -name '*.gcda' -print0 | xargs -0 -L1  gcov
popd
