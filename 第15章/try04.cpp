// try04.cpp
#include <iostream>
using namespace std;

class MyError {
  double x;

 public:
  void setx(double d) { x = d; }
  void Error() { cout << x << "は、10未満の数値ではありません" << endl; }
};

int main() {
  char str[64];
  double d;

  try {
    MyError e;
    cout << "10未満の数値を入力 --- ";
    cin.getline(str, 64);
    d = atof(str);
    e.setx(d);
    if (d >= 10.0) throw(e);
    cout << "入力した数値: " << d << endl;
  }

  catch (MyError ex) {
    ex.Error();
  }

  return 0;
}
