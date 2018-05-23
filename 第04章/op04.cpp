// op04.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double shincho = 1.72, taiju = 65.2;

  cout << "BMIは体重(kg)を身長(m)の2乗で割ったものです" << endl;
  cout << "これが25を超えると肥満です" << endl;
  // setprcisionはfixedのときは小数点以下の桁数
  // 指定なしの場合は最大の桁数
  cout << "たとえば身長" << fixed << setprecision(2) << shincho << "mで体重"
       << taiju << "kgの人では" << endl;
  cout << "BMI = " << taiju << " ÷ (" << shincho << " x " << shincho
       << ")で計算します" << endl;
  cout << "その結果は" << setprecision(1) << taiju / (shincho * shincho)
       << "でした" << endl;

  return 0;
}
