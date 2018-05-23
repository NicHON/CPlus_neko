// template03.cpp
#include <iostream>
using namespace std;

template <typename T>
void func(T a) {
  cout << a << endl;
}

template <typename T>
void func(T a, T b) {
  cout << a << ", " << b << endl;
}

template <typename T>
void func(T a, T b, T c) {
  cout << a << ", " << b << ", " << c << endl;
}

int main() {
  func(1.25);                          // 引数1個
  func(5, 6);                          // 引数2個
  func("今日は", "良い", "元気です");  // 引数3個

  return 0;
}
