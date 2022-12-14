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
  CHECK(isPrime(15) == false);
  CHECK(isPrime(19) == true);
  CHECK(isPrime(47) == true);
}

TEST_CASE("nextPrime Function"){
  CHECK(nextPrime(-1) == 2);
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
  CHECK(nextPrime(900) == 907);
}

TEST_CASE("countPrime Function"){
  CHECK(countPrimes(-5, -1) == 0);
  CHECK(countPrimes(0, 2) == 1);
  CHECK(countPrimes(2, 100) == 25);
  CHECK(countPrimes(-5, 100) == 25);
}
TEST_CASE("isTwinPrime Function"){
  CHECK(isTwinPrime(2) == false);
  CHECK(isTwinPrime(5) == true);
  CHECK(isTwinPrime(9) == false);
  CHECK(isTwinPrime(89) == false);
  CHECK(isTwinPrime(43) == true);
}
TEST_CASE("nextTwinPrime Function"){
  CHECK(nextTwinPrime(2) == 3);
  CHECK(nextTwinPrime(-5) == 3);
  CHECK(nextTwinPrime(300) == 311);
}
TEST_CASE("largestTwinPrime"){
  CHECK(largestTwinPrime(-100, 0) == -1);
  CHECK(largestTwinPrime(2, 9) == 7);
  CHECK(largestTwinPrime(1, 31) == 31);
  CHECK(largestTwinPrime(14, 16) == -1);
}
