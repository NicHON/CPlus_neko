// inheritance03.cpp
#include <iostream>
using namespace std;

// デフォルトコンストラクタのないクラス
class Moto {
 public:
  int a;
  Moto(int x) { a = x; }
};

class Saki : public Moto {
 public:
  int b;
  // このコンストラクタでは
  // 基本クラスの引数付きコンストラクタを利用することを明示
  Saki() : Moto(5) { b = 10; }
};

int main() {
  Saki s;
  cout << "s.a = " << s.a << endl;
  cout << "s.b = " << s.b << endl;

  return 0;
}
