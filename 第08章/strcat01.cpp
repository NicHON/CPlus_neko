// strcat01.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>  // strcat関数を使うので必要
#include <iostream>
using namespace std;

int main() {
  char name[64], sama[] = "様";

  cout << "お名前を入力してください。---";
  cin >> name;

  strcat(name, sama);
  cout << name << "ですね。お待ちしておりました" << endl;

  return 0;
}
