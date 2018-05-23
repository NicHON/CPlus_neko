// format03.cpp
#include <iostream>
using namespace std;

int main() {
  double a = 0.5, b = 10.5;
  int c = 215, d;
  char e = 'A';

  cout << a << " + " << b << " = " << a + b << endl;

  d = c + 11;

  cout << "cの値は" << c << "でこれに11を加えると" << d << "となります" << endl;
  cout << "eには" << (int)e << "の値が代入されています" << endl;

  return 0;
}

