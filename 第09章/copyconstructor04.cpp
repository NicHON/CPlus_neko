// copyconstructor04.cpp
#include <iostream>
using namespace std;

class MyClass {
  int x;
  int *px;  // ポインタ型のデータメンバ
 public:
  MyClass(int m);
  void setvalue(int n);
  void show_px();
};

MyClass::MyClass(int m)  // コンストラクタ
{
  x = m;    // 引数の値で初期化
  px = &x;  // xを指すように初期化
}

void MyClass::setvalue(int n) { x = n; }

void MyClass::show_px() { cout << *px << endl; }

int main() {
  MyClass a(10);
  MyClass b = a;  // デフォルトのコピーコンストラクタが呼び出される

  a.show_px();  // (1)
  b.show_px();  // (2)

  b.setvalue(200);  // b.xの値を変更

  a.show_px();  // (3)
  b.show_px();  // (4)

  return 0;
}

