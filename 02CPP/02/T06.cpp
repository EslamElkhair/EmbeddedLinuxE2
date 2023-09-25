//**********************************************************

// Sort with Lambda: Use lambda functions to sort an array of integers in
// ascending and descending order.

//**********************************************************

#include <algorithm>
#include <array>
#include <iostream>
#include <vector>

auto lamda_sort_ascend = [](int a, int b) -> bool { return a < b; };
auto lamda_sort_descend = [](int a, int b) -> bool { return a > b; };

int main() {
  std::array<int, 5> arr{22, 11, 44, 555, 33};

  std::sort(arr.begin(), arr.end(), lamda_sort_ascend);
  for (auto i : arr) {
    std::cout << i << std::endl;
  }
  std::cout << std::endl;
  std::sort(arr.begin(), arr.end(), lamda_sort_descend);
  for (auto i : arr) {
    std::cout << i << std::endl;
  }
}