// swap02.cpp
#include <iostream>
using namespace std;

void swap(int *, int *);

int main() {
  int a, b;
  a = 10;
  b = 20;

  // swap関数に変数a, bのアドレスを教える
  swap(&a, &b);

  cout << "a = " << a << ", b = " << b << endl;

  return 0;
}

void swap(int *x, int *y) {
  int z;

  z = *y;  // bの値をcに代入
  *y = *x;
  *x = z;

  return;
}
