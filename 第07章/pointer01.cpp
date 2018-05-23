// pointer01.cpp
#include <iostream>
using namespace std;

int main() {
  int a;
  int *lpa;  //ポインタlpaの宣言
  lpa = &a;  //ポインタlpaに変数aのアドレスを代入

  cout << "適当な整数値を入力してください----";
  cin >> a;

  cout << "変数aに" << a << "が代入されました。" << endl;
  cout << "変数aのアドレスは" << &a << "です。" << endl;
  cout << "変数aを指しているポインタはlpaです" << endl;
  cout << "*lpaの値は" << *lpa << "です。" << endl;

  return 0;
}
