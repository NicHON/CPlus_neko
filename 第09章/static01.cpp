// static01.cpp
#include <iostream>
using namespace std;

class Meibo {
  char name[32];
  double bw;
  double bl;

 public:
  static double bw_total;  // 静的データメンバ
  static double bl_total;  // 静的データメンバ
  void setdata();
};

double Meibo::bw_total = 0.0;  // 静的で０田メンバは、
double Meibo::bl_total = 0.0;  // クラスの外部で初期化する

void Meibo::setdata() {
  cout << "氏名 --- ";
  cin >> name;
  cout << "体重 --- ";
  cin >> bw;
  cout << "身長 --- ";
  cin >> bl;

  bw_total += bw;  // 体重の値を加算
  bl_total += bl;  // 身長の値を加算
}

int main() {
  Meibo man[3];

  for (int i = 0; i < 3; i++) man[i].setdata();

  cout << "体重の合計は" << Meibo::bw_total << "です" << endl;
  cout << "身長の合計は" << Meibo::bl_total << "です" << endl;

  return 0;
}
