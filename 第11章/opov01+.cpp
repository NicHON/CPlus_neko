// opov01.cpp
#include <iostream>
using namespace std;

class VECTOR {
  double x;
  double y;

 public:
  int setelement(double a, double b);
  int readelement(double *a, double *b);
  VECTOR operator+(VECTOR A);  // +演算子の宣言
  VECTOR operator-(VECTOR A);  // -演算子の宣言
  double operator*(VECTOR A);  // *演算子の宣言
};

int VECTOR::setelement(double a, double b) {
  x = a;
  y = b;
  return 0;
}

int VECTOR::readelement(double *a, double *b) {
  *a = x;
  *b = y;
  return 0;
}

VECTOR VECTOR::operator+(VECTOR A) {  // +演算子の実装
  VECTOR C;
  C.x = x + A.x;
  C.y = y + A.y;
  return C;
}

VECTOR VECTOR::operator-(VECTOR A) {  // -演算子の実装
  VECTOR C;
  C.x = x - A.x;
  C.y = y - A.y;
  return C;
}

double VECTOR::operator*(VECTOR A) {  // *演算子の実装
  return x * A.x + y * A.y;
}

int main() {
  VECTOR v, v1, v2;
  double a, b, d;

  v1.setelement(2.5, 8.5);
  v2.setelement(4.0, 2.0);

  // -演算子のテスト
  v = v1 - v2;
  v.readelement(&a, &b);
  cout << "v1 - v2 = (" << a << ", " << b << ")" << endl;

  // *演算子のテスト
  d = v1 * v2;
  cout << "v1 * v2 = " << d << endl;

  return 0;
}
