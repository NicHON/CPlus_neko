// friend01.cpp
#include <iostream>
using namespace std;

class A {
  int x;

 public:
  A() { x = 0; }
  A(int n) { x = n; }
  int show() {
    cout << "x = " << x << endl;
    return 0;
  }

  friend int fshow(A a);  // フレンド関数と認定
};

int fshow(A a) {                  // フレンド関数の実装
  cout << "x = " << a.x << endl;  // クラスAの非公開メンバにアクセス
  return 0;
}

int main() {
  A obj1(10), obj2;

  obj1.show();
  fshow(obj1);

  obj2.show();
  fshow(obj2);
  return 0;
}
