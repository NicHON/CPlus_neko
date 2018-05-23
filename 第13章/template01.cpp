// template01.cpp
#include <iostream>
using namespace std;

// テンプレート関数
template <typename T>
void comp(T a, T b) {
  if (a > b) {
    cout << "(" << a << ") > (" << b << ")" << endl;
  } else if (a < b) {
    cout << "(" << a << ") < (" << b << ")" << endl;
  } else {
    cout << "(" << a << ") = (" << b << ")" << endl;
  }
}

int main() {
  comp(2, 3);      // int型を渡す
  comp(2.5, 0.5);  // double型を渡す
  comp('a', 'a');  // char型を渡す
  comp('s', 'S');  // char型を渡す

  return 0;
}
