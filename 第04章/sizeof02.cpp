// sizeof02.cpp
#include <iostream>
using namespace std;

int main() {
  int a = 10;
  size_t s;

  s = sizeof ++a;
  cout << "a = " << a << endl;

  return 0;
}
