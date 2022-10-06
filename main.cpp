#include <iostream>


#include "funcs.h"

int main()
{
  std::cout << "is 100 Divisible By 25: " << isDivisibleBy(100, 25) << std::endl;
  std::cout << "is 15 Prime: " << isPrime(15) << std::endl;
  std::cout << "nextPrime(14): " << nextPrime(14) << std::endl;
  std::cout << "isTwinPrime(9): " << isTwinPrime(9) << std::endl;
  std::cout << "nextTwinPrime(14): " << nextTwinPrime(14) << std::endl;
  std::cout << "largestTwinPrime(5, 18): " << largestTwinPrime(5, 18) << std::endl;
  return 0;
}
