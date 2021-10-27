#define CATCH_CONFIG_FAST_COMPILE
#include <catch2/catch_test_macros.hpp>

#include "../lib/hello.hpp"


TEST_CASE("","")
{
    hello();
    REQUIRE(true==true);
}