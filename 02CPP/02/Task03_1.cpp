//**********************************************************

// 3 - delete range of elements in array

//**********************************************************

//**********************************************************

// 3 - delete element in array

//**********************************************************

#include <array>
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include <vector>

void printNewArray(std::vector<int> &arr);
void removeElement(std::vector<int> &v, int range_begin, int range_end);

void removeElement(std::vector<int> &v, int range_begin, int range_end) {

  int count_reverse = range_end - range_begin + 1;

  auto itr = v.begin() + range_begin;

  while (itr != v.end() && count_reverse--) {
    itr = v.erase(itr);
  }
  printNewArray(v);
}

void printNewArray(std::vector<int> &arr) {
  for (auto &i : arr) {
    std::cout << i << " ";
  }
}

int main() {
  std::vector<int> v = {1, 2, 3, 4, 9, 8, 7, 6, 5};

  removeElement(v, 2, 7);
}