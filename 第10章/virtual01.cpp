// virtual01.cpp
#include <iostream>
using namespace std;

class A {
 public:
  virtual int show()  // 仮想関数
  {
    cout << "基本クラスのメンバ関数です" << endl;
    return 0;
  }
};

class B : public A {
 public:
  int show() {
    cout << "派生クラスBのメンバ関数です" << endl;
    return 0;
  }
};

class C : public A {
 public:
  int show() {
    cout << "派生クラスCのメンバ関数です" << endl;
    return 0;
  }
};

int main() {
  A base, *pbase;  // pbaseは基本クラスAを指すポインタ
  B dB;
  C dC;

  pbase = &base;  // pbaseは基本クラスAを指す
  pbase->show();  // クラスAのshow関数が呼び出される

  pbase = &dB;    // pbaseは派生クラスBを指す
  pbase->show();  // クラスBのshow関数が呼び出される

  pbase = &dC;    // pbaseは派生クラスCを指す
  pbase->show();  // クラスCのshow関数が呼び出される

  return 0;
}
