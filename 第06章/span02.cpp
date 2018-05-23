// span02.cpp
#include <iostream>
using namespace std;

int add(int);

int main() {
  int sum;

  sum = add(10);
  cout << "sum = " << sum << endl;
  sum = add(20);
  cout << "sum = " << sum << endl;
  sum = add(100);
  cout << "sum = " << sum << endl;

  return 0;
}

int add(int x) {
  static int gokei = 0;  // static関数
  gokei += x;
  return gokei;
}

