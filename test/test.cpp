#define CATCH_CONFIG_FAST_COMPILE
#include <catch2/catch_test_macros.hpp>
#include <iostream>

#include "../lib/enum.hpp"

TEST_CASE("", "") {
  auto res = swid::Enum({
      swid::Enum::Params{
          .identifier = L"test",
          .originalPackagePath = L"package:test",
          .children{},
      },
  });

  std::wcout << res.getOriginalPackagePath();

  REQUIRE(true == true);
}