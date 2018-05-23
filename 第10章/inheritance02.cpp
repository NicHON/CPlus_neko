// inheritance02.cpp // コンパイルできない
#include <iostream>
using namespace std;

// デフォルトコンストラクタのないクラス
class Moto {
 public:
  int a;
  Moto(int x) { a = x; }
};

// 派生クラス
class Saki : public Moto {
 public:
  int b;
  Saki() { b = 10; }
};

int main() {
  Saki s;
  cout << "s.a = " << s.a << endl;
  cout << "s.b = " << s.b << endl;

  return 0;
}

