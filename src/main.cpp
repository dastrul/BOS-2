#include <iostream>
#include "liblogger.h"

int main()
{
  std::cout<<"Is it working???"<<std::endl;
  getjsonlog();
  std::string temp="json example";
  writejsonlog(temp);
  return 0;
}
