// sum01.cpp
#include <iostream>
using namespace std;

int main() {
  int sum = 0, p;  // sum: 合計点, p: 点数

  while (1) {  //無限ループ
    cout << "点数(999で終了)----";
    cin >> p;
    if (p == 999) break;
    sum = sum + p;
  }
  cout << "合計点は" << sum << "点です" << endl;

  return 0;
}
