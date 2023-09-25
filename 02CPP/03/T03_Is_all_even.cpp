//**********************************************************

// -check if all values of array is even ?

//**********************************************************
#include <algorithm>
#include <array>
#include <iostream>
auto is_even = [](int num) -> bool {
  if (num % 2 == 0)
    return 1;
  return 0;
};

int main() {
  std::array<int, 5> arr{-2, 4, 6, 10, 12};

  bool all_even = std::all_of(arr.begin(), arr.end(), is_even);

  if (all_even)
    std::cout << "All even" << std::endl;
  else
    std::cout << "not all even" << std::endl;
}