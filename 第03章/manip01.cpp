// manio01.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int a = 10, b = 200, c = 1024;

  cout << "通常表示" << endl;
  cout << "a = " << a << ", b = " << b << ", c = " << c << endl << endl;
  cout << "dec表示" << endl;
  cout << dec << "a = " << a << ", b = " << b << ", c = " << c << endl << endl;
  cout << "hex表示" << endl;
  cout << hex << "a = " << a << ", b = " << b << ", c = " << c << endl << endl;
  cout << "oct表示" << endl;
  cout << oct << "a = " << a << ", b = " << b << ", c = " << c << endl << endl;
  cout << "aをdec, hex, oct形式で表示" << endl;
  cout << dec << a << ", " << hex << a << ", " << oct << a << endl;

  return 0;
}
