// manip02.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double a = 12.123458, b = -15258000000, c = 0.0005;

  cout << "通常表示" << endl;
  cout << "a = " << a << ", b = " << b << ", c = " << c << endl << endl;
  cout << "fixed表示" << endl;
  cout << fixed << "a = " << a << ", b = " << b << ", c = " << c << endl
       << endl;
  cout << "scientific表示" << endl;
  cout << scientific << "a = " << a << ", b = " << b << ", c = " << c << endl
       << endl;
  cout << "5桁に指定 + 通常表示" << endl;
  // unsetfを使わないと通常表示に戻せない
  cout.unsetf(ios::scientific);
  cout << setprecision(5) << "a = " << a << ", b = " << b << ", c = " << c
       << endl
       << endl;
  cout << "5桁に指定 + 科学技術計算表示" << endl;
  cout << scientific << "a = " << a << ", b = " << b << ", c = " << c << endl;

  return 0;
}
