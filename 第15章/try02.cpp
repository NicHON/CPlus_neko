// try02.cpp
#include <iostream>
using namespace std;

int main() {
  double x;

  try {
    cout << "2以上10未満の数値を入力してください";
    cin >> x;
    if (x < 2.0) throw 1;
    if (x >= 10.0) throw 2;
    cout << "入力して数値は" << x << "です" << endl;

  } catch (int n) {
    switch (n) {
      case 1:
        cout << "2以上の数値を入力してください" << endl;
        break;
      case 2:
        cout << "10未満の数値を入力してください" << endl;
        break;
      default:
        cout << "Error!" << endl;
    }
  }
  return 0;
}
