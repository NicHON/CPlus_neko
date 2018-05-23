// virtualbasic01.cpp
#include <iostream>
using namespace std;

class B1 {
 protected:
  int x;

 public:
  void showx() { cout << "x = " << x << endl; }
  B1() {
    cout << "B1のコンストラクタが呼ばれました" << endl;
    x = 10;
    cout << "xを10に設定しました" << endl;
  }
};

class B2 : virtual public B1 {
 public:
  B2() {
    cout << "B2のコンストラクタが呼ばれました" << endl;
    x = 100;
    cout << "xを100に設定しました" << endl;
  }
};

class B3 : virtual public B1 {
 public:
  B3() {
    cout << "B3のコンストラクタが呼ばれました" << endl;
    x = 200;
    cout << "xを200に設定しました" << endl;
  }
};

class D : public B2, public B3 {
 public:
  void show() {
    cout << "クラスDのshow関数でxを表示します" << endl;
    cout << "x = " << x << endl;
  }
};

int main() {
  D d;
  d.show();
  return 0;
}

