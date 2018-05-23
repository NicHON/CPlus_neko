// string03.cpp
#include <cstring>  // strcmp関数を使うので必要
#include <iostream>
using namespace std;

int main() {
  char str1[32], str2[32];
  int cmp;  //比較結果を収めるための変数

  cout << "str1を入力してください--";
  cin >> str1;
  cout << "str2を入力してください--";
  cin >> str2;

  cmp = strcmp(str1, str2);
  if (cmp < 0)
    cout << str1 << "は、" << str2 << "より前にあります" << endl;
  else if (cmp > 0)
    cout << str1 << "は、" << str2 << "より後ろにあります" << endl;
  else
    cout << str1 << "と" << str2 << "は、同じ文字列です" << endl;

  return 0;
}
