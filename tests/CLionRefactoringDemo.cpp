#include "catch2/catch.hpp"

TEST_CASE("CLion demo")
{
    // Trivial example code for https://youtrack.jetbrains.com/issue/CPP-1420
    int x = 2;
    int xsquared = x * x;
    CHECK(xsquared == 4);
}
