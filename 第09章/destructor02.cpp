// destructor02.cpp
#include <iostream>
using namespace std;

class MyClass {
  int *pn;
  int no;

 public:
  MyClass();       // 引数なしのコンストラクタ
  MyClass(int n);  // 引数1個のコンストラクタ
  ~MyClass();      // デストラクタ
  int setnum();
  int readnum();
};

MyClass::MyClass() {
  pn = new int[5];  // メモリを動的に確保
  no = 5;
  cout << "int型5個分の領域を確保しました" << endl;
}

MyClass::MyClass(int n) {
  pn = new int[n];  // メモリを動的に確保
  no = n;
  cout << "int型" << no << "個分の領域を確保しました" << endl;
}

int MyClass::setnum() {
  for (int i = 0; i < no; i++) {
    cout << i + 1 << "番目の整数値 --- ";
    cin >> pn[i];
  }
  return 0;
}

int MyClass::readnum() {
  for (int i = 0; i < no; i++) cout << "pn[" << i << "] = " << pn[i] << endl;
  return 0;
}

MyClass::~MyClass() {
  delete[] pn;  // 動的に確保したメモリを解放
  cout << "int型" << no << "個分の領域を解放しました!" << endl;
}

int main() {
  MyClass mc, mcx(2);
  mc.setnum();
  mc.readnum();
  mcx.setnum();
  mcx.readnum();
  return 0;
}
