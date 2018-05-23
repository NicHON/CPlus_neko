// constructor02.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>  // strcpy関数を使うので必要
#include <iostream>
using namespace std;

class Person {
  char name[32];
  int age;
  char sex;

 public:
  Person(char *, int, char);
  int show();
};

Person::Person(char *nm, int n, char s) {
  strcpy(name, nm);  // データメンバnameをnmの文字列に設定
  age = n;           // データメンバageをnの値に設定
  sex = s;           // データメンバsexをsの値を設定
}

int Person::show() {
  cout << "氏名: " << name << endl;
  cout << "年齢: " << age << "歳" << endl;
  cout << "性別: " << sex << endl;
  return 0;
}

int main() {
  // 引数を指定してオブジェクトを作成する
  Person Yamada("山田太郎", 26, 'M');
  Person Tanaka("田中花子", 24, 'F');

  cout << "------------" << endl;
  Yamada.show();
  cout << "------------" << endl;
  Tanaka.show();
  cout << "------------" << endl;

  return 0;
}

