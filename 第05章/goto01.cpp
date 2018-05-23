// foto01.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int i = 10;

START:
  if (i > 0) {
    cout << setw(2) << (11 - i) << "回目の実行です" << endl;
    i--;
    goto START;
  }
  return 0;
}
