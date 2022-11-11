#!/bin/bash


mkdir deps
pushd deps
curl -sSLO "$SONAR_SERVER_URL/static/cpp/build-wrapper-linux-x86.zip"
unzip build-wrapper-linux-x86.zip
export PATH=$PWD/build-wrapper-linux-x86:$PATH

curl -sSLO "https://binaries.sonarsource.com/Distribution/sonar-scanner-cli/sonar-scanner-cli-$SONAR_SCANNER_VERSION-linux.zip"
unzip sonar-scanner-cli-$SONAR_SCANNER_VERSION-linux.zip
export PATH=$PWD/sonar-scanner-$SONAR_SCANNER_VERSION-linux/bin:$PATH
popd

