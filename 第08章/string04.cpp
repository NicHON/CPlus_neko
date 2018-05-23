// string04.cpp
#include <cstring>  //strlen関数を使うので必要
#include <iostream>
using namespace std;

int main() {
  char str[32];
  size_t len;  //文字列の長さを収めるための変数

  cout << "文字列を入力してください--";
  cin >> str;

  len = strlen(str);
  cout << str << "の長さは" << len << "です" << endl;

  return 0;
}
