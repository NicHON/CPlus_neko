// pointer02.cpp
#include <iostream>
using namespace std;

int main() {
  int *pa;  // paにはゴミが入っている
  int a;

  pa = &a;  // 変数aのアドレスが代入された
  *pa = 5;  // aのアドレスに5を代入、つまりaに5を代入

  cout << "*pa = " << *pa << endl;
  cout << "a = " << a << endl;

  return 0;
}

