// inheritance04.cpp
#include <iostream>
using namespace std;

class A {
 public:
  int a;
  int set(int x) {
    a = x;
    return 0;
  }
};

class B : public A {
 public:
  int b;
  int set(int x) {
    b = x;
    return 0;
  }
};

int main() {
  B child;
  child.set(5);   // Bクラスのset関数を呼び出す
  child.set(10);  // Aクラスのset関数を呼び出す

  cout << "a = " << child.a << endl;
  cout << "b = " << child.b << endl;

  return 0;
}
