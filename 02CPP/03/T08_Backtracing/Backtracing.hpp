#ifndef __BACKTRACING_H__
#define __BACKTRACING_H__

#include <iostream>
#include <string>
#include <vector>

#define ENTER_FUNCTION Backtrace bacetrace_enter(__FUNCTION__, true)
#define EXIT_FUNCTION Backtrace bacetrace_exit(__FUNCTION__, false)
#define PRINT_BT Backtrace::PrintBacktrace()

class Backtrace {

private:
  static int indent_level_;
  static std::vector<std::string> function_stack_;
  std::string function_name_;
  bool is_entered_;

public:
  Backtrace();
  Backtrace(const std::string &function_name, bool is_entered);
  ~Backtrace();

  static void PrintBacktrace();
};
#endif // __BACKTRACING_H__