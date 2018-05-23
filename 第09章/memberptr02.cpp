// memberptr02.cpp
#include <iostream>
using namespace std;

class MyClass {
  int x;

 public:
  MyClass();
  int show();
  int show(int a);
};

MyClass::MyClass() { x = 100; }

int MyClass::show() {
  cout << "x = " << x << endl;
  return 0;
}

int MyClass::show(int a) {
  cout << "引数付きのshow関数が呼ばれました" << endl;
  cout << "受け取った数値は" << a << "です" << endl;
  return 0;
}

int main() {
  MyClass mc;

  // メンバ関数へのポインタ宣言
  int (MyClass::*ptr1)();
  int (MyClass::*ptr2)(int);

  // ptr1はMyClassクラスの引数なしshowメンバ関数を指す
  ptr1 = &MyClass::show;
  // ptr2はMyClassクラスの引数ありshowメンバ関数を指す
  ptr2 = &MyClass::show;

  (mc.*ptr1)();
  (mc.*ptr2)(20);

  return 0;
}
