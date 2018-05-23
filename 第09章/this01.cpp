// this01.cpp
#include <iostream>
using namespace std;

class MyClass {
  int x;

 public:
  int setx(int n);
  int readx(int *pn);
};

int MyClass::setx(int n) {
  this->x = n;
  return 0;
}

int MyClass::readx(int *pn) {
  *pn = this->x;
  return 0;
}

int main() {
  MyClass mc;

  mc.setx(10);
  int num;
  mc.readx(&num);
  cout << "x = " << num << endl;

  return 0;
}
