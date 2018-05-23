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

int main() {
  VECTOR v1, v2, v3;

  v1.setelement(2, 8);
  v2.setelement(2.5, 3.5);
  v3 = v1 + v2;

  double a, b;
  v3.readelement(&a, &b);
  cout << a << endl;
  cout << b << endl;

  return 0;
}
