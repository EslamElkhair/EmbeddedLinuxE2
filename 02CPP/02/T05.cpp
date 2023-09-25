//**********************************************************

// Simple Lambda: Write a lambda function to calculate the square of a given
// number.

//**********************************************************
#include <iostream>

int main() {
  auto square = [](int n) -> int { return n * n; };
  std::cout << square(6) << std::endl;
}