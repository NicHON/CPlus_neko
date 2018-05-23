// ave01.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int sum = 0, p = 0, n = 0;
  while (p != 999) {
    cout << "点数(999で終了）---";
    cin >> p;
    if (p != 999) {
      sum = sum + p;
      n++;
    }
  }
  cout << n << "人の合計点は" << sum << "点です" << endl;
  cout << "平均点は" << setw(5) << fixed << setprecision(1) << (double)sum / n
       << "点です" << endl;

  return 0;
}
