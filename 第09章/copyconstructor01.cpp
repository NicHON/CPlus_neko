// copyconstructor01.cpp
#include <iostream>
using namespace std;

class MyClass {
  int x;
  int y;

 public:
  MyClass(int m, int n);  //通常のコンストラクタ
  int show();
};

MyClass::MyClass(int m, int n) {
  x = m;
  y = n;
}

int MyClass::show() {
  cout << "x = " << x << ", "
       << "y = " << y << endl;
  return 0;
}

int main() {
  MyClass a(10, 100);
  MyClass b = a;  // オブジェクトをコピーする

  a.show();
  b.show();

  return 0;
}
