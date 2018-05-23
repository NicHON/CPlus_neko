// relop01.cpp
#include <cmath>  // sqrt関数を使うので必要
#include <iostream>
using namespace std;

class VECTOR {
  double x;
  double y;
  double size() { return sqrt(x * x + y * y); }

 public:
  VECTOR(double a = 0.0, double b = 0.0) {
    x = a;
    y = b;
  }

  bool operator>(VECTOR v) { return (size() > v.size()); }
  bool operator<(VECTOR v) { return (size() < v.size()); }
  bool operator>=(VECTOR v) { return (size() >= v.size()); }
  bool operator<=(VECTOR v) { return (size() <= v.size()); }
  bool operator==(VECTOR v) { return ((x == v.x) && (y == v.y)); }
};

int main() {
  VECTOR a(2.5, 4.5), b(4, 5), c(-2.5, 4.5);

  cout << "a < b -----  " << (a < b) << endl;
  cout << "a > b -----  " << (a > b) << endl;
  cout << "a < c -----  " << (a < c) << endl;
  cout << "a > c -----  " << (a > c) << endl;
  cout << endl;
  cout << "a <= b -----  " << (a <= b) << endl;
  cout << "a >= b -----  " << (a >= b) << endl;
  cout << "a <= c -----  " << (a <= c) << endl;
  cout << "a >= c -----  " << (a >= c) << endl;
  cout << endl;
  cout << "a == b -----  " << (a == b) << endl;
  cout << "a == c -----  " << (a == c) << endl;
  cout << "a == a -----  " << (a == a) << endl;

  return 0;
}
