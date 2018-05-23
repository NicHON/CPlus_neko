// pointer04.cpp
#include <iostream>
using namespace std;

int main() {
  int a;
  int *p;    //ポインタ
  int **pp;  //ポインタのポインタ

  p = &a;  // ポインタpに変数aのアドレスを代入
  pp = &p;  // ポインタのポインタppにポインタpのアドレスを代入
  **pp = 10;

  cout << "a = " << a << ", *p = " << *p << ", **pp = " << **pp << endl;
  return 0;
}
