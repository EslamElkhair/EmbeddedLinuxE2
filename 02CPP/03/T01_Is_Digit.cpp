//**********************************************************

// Check is the character is Digit?

//**********************************************************

#include <cctype>
#include <iostream>

int main() {
  char ch = 11;
  std::cout << "Enter Digit: ";
  std::cin >> ch;
  if (std::isdigit(ch))
    std::cout << "Digit" << std::endl;
  else
    std::cout << "Not Digit " << std::endl;
}