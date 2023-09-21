//**********************************************************

// 02- create a function to search to the number in the array which number is
// taken

//**********************************************************

#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>

// C Style
int CfindNumIndex(int *arr, int arr_size, int element) {
  int index = 0;

  for (int i = 0; i < arr_size; ++i) {
    if (element == arr[i]) {
      break;
    }
    index++;
  }

  return index;
}

// Cpp Style
int findNumIndex(std::array<int, 5> arr, int element) {

  auto itr = std::find(arr.begin(), arr.end(), element);
  int index = std::distance(arr.begin(), itr);

  return index;
}

int main() {

  // C Style
  int cArr[5] = {6, 3, 5, 2, 8};
  int arr_size = sizeof(cArr) / sizeof(cArr[0]);
  std::cout << "C Sytle : " << CfindNumIndex(cArr, arr_size, 5) << std::endl;

  std::array<int, 5> arr{6, 3, 5, 2, 8};
  std::cout << "Cpp Sytle : " << findNumIndex(arr, 5) << std::endl;
  ;
}
