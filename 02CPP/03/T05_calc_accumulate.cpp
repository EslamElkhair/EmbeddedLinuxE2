//**********************************************************

// calculate accumulate of array

//**********************************************************

#include <array>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <ostream>
#include <string>
int main() {
  auto dash_fold = [](std::string a, int b) {
    return std::move(a) + '-' + std::to_string(b);
  };
  std::array<int, 5> arr{1, 2, 3, 4, 5};
  auto sum = std::accumulate(arr.begin(), arr.end(), 0);
  std::cout << sum << std::endl;

  //   auto str = std::accumulate(std::next(arr.begin()), arr.end(),
  //                              std::to_string(arr[0]), dash_fold);

  //   std::cout << "String : " << str << std::endl;
}