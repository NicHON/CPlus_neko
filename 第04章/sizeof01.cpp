// sizeof01.cpp
#include <iostream>
using namespace std;

int main() {
  char c = 'A';
  short s = 50;
  int i = -100;
  unsigned int ui = 128;
  float f = 0.5f;
  double d = 2568.2;
  long double ld = 1.258E-25;
  size_t sz;

  sz = sizeof c;
  cout << "size of char = " << sz << "バイト" << endl;

  sz = sizeof s;
  cout << "size of short = " << sz << "バイト" << endl;

  sz = sizeof i;
  cout << "size of int = " << sz << "バイト" << endl;

  sz = sizeof ui;
  cout << "size of unsigned int = " << sz << "バイト" << endl;

  sz = sizeof f;
  cout << "size of float = " << sz << "バイト" << endl;

  sz = sizeof d;
  cout << "size of double = " << sz << "バイト" << endl;

  sz = sizeof ld;
  cout << "size of long double = " << sz << "バイト" << endl;

  sz = sizeof(size_t);
  cout << "size of size_t = " << sz << "バイト" << endl;

  return 0;
}
