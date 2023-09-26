#include <cstring>
#include <string.h>
class MyString {
private:
  char *str; // pointer to dynamic allocated character array
  int length;

public:
  MyString(const char *s) {
    length = std::strlen(s);
    str = new char[length + 1];

    std::strcpy(str,
                s); // copy the input string to the dynamically allocated memory
  }
  ~MyString() {
    delete[] str; // deallocate the dynamically allocated memory
  }
  // methods
  char *getString(void);
  int getLength(void);
  MyString operator+(MyString &other);
};