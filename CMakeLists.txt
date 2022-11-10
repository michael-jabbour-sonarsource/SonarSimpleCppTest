cmake_minimum_required(VERSION 3.13)
project(SonarSimpleCppTest)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(lib)
add_subdirectory(main)


enable_testing()
add_subdirectory(tests)

