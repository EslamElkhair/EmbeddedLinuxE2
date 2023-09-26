//**********************************************************

// fill array from 10 to 10000 sequentially

//**********************************************************

#include <array>
#include <iostream>
#include <numeric>
#include <stdlib.h>

int main() {
  std::array<int, 1000> arr;

  std::iota(arr.begin(), arr.end(), 10);

  for (auto &i : arr) {
    std::cout << i << " ";
  }
}