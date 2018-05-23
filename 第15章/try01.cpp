// try01.cpp
#include <iostream>
using namespace std;

int main() {
  double x;

  try {
    cout << "正の数値を入力してください";
    cin >> x;
    if (x < 0.0) throw 1;
    cout << "入力した数値は" << x << "です" << endl;

  } catch (int) {
    cout << "入力した数値が不正です" << endl;
  }
  return 0;
}
