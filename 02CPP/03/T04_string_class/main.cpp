#include "T04_string_class.hpp"
#include <iostream>

int main() {
  MyString str1("eslam");
  MyString str2(" abass");
  MyString conString = str1 + str2;

  char *str = conString.getString();
  int len = conString.getLength();

  std::cout << str << " " << len << std::endl;
}