// swap-3.cpp
#include <iostream>
using namespace std;

void swap(int &, int &);

int main() {
  int a, b;
  a = 10;
  b = 20;

  // swap関数に変数a, bをそのまま渡す
  swap(a, b);

  cout << "a = " << a << ", b = " << b << endl;

  return 0;
}

void swap(int &x, int &y)  // 引数x, yを参照として宣言する
{
  int z;

  z = y;  //*x, *yのように
  y = x;  //間接参照演算子を使うことなく
  x = z;  //通常の変数と同じように扱う

  return;
}
