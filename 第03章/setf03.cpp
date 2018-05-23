// setf03.cpp
#include <iostream>
using namespace std;

int main() {
  double d1 = 3.14, d2 = 100000.0, d3 = -29.123456;

  cout << "通常表示" << endl;
  cout << "d1 = " << d1 << endl;
  cout << "d2 = " << d2 << endl;
  cout << "d3 = " << d3 << endl << endl;

  cout << "右寄せ表示, 10桁表示" << endl;
  cout.setf(ios::right, ios::adjustfield);
  cout << "d1 = ";
  cout.width(10);
  cout << d1 << endl;

  cout << "d2 = ";
  cout.width(10);
  cout << d2 << endl;

  cout << "d3 = ";
  cout.width(10);
  cout << d3 << endl << endl;

  cout << "固定小数点表示" << endl;
  cout.setf(ios::fixed, ios::floatfield);
  cout << "d1 = " << d1 << endl;
  cout << "d2 = " << d2 << endl;
  cout << "d3 = " << d3 << endl << endl;

  cout << "科学技術計算表示" << endl;
  cout.setf(ios::scientific, ios::floatfield);
  cout << "d1 = " << d1 << endl;
  cout << "d2 = " << d2 << endl;
  cout << "d3 = " << d3 << endl;

  return 0;
}
