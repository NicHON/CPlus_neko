// objptr01.cpp
#include <iostream>
using namespace std;

class MyClass {
  int x;

 public:
  int setx();   // xの値を入力
  int showx();  // xの値を表示
};

int MyClass::setx() {
  cout << "xの値を入力:";
  cin >> x;
  return 0;
}

int MyClass::showx() {
  cout << "x = " << x << endl;
  return 0;
}

int main() {
  MyClass *ptr;  // MyClassオブジェクトを指すポインタ
  MyClass mc;    // MyClassオブジェクト
  ptr = &mc;     // mcオブジェクトのアドレスをポインタに代入

  ptr->setx();  // ポインタを介してメンバ関数を呼び出す
  ptr->showx();

  mc.showx();  // オブジェクトからメンバ関数を呼び出す

  return 0;
}
