//**********************************************************

// Create Class behave like string totally

//**********************************************************

#include "String.hpp"
#include <String.h>
#include <cstring>
myString::myString() : data(nullptr), length(0){};

myString::myString(const char *str) {
  length = strlen(str);
  // allocate memory for the string (+1 for null terminator )
  data = new char[length + 1];
  // copy the input string -> s to the new dynamically
  std::strcpy(data, str);
}

myString::~myString() { delete[] data; }

int myString::getLength() const { return data ? length : 0; }

const char *myString::getString() const { return data ? data : " "; }

myString myString::operator=(const myString &other) {
  if (this != &other)
    delete[] data;

  data = new char[length + 1];
  std::strcpy(data, other.data);

  return *this;
}
myString myString::operator+(const myString &other) const {
  myString result;
  result.data = new char[length + other.length + 1];

  strcpy(result.data, data);
  strcat(result.data, other.data);
  return result;
}
