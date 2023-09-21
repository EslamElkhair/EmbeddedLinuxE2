
//**********************************************************

// 4- merge two arrays together

//**********************************************************
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  int arr1[] = {11, 22, 33};
  const int arr1_size = sizeof(arr1) / sizeof(arr1[0]);
  int arr2[] = {44, 55, 66};
  const int arr2_size = sizeof(arr2) / sizeof(arr2[0]);

  int arr3[arr1_size + arr2_size] = {};

  std::merge(arr1, (arr1 + arr1_size), arr2, (arr2 + arr2_size), arr3);
  for (int i = 0; i < arr1_size + arr2_size; ++i) {
    std::cout << arr3[i] << " " << std::endl;
  }
}