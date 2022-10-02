#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("IsDivisibleBy Function"){
  CHECK(isDivisibleBy(0, 10) == false);
  CHECK(isDivisibleBy(20, 10) == true);
  CHECK(isDivisibleBy(5, 10) == false);
}

TEST_CASE("isPrime Function"){
  CHECK(isPrime(-1) == false);
  CHECK(isPrime(1) == false);
  CHECK(isPrime(2) == true);
  CHECK(isPrime(19) == true);
  CHECK(isPrime(47) == true);
}

