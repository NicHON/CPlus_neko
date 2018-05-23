// function01.cpp
#include <iostream>
using namespace std;

int func(int, int);

int main() {
  int a, b, c;

  a = 10;
  b = 20;
  c = func(a, b);
  cout << a << " x " << b << " = " << c << endl;

  return 0;
}

int func(int a, int b) {
  int c;
  c = a * b;
  return c;
}
