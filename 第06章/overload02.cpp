// overload02.cpp
#include <iostream>
using namespace std;

int func(int a, int b = 10, int c = 20);  //(1)
int func(int x);                          //(2)

int main() {
  int n;
  cout << "整数値を入力 ---";
  cin >> n;
  cout << "func(n, 20)の結果: " << func(n, 20) << endl;
  // func(5)とすると、オーバーロード呼び出しの解決ができない
  // cout << "func(5)の結果: " << func(5) << endl;  // エラー

  return 0;
}

int func(int a, int b, int c) { return a * b * c; }

int func(int x) { return x * x; }
