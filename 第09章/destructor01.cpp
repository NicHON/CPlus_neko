// destructor01.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;

class MyClass {
  char objname[32];  // オブジェクト名を示す文字列
 public:
  MyClass(char *pname);  // コンストラクタ
  ~MyClass();            // デストラクタ
};

MyClass::MyClass(char *pname) {
  cout << pname << "のコンストラクタが呼び出されました" << endl;
  strcpy(objname, pname);
}

MyClass::~MyClass() {
  cout << objname << "のデストラクタが呼び出されました" << endl;
}

MyClass mc0("mc0");  // グローバル領域のオブジェクト

int main() {
  MyClass mc1("mc1"), mc2("mc2");
  { MyClass mc3("mc3"); }
  MyClass mc4("mc4");

  return 0;
}
