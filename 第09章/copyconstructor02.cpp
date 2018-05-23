// copyconstructor02.cpp
#include <iostream>
using namespace std;

class MyClass {
  int x;
  int y;

 public:
  MyClass(int m, int n);
  MyClass(const MyClass &n);  // コピーコンストラクタ
  int show();
};

// 普通の引数付きコンストラクタ
MyClass::MyClass(int m, int n) {
  x = m;
  y = n;
}

//コピーコンストラクタ
MyClass::MyClass(const MyClass &otherobj) {
  x = otherobj.x;  // xはコピー元と同じ値で初期化
  y = 0;           // yは常に0で初期化
}

int MyClass::show() {
  cout << "x = " << x << ", ";
  cout << "y = " << y << endl;
  return 0;
}

int main() {
  MyClass a(10, 100);
  MyClass b = a;

  a.show();
  b.show();

  return 0;
}

