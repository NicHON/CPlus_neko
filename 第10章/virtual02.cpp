// virtual02.cpp
#include <cmath>  // math関数を使うので必要
#include <iostream>
using namespace std;

// 抽象クラス
class DATA {
 protected:
  double x;
  double y;

 public:
  virtual double setelement(double a, double b) = 0;
  virtual void getelement(double *a, double *b) = 0;
};

// 派生クラス
class VECTOR : public DATA {
  double size;

 public:
  double setelement(double a, double b);
  void getelement(double *a, double *b);
  double showsize();
  double calcsize(double a, double b);
  VECTOR();
  VECTOR(double a, double b);
};

VECTOR::VECTOR() {
  x = 0;
  y = 0;
  size = 0;
}

VECTOR::VECTOR(double a, double b) {
  x = a;
  y = b;
  size = calcsize(a, b);
}

double VECTOR::setelement(double a, double b) {
  x = a;
  y = b;
  size = calcsize(a, b);
  return size;
}

void VECTOR::getelement(double *a, double *b) {
  *a = x;
  *b = y;
}

double VECTOR::showsize() { return size; }

double VECTOR::calcsize(double a, double b) {
  return sqrt(pow(a, 2.0) + pow(b, 2.0));
}

int showvector(VECTOR v) {
  double x, y;
  v.getelement(&x, &y);
  cout << "ベクトル(" << x << ", " << x << ")のサイズは" << v.showsize()
       << "です" << endl;
  return 0;
}

int main() {
  VECTOR A, B(5.0, 7.0), C;

  A.setelement(10.0, 20.0);
  C.setelement(2.5, -25.0);

  showvector(A);
  showvector(B);
  showvector(C);

  return 0;
}

