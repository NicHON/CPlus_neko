// string01.cpp
#include <iostream>
using namespace std;

int main() {
  char *str;

  str = "ABC";

  cout << "*(str + 0) = '" << *(str + 0) << "', *(str + 1) = '" << *(str + 1)
       << "', *(str + 2) = '" << *(str + 2) << "'" << endl;
  cout << "str[0] = '" << str[0] << "', str[1] = '" << str[1] << "', str[2] = '"
       << str[2] << "'" << endl;

  return 0;
}
