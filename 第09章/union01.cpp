// union01.cpp
#include <iostream>
using namespace std;

union AMOUNT {
  int x;
  double y;
};

int main() {
  AMOUNT at;  // union AMOUNT at;としてもよい

  at.x = 100;

  cout << "at.x = " << at.x << endl;
  // cout < "at.y = " << at.y << endl;
  // at.yは不定

  at.y = 3.14;

  // cout << "at.x = " << at.x << endl;
  // at.yを設定したのでat.xは不定
  cout << "at.y = " << at.y << endl;

  return 0;
}
