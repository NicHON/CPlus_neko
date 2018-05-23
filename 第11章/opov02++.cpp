// opov02.cpp
#include <iostream>
using namespace std;

class VECTOR {
  double x;
  double y;

 public:
  // コンストラクタ
  VECTOR() {
    x = 0.0;
    y = 0.0;
  }
  VECTOR(double a, double b) {
    x = a;
    y = b;
  }
  // メンバ関数
  void setelement(double a, double b) {
    x = a;
    y = b;
  }
  void readelement(double *a, double *b) {
    *a = x;
    *b = y;
  }
  double getx() { return x; }
  double gety() { return y; }
  // 演算子
  VECTOR operator+(VECTOR A);  // VECTOR + VECTOR
  VECTOR operator-(VECTOR A);  // VECTOR - VECTOR
  double operator*(VECTOR A);  // VECTOR * VECTOR
  VECTOR operator*(double d);  // VECTOR * double
  VECTOR operator-();          // 単項演算子「-」
  friend VECTOR operator*(double a, VECTOR v);
};

VECTOR VECTOR::operator+(VECTOR A) {
  VECTOR C;
  C.x = x + A.x;
  C.y = y + A.y;
  return C;
}

VECTOR VECTOR::operator-(VECTOR A) {
  VECTOR C;
  C.x = x - A.x;
  C.y = y - A.y;
  return C;
}

double VECTOR::operator*(VECTOR A) { return x * A.x + A.y; }

VECTOR VECTOR::operator*(double d) {  // VECTOR * double
  VECTOR V;
  V.x = x * d;
  V.y = y * d;
  return V;
}

VECTOR VECTOR::operator-() {
  this->x *= -1.0;  //単に「x *= -1.0;」としてもよい
  this->y *= -1.0;  //単に「y *= -1.0;」としてもよい
  return *this;
}

VECTOR operator*(double a, VECTOR v) {  // double * VECTOR
  VECTOR z;
  z.setelement(a * v.x, a * v.y);
  return z;
}

int main() {
  VECTOR v, v1(2.0, 3.0);

  // 「double * VECTOR」のテスト
  v = 2.0 * v1;
  cout << "2.0 * v1 = (" << v.getx() << ", " << v.gety() << ")" << endl;

  // 「VECTOR * double」のテスト
  v = v1 * 2.0;
  cout << "v1 * 2.0 = (" << v.getx() << ", " << v.gety() << ")" << endl;

  return 0;
}

