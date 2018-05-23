// span01.cpp
#include <iostream>
using namespace std;

int add(int);  //プロトタイプ宣言

int main() {
  int sum;

  sum = add(10);  //関数呼び出し
  cout << "sum = " << sum << endl;
  sum = add(20);  //関数呼び出し
  cout << "sum = " << sum << endl;
  sum = add(100);  //関数呼び出し
  cout << "sum = " << sum << endl;

  return 0;
}

int add(int x) {
  int gokei = 0;
  gokei += x;
  return gokei;
}

