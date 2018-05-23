// while01.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int i = 10;

  while (i > 0) {
    cout << setw(2) << 11 - i << "回目の実行です" << endl;
    i--;
  }
  return 0;
}
