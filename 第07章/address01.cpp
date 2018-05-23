// address01.cpp
#include <iostream>
using namespace std;

int main() {
  char c;
  int i;
  double d, e;

  // 文字や文字列のアドレス表示はvoid*に型キャスト
  cout << "変数cのアドレスは" << (void *)&c << "です" << endl;
  cout << "変数iのアドレスは" << &i << "です" << endl;
  cout << "変数dのアドレスは" << &d << "です" << endl;
  cout << "変数eのアドレスは" << &e << "です" << endl;

  return 0;
}
