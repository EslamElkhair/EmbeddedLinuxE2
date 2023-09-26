#include "Backtracing.hpp"
#include <iostream>
#include <vector>
int Backtrace::indent_level_; // initialized to zero
std::vector<std::string> Backtrace::function_stack_;

Backtrace::Backtrace() {}
Backtrace::Backtrace(const std::string &function_name, bool is_entered)
    : function_name_(function_name), is_entered_(is_entered) {
  if (indent_level_ == 0)
    std::cout << "\n\n\n" << std::endl;

  if (is_entered_) {

    for (int i = 0; i < indent_level_; i++) {
      std::cout << " ";
    }

    std::cout << "Enter function -> " << function_name_ << std::endl;
    indent_level_ += 3;
    function_stack_.push_back(function_name_);
  }
}
Backtrace::~Backtrace() {
  if (indent_level_ == 0)
    std::cout << "\n\n\n" << std::endl;
  if (!is_entered_) {
    indent_level_ -= 3;
    for (int i = 0; i < indent_level_; ++i) {
      std::cout << " ";
    }
    std::cout << "Exit function -> " << function_name_ << std::endl;
    function_stack_.pop_back();
  }
}

void Backtrace::PrintBacktrace() {
  std::cout << "\nBacktrace :" << std::endl;
  for (auto function : function_stack_) {
    std::cout << function << " -> ";
  }
  std::cout << "End\n" << std::endl;
}