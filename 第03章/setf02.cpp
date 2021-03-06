// setf01.cpp
#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 100;

  cout << "通常の表示(10進)" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl << endl;

  cout << "10進表示" << endl;
  cout.setf(ios::dec, ios::basefield);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl << endl;

  cout << "16進表示" << endl;
  cout.setf(ios::hex, ios::basefield);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl << endl;

  cout << "8進表示" << endl;
  cout.setf(ios::oct, ios::basefield);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}

