#include <catch2/catch_test_macros.hpp>

#include "clamped_add.h"


TEST_CASE("clamped_add tests", "") {
    REQUIRE(clamped_add(1u, 4u, 10u) == 5u);
    REQUIRE(clamped_add(5u, 9u, 10u) == 10u);
    // no tests for overflow exist yet
}
