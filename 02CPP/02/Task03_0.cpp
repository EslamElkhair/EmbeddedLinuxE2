//**********************************************************

// 3 - delete element in array

//**********************************************************

#include <algorithm>
#include <array>
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <vector>

// C Style
void CPirntArray(int *arr, int arr_size) {
  for (int i = 0; i < arr_size; ++i) {
    std::cout << arr[i] << " " << std::endl;
  }
}
void CremoveElement(int *arr, int arr_size, int element) {
  int i, j, found;
  for (i = 0; i < arr_size; ++i) {
    if (arr[i] == element) {
      for (j = i; j < arr_size - 1; j++) {
        arr[j] = arr[j + 1];
      }
      found++;
      i--;
      arr_size--;
    }
  }
  CPirntArray(arr, arr_size);
}
// Cpp Style
void printNewArray(std::vector<int> &arr) {
  if (arr.empty()) {
    std::cout << "Empty" << std::endl;
  }
  for (auto &i : arr) {
    std::cout << i << " ";
  }
}
void removeElement(std::vector<int> &arr, int element) {

  auto index = std::find(arr.begin(), arr.end(), element);

  if (index != arr.end()) {
    arr.erase(index);
  }
  printNewArray(arr);
}

int main() {
  std::vector<int> v = {1};
  int m = 3, n = 7;

  removeElement(v, 1);

  // C Style
  // int arr[] = {1, 2, 3, 4, 9, 8, 7, 6, 5};
  // int arr_size = sizeof(arr) / sizeof(arr[0]);
  // int element = 3;
  // CremoveElement(arr, arr_size, 3);
}