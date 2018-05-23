// for04.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int i = 1;

  for (;;) {  // 全部省略して無限ループ
    cout << setw(2) << i << "回目" << endl;
    if (i >= 10)  // iが10以上なら
      break;      // for文を抜ける
    i++;
  }

  return 0;
}
