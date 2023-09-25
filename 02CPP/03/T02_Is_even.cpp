//**********************************************************

// -check if there is any value of array is even ?

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
  std::array<int, 5> arr{-2, 1, 5, 9, 7};
  bool any_even = std::any_of(arr.begin(), arr.end(), is_even);
  if (any_even)
    std::cout << "there is even " << std::endl;
  else
    std::cout << "No evens" << std::endl;
}