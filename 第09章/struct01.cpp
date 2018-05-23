// struct01.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>  // strcpy関数を使うので必要
#include <iostream>
using namespace std;

int main() {
  struct A {  // 構造体Aを定義
    char str[16];
    int n;
  };

  A a;  // A型の変数aを宣言

  strcpy(a.str, "abc");
  a.n = 10;

  cout << "a.str ---- " << a.str << endl;
  cout << "a.n ------ " << a.n << endl;

  return 0;
}
