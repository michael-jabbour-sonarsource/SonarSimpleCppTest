#include <catch2/catch_test_macros.hpp>
#include <iostream>


#include "clamped_add.h"


TEST_CASE("clamped_add tests", "") {
    REQUIRE(clamped_add(1u, 4u, 10u) == 5u);
    REQUIRE(clamped_add(5u, 9u, 10u) == 10u);
    // no tests for overflow exist yet
}

// intentionally duplicate code
// is this tolerated in tests?
TEST_CASE("clamped_add2 tests", "") {
    REQUIRE(clamped_add(1u, 4u, 10u) == 5u);
    REQUIRE(clamped_add(5u, 9u, 10u) == 10u);
    // no tests for overflow exist yet
}

TEST_CASE("clamped_add3 tests", "") {
    REQUIRE(clamped_add(1u, 4u, 10u) == 5u);
    REQUIRE(clamped_add(5u, 9u, 10u) == 10u);
    // no tests for overflow exist yet
}

TEST_CASE("clamped_add4 tests", "") {
    REQUIRE(clamped_add(1u, 4u, 10u) == 5u);
    REQUIRE(clamped_add(5u, 9u, 10u) == 10u);
    // no tests for overflow exist yet
}

TEST_CASE("intentionally bad code", "") {
    int unused;

    int x;
    if(x != 4 || x != 5) { std::cout << "Bad condition!\n"; }
}


#if 0
TEST_CASE("clamped_add tests", "") {
    REQUIRE(clamped_add(1u, 4u, 10u) == 5u);
    REQUIRE(clamped_add(5u, 9u, 10u) == 10u);
    // no tests for overflow exist yet
}

// intentionally duplicate code
// is this tolerated in tests?
TEST_CASE("clamped_add2 tests", "") {
    REQUIRE(clamped_add(1u, 4u, 10u) == 5u);
    REQUIRE(clamped_add(5u, 9u, 10u) == 10u);
    // no tests for overflow exist yet
}

TEST_CASE("clamped_add3 tests", "") {
    REQUIRE(clamped_add(1u, 4u, 10u) == 5u);
    REQUIRE(clamped_add(5u, 9u, 10u) == 10u);
    // no tests for overflow exist yet
}

TEST_CASE("clamped_add4 tests", "") {
    REQUIRE(clamped_add(1u, 4u, 10u) == 5u);
    REQUIRE(clamped_add(5u, 9u, 10u) == 10u);
    // no tests for overflow exist yet
}

TEST_CASE("intentionally bad code", "") {
    int unused;

    int x;
    if(x != 4 || x != 5) { std::cout << "Bad condition!\n"; }
}
#endif
