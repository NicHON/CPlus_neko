// for02,cpp
#include <iostream>
using namespace std;

int main() {
  int i = 100;  // main関数内で有効なi

  for (int i = 0; i < 5; i++) {  // forブロック内で有効なi
    cout << "i = " << i << endl;
  }

  cout << "forループを抜けました" << endl;
  // ここでは、もうforブロック内のiは無効
  cout << "i = " << i << endl;

  return 0;
}
