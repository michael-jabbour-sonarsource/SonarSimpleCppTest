#!/bin/bash

set -e

# heavily based on examples in https://github.com/sonarsource-cfamily-examples/

mkdir build_analyze_dir
pushd build_analyze_dir

# fetch dependencies
source ../fetch_sonar_scanner.sh

# build the project inside the build-wrapper
cmake ..
build-wrapper-linux-x86-64 --out-dir bw-output make -j 18
popd

./generate_coverage_reports.sh

# run sonar-scanner and send results to SonarQube
sonar-scanner \
  -Dsonar.cfamily.build-wrapper-output=build_analyze_dir/bw-output \
  -Dsonar.cfamily.gcov.reportsPath=build_cov/gcov_dir \
  -Dsonar.host.url=$SONAR_HOST_URL \
  -Dsonar.login=$SONAR_LOGIN
