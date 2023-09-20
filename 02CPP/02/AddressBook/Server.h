#ifndef __SERVER_H__
#define __SERVER_H__

#include "utils.h"
#include <string>

class Contact {
private:
  std::string fname, lname;
  int uid;

public:
  Contact();
  Contact(std::string fname, std::string lname, int uid);
  void GetFname();
  void SetFname();
  void GetLname();
  void SetLname();
  void SetUID();
  void GetLUID();
};

#endif // __SERVER_H__