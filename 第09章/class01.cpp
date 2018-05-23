// class01.cpp
#include <iostream>
using namespace std;

class BMI {
 private:
  double bw;   // 体重
  double bl;   // 身長
  double bmi;  // BMI
 public:
  int setdata();  // 身長と体重の入力を求め、BMIを計算
  int showbmi();  // BMIの値を表示
};

int BMI::showbmi() {
  cout << "BMI = " << bmi << endl;
  return 0;
}

int BMI::setdata() {
  cout << "身長(m) --- ";
  cin >> bl;
  cout << "体重(kg) --- ";
  cin >> bw;
  bmi = bw / (bl * bl);
  return 0;
}

int main() {
  BMI b;

  b.setdata();
  b.showbmi();

  return 0;
}

