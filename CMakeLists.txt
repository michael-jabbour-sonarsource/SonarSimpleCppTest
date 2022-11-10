cmake_minimum_required(VERSION 3.13)
project(SonarSimpleCppTest)


option(ENABLE_COVERAGE "Enable coverage information generation by the compiler" OFF)

set(CMAKE_CXX_STANDARD 17)


if(ENABLE_COVERAGE)
    if("${CMAKE_CXX_COMPILER_ID}" MATCHES "GNU")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")
    else()
        message(FATAL_ERROR "Only GCC is supported for coverage reporting")
    endif()
endif()

add_subdirectory(lib)
add_subdirectory(main)


enable_testing()
add_subdirectory(tests)

