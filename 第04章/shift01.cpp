// shift01.cpp
#include <iostream>
using namespace std;

int main() {
  short a = 12, b = 100, c = -50;

  cout << a << "を左に1ビットシフト --- " << (a << 1) << endl;
  cout << "さらに1ビット左シフト --- " << (a << 2) << endl;
  cout << "さらに1ビット左シフト --- " << (a << 3) << endl;
  cout << "さらに1ビット左シフト --- " << (a << 4) << endl;
  cout << endl;
  cout << b << "を右に1ビットシフト --- " << (b >> 1) << endl;
  cout << "さらに1ビット右シフト --- " << (b >> 2) << endl;
  cout << "さらに1ビット右シフト --- " << (b >> 3) << endl;
  cout << "さらに1ビット右シフト --- " << (b >> 4) << endl;
  cout << "（処理系依存）" << endl;
  cout << c << "を左に1ビットシフト --- " << (c << 1) << endl;
  cout << c << "を右に1ビットシフト --- " << (c >> 1) << endl;

  return 0;
}

