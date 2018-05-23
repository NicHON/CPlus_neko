// pointer01.cpp
#include <iostream>
using namespace std;

class A {
 public:
  int show();
};

int A::show() {
  cout << "基本クラスのメンバ関数です" << endl;
  return 0;
}

// 派生クラス
class B : public A {
 public:
  int x;
  B();
  int show();
};

B::B() { x = 100; }

int B::show() {
  cout << "派生クラスのメンバ関数です" << endl;
  return 0;
}

int main() {
  A *pbase;   // 基本クラスAを指すポインタ
  B derived;  // 派生クラスBのオブジェクト

  // 基本クラスのポインタに派生クラスのアドレスを代入
  pbase = &derived;

  // 次は、一見派生クラスのshow関数を呼び出しそうですが・・・
  // 実際は基本クラスのshow関数が呼ばれます
  pbase->show();

  // 型キャストして無理矢理Bクラスを指すように変換すると
  // 派生クラスのshow関数が呼ばれます
  ((B *)pbase)->show();

  // xはBクラスのメンバなので、pbase->xとはできない
  cout << "x = " << ((B *)pbase)->x << endl;

  return 0;
}
