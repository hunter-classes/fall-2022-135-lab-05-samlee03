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
  
int countPrimes(int a, int b){
  int count = 0;
  for (int i = a; i <= b; i++){
    if (isPrime(i)){
      count++;
    }
  }
  return count;
}

bool isTwinPrime(int n){
  if (isPrime(n) && (isPrime(n-2) || isPrime(n+2))){
    return true;
  }
  return false;
}

int nextTwinPrime(int n){
  int twinPrime = n + 1;
  while (true){
    if (isTwinPrime(twinPrime)){
      return twinPrime;
    }
    twinPrime++;
  }
}
int largestTwinPrime(int a, int b){
  for (int i = b; i >= a; i--){
    if (isTwinPrime(i)){
      return i;
    }
  }
  return -1;
}
