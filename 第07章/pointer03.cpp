// pointer03.cpp
#include <iostream>
using namespace std;

int main() {
  int a, b;
  int *p = &a;

  a = 5;
  b = 10;
  cout << "a = " << a << ", b = " << b << ", *p = " << *p << endl;

  p = &b;
  cout << "a = " << a << ", b = " << b << ", *p = " << *p << endl;

  return 0;
}
