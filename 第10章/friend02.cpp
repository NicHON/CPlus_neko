// friend02.cpp
#include <iostream>
using namespace std;

class A {
  int x;

 public:
  A() { x = 100; }
  void show() { cout << x << endl; }
  friend int fshow(A a);
};

class B : public A {
  int x;

 public:
  B() { x = 1000; }
  void show() { cout << x << endl; }
};

int fshow(A a) {
  cout << a.x << endl;
  return 0;
}

int main() {
  B b;
  b.show();  // 当然、「1000」と表示される
  fshow(b);  // クラスBのオブジェクトを渡す

  return 0;
}
