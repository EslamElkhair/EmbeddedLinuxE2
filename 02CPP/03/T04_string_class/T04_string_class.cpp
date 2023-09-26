#include "T04_string_class.hpp"
#include <cstring>

char *MyString::getString(void) { return str; }

int MyString::getLength(void) { return length; }

MyString MyString::operator+(MyString &other) {
  char *newStr = new char[length + other.length + 1];
  std::strcpy(newStr, str);
  std::strcat(newStr, other.str);
  return MyString(newStr);
}
