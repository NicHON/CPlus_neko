// memberptr01.cpp
#include <iostream>
using namespace std;

class MyClass {
 public:
  int a;
  MyClass();
};

MyClass::MyClass() { a = 10; }

int main() {
  MyClass mc;
  int MyClass::*ptr;  // メンバポインタの宣言
  ptr = &MyClass::a;  // ptrはMyClassクラスのaを指す

  cout << "mc.*ptr = " << mc.*ptr << endl;

  return 0;
}

