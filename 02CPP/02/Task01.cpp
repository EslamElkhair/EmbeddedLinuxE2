//**********************************************************

// 01- create a function to find the maximum number of array

//**********************************************************
#include <algorithm>
#include <array>
#include <iostream>
#include <vector>

// C-Style
int maxNumC(int *arr, int arr_size) {
  int max = *std::max_element(arr, arr + arr_size);

  return max;
}

// Cpp-Style
int maxNumCpp(std::vector<int> arr) {
  int max;
  max = *std::max_element(arr.begin(), arr.end());
  return max;
}

int main() {

  //   int arr[] = {1, 2, 4, 33, 5, 6};
  //   int arr_size = sizeof(arr) / sizeof(arr[0]);
  //   std::cout << maxNumC(arr, arr_size) << std::endl;

  std::vector<int> arrr = {1, 2, 444, 3, 5, 77};
  std::cout << maxNumCpp(arrr) << std::endl;
}