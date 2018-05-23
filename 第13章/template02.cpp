// template02.cpp
#include <iostream>
using namespace std;

// テンプレート関数
template <typename A, typename B>
A func(A a, B b) {
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "戻り値 = " << a << endl;
  return a;
}

int main() {
  char c;
  int i;

  i = func(1, "abc");   // intとchar*を渡す
  c = func('A', 12.5);  // charとdoubleを渡す

  return 0;
}
