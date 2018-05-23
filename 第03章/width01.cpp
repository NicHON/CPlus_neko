// width01.cpp
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 150; i += 30) {
    cout.width(5);   // 桁を5に設定
    cout.fill('*');  // 「*」で余白を埋める
    cout << i << endl;
  }

  return 0;
}
