// strcpy01.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>  // strcpy関数を使うので必要
#include <iostream>
using namespace std;

int main() {
  char str[] = "ABC";

  cout << str << endl;
  strcpy(str, "def");
  cout << str << endl;

  return 0;
}
