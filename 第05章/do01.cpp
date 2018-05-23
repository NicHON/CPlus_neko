// do01.cpp
#include <iostream>
using namespace std;

int main() {
  int n;

  do {
    cout << "整数を入力してください（0で終了）---";
    cin >> n;
    cout << "あなたの入力した数字は" << n << "ですね" << endl;
  } while (n);

  return 0;
}
