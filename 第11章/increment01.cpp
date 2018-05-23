// increment01.cpp
#include <iostream>
using namespace std;

class VECTOR {
  double x;
  double y;

 public:
  VECTOR(double a = 0.0, double b = 0.0) {
    x = a;
    y = b;
  }
  void showxy() { cout << "(" << x << ", " << y << ")"; }

  VECTOR operator++();     // 前置型インクリメント演算子
  VECTOR operator++(int);  // 後置型インクリメント演算子
};

VECTOR VECTOR::operator++() {
  ++x;
  ++y;
  return *this;
}

VECTOR VECTOR::operator++(int) {
  VECTOR C;
  C = *this;
  x += 1.0;
  y += 1.0;
  return C;
}

int main() {
  VECTOR a(2.5, 4.5);

  a.showxy();
  cout << " ----- 最初の値" << endl;
  (a++).showxy();
  cout << " ----- 「a++」実行時の値" << endl;
  a.showxy();
  cout << " ----- 「a++」実行時の値" << endl;
  (++a).showxy();
  cout << " ----- 「++a」実行時の値" << endl;
  a.showxy();
  cout << " ----- 「++a」実行後の値" << endl;

  return 0;
}
