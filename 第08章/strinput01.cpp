// strinput01.cpp
#include <iostream>
using namespace std;

int main() {
  char str[256];  // 入力を受け取るための文字配列

  cout << "文字列を入力してください -- ";
  cin >> str;
  cout << "str:" << str << endl;

  return 0;
}
