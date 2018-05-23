// char02.cpp
#include <iostream>
using namespace std;

int main() {
  char a1, a2, a3;

  a1 = 'A';
  a2 = 'B';
  a3 = 'C';

  // 文字はintに型キャストして出力するとASCIIコードになる
  cout << "a1 = " << (int)a1 << ", a2 = " << (int)a2 << ", a3 = " << (int)a3
       << endl;

  return 0;
}
