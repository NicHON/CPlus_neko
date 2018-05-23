// swap01.cpp（意図した動作をしないプログラム）
#include <iostream>
using namespace std;

void swap(int, int);

int main() {
  int a, b;
  a = 10;
  b = 20;

  // swap関数でaとbの値を入れ替えてもらうことを期待
  swap(a, b);

  cout << "a = " << a << ", b = " << b << endl;

  return 0;
}

void swap(int a, int b) {
  int c;

  c = b;  // bの値をcに代入
  b = a;  // aの値をbに代入
  a = c;  // cに入れてあった元のbの値をaを代入
  //これで、aとbの値が入れ替わったはずだが ・・・・・・
  return;
}
