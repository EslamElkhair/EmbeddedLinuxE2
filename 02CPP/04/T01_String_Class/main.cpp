#include "string.hpp"

int main() {
  // checking getString() &  getLength() functionalities
  myString str1("Hi ");
  myString str2("eso");

  std::cout << str1.getString() << " " << str1.getLength() << std::endl;
  std::cout << str2.getString() << " " << str2.getLength() << std::endl;

  // checking + = operator overloading

  myString str3 = str1 + str2;

  std::cout << str3.getString() << " " << str3.getLength() << std::endl;
}