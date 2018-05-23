// simpleclass01.cpp
#include <iostream>
using namespace std;

class MyClass {  // クラス宣言
 private:        // 非公開部
  int a;

 public:  // 公開部
  int b;
  int set_a();
  int show_a();
};  // クラス宣言には最後にセミコロン! int a;とするのと同じだ!

int MyClass::set_a()  // メンバ関数の定義
{
  cout << "a -->";
  cin >> a;
  return 0;
}

int MyClass::show_a()  // メンバ関数の定義
{
  cout << a << endl;
  return 0;
}

int main() {
  MyClass mc;  // クラスのインスタンスを作成

  // bは公開メンバなので直接値を代入できる
  mc.b = 100;
  cout << "b = " << mc.b << endl;  // bの値を確認

  // 次の行はエラー（非公開部にはアクセスできない）
  // mc.a = 200; // エラー！！

  // aに値を代入するには、公園メンバのset_a関数を利用する
  mc.set_a();
  // aの値を確認するには、公開メンバのshow_a関数を利用する
  mc.show_a();

  return 0;
}
