// array02.cpp
#include <iostream>
using namespace std;

int main() {
  int a[4] = {1, 2, 100};  // 4つの要素を持つint型の配列を初期化
                           //ただし、4番目の要素は省略
  int i;

  for (i = 0; i < 4; i++) cout << "a[" << i << "] = " << a[i] << ", ";
  cout << "\b\b \b" << endl;

  return 0;
}
