//**********************************************************

// Create A class that can be use to make backtrace for calling functions

//**********************************************************

#include "Backtracing.hpp"

void func1();
void func2();
void func3();

void func1() {

  ENTER_FUNCTION;
  func2();
  EXIT_FUNCTION;
}
void func2() {
  ENTER_FUNCTION;
  func3();
  EXIT_FUNCTION;
}
void func3() {
  ENTER_FUNCTION;
  PRINT_BT;
  EXIT_FUNCTION;
}

int main() {
  ENTER_FUNCTION;
  func1();
  EXIT_FUNCTION;
}