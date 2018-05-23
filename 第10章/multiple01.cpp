// multiple01.cpp
#include <iostream>
using namespace std;

class B1 {
  int x;

 public:
  B1() { x = 10; }
  void showB1() { cout << "x = " << x << endl; }
};

class B2 {
  int y;

 public:
  B2() { y = 20; }
  void showB2() { cout << "y = " << y << endl; }
};

class D : public B1, public B2 {
  int d;

 public:
  D() { d = 30; }
  void show() { cout << "d = " << d << endl; }
};

int main() {
  D der;
  der.showB1();  // クラスB1のメンバ関数
  der.showB2();  // クラスB2のメンバ関数
  der.show();    // クラスDのメンバ関数

  return 0;
}

