// ref01.cpp
#include <iostream>
using namespace std;

int main() {
  int a;
  int& refa = a;  // aへの参照

  a = 10;
  cout << "a = " << a << endl;
  cout << "refa = " << refa << endl;

  refa = 100;  // 参照に値を代入
  cout << "a = " << a << endl;
  cout << "refa = " << refa << endl;

  return 0;
}
