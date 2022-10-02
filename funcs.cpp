#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d)
{
  if (n < d){
    return false;
  } else if (n % d == 0) {
    return true;
  }
  return false;
}

bool isPrime(int n){
  if (n < 2){
    return false;
  } 
  for (int i = 2; i < n; i++){
    if (isDivisibleBy(n, i)){
      return false;
    }
  }
  return true;
}

int nextPrime(int n){
  int number = n + 1;
  while (true){
    if (isPrime(number)){
      return number;
    }
    number++;
  }

  return 0;
}
  
