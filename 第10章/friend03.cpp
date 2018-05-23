// friend03.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>  // strcpy関数を使うので必要
#include <iostream>
using namespace std;

class Dog;  // Dogクラスは定義前にも出現するので宣言が必要

class Cat {
  char nakigoe[32];

 public:
  Cat() { strcpy(nakigoe, "ニャー、ニャー"); }
  friend int getkoe(Cat Tama, Dog Pochi);
};

class Dog {
  char nakigoe[16];

 public:
  Dog() { strcpy(nakigoe, "ワンワン"); }
  friend int getkoe(Cat Tama, Dog Pochi);
};

int getkoe(Cat Tama, Dog Pochi) {
  cout << "猫は" << Tama.nakigoe << "となきます" << endl;
  cout << "犬は" << Pochi.nakigoe << "となきます" << endl;
  return 0;
}

int main() {
  Cat a;
  Dog b;
  getkoe(a, b);
  return 0;
}

