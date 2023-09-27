/**
 * @file String.hpp
 * @author Eslam Khair
 * @brief Define a custom string class, MyString, mimicking basic std::string
 * functionality.

 * This program defines a custom C++ string class called "MyString," which
 * provides rudimentary string handling capabilities, including constructors,
 * member functions (length and c_str), and operator overloads (assignment and
 * concatenation).

 * @version 0.1
 * @date 2023-09-27
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cstring>
#include <iostream>
#include <string>

class myString {
private:
  char *data; // pointer to dynamically allocated char array
  int length; // length of string
public:
  myString();
  myString(const char *s);
  ~myString();

  // methods
  const char *getString() const;
  int getLength() const;
  // overloading
  myString operator=(const myString &other);
  myString operator+(const myString &other) const;
};