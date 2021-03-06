#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "uncased_name.hpp"

TEST_CASE("snake_case names can be parsed")
{
  uncased_name x("this_was_snake_case");

  SECTION("and output as snake_case")
  {
    REQUIRE(x.snake_cased() == "this_was_snake_case");
  }

  SECTION("and output as CamelCase")
  {
    REQUIRE(x.camel_cased() == "ThisWasSnakeCase");
  }
}

TEST_CASE("CamelCase names can be parsed")
{
  uncased_name x("UsedToBeCamelCase");

  SECTION("and output as snake_case")
  {
    REQUIRE(x.snake_cased() == "used_to_be_camel_case");
  }
  SECTION("and output as CamelCase")
  {
    REQUIRE(x.camel_cased() == "UsedToBeCamelCase");
  }
}
