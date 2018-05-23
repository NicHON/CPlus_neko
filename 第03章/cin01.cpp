// cin01.cpp
#include <iostream>
using namespace std;

int main() {
  int x, y;

  cout << "xの値（整数値）を入力--->";
  cin >> x;
  cout << "yの値を入力--->";
  cin >> y;
  cout << "あなたが入力したのは" << x << "と" << y << "ですね!" << endl;
  cout << "その合計は" << x + y << "です。" << endl;

  return 0;
}
