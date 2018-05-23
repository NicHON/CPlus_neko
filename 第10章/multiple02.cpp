// multiple02.cpp
#include <iostream>
using namespace std;

class base1 {
 protected:
  int x;

 public:
  base1() { x = 10; }
  void readx() { cout << "x = " << x << endl; }
};

class base2 {
 protected:
  int x;

 public:
  base2() { x = 100; }
  void readx() { cout << "x = " << x << endl; }
};

class derived : public base1, public base2 {
 public:
  void show() {
    cout << "base1::x = " << base1::x << endl;
    cout << "base2::x = " << base2::x << endl;
  }
};

int main() {
  derived d;
  d.base1::readx();  // クラスbase1のreadx関数
  d.base2::readx();  // クラスbase2のreadx関数
  d.show();

  return 0;
}

