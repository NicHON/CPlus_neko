// local01.cpp
#include <iostream>
using namespace std;

int func();

int i = 10;  //グローバル変数

int main() {
  int i = 5;  // main関数内で有効なローカル変数
  {
    int i = 3;  //ブロック内で有効なローカル変数
    cout << "main関数の中のブロック内:i = " << i << endl;
  }
  cout << "main関数内:i = " << i << endl;
  func();

  return 0;
}

int func() {
  cout << "function関数:i = " << i << endl;
  return 0;
}
