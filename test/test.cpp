#define CATCH_CONFIG_FAST_COMPILE
#include <catch2/catch_test_macros.hpp>

#include "../lib/hello.hpp"
#include "../lib/functionType.hpp"


TEST_CASE("","")
{
    hello();
    auto type = swid::FunctionType();

    ::print(type);

    REQUIRE(true==true);
}