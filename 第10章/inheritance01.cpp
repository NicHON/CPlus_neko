// inheritance01.cpp
#include <iostream>
using namespace std;

class MyBase {
 private:
  int a;

 protected:
  int b;

 public:
  int c;
  MyBase();
  ~MyBase();
  void show_data();
};

MyBase::MyBase() {
  cout << "MyBaseクラスのコンストラクタが呼ばれました!" << endl;
  a = 10;
  b = 20;
  c = 30;
}

MyBase::~MyBase() {
  cout << "MyBaseクラスのデストラクタが呼ばれました!" << endl;
}

void MyBase::show_data() {
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  return;
}

// MyBaseクラスを継承する派生クラス
class MyDerived : public MyBase {
  int d;

 public:
  void show_myderived();
  MyDerived();
  ~MyDerived();
};

MyDerived::MyDerived() {
  cout << "派生クラスのコンストラクタが呼ばれました!" << endl;
  // a = 100; // アクセスできません
  b = 200;
  c = 300;
  d = 400;
}

MyDerived::~MyDerived() {
  cout << "派生クラスのデストラクタが呼ばれました!" << endl;
}

void MyDerived::show_myderived() {
  // cout << "a = " << a << endl; // aにはアクセスできません
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
  return;
}

int main() {
  MyDerived der;
  cout << "派生クラスのshow_myderived()を呼び出します" << endl;
  der.show_myderived();
  cout << "基本クラスのshow_data()を呼び出します" << endl;
  der.show_data();
  return 0;
}

