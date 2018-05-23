// constructor01.cpp
#include <iostream>
using namespace std;

class Const {
 public:
  int a;
  Const();  //コンストラクタの宣言
};

Const::Const()  //コンストラクタの実装
{
  cout << "コンストラクタが呼ばれました! " << endl;
  a = 100;
  cout << "データメンバaに値を設定しました" << endl;
}

int main() {
  Const c;
  cout << "main関数からaの値を呼び出します" << endl;
  cout << "c.a = " << c.a << endl;
  return 0;
}
