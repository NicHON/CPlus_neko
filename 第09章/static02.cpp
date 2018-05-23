// static02.cpp
#include <iostream>
using namespace std;

class Meibo {
  double bw;
  double bl;
  static int no_of_obj;
  void setdata();

 public:
  Meibo();
  static double bw_total;
  static double bl_total;
  static void getmean();  // 静的なメンバ関数
};

Meibo::Meibo() {
  setdata();
  no_of_obj++;
}

void Meibo::setdata() {
  cout << "体重 --- ";
  cin >> bw;
  cout << "身長 --- ";
  cin >> bl;

  bw_total += bw;
  bl_total += bl;
}

double Meibo::bw_total = 0.0;
double Meibo::bl_total = 0.0;
int Meibo::no_of_obj = 0;

void Meibo::getmean() {
  if (no_of_obj != 0) {
    cout << "現在のデータ数は" << no_of_obj << "件です" << endl;
    cout << "現在の体重の合計は" << bw_total << endl;
    cout << "現在の身長の合計は" << bl_total << endl;
    cout << "現在の平均体重は" << bw_total / no_of_obj << endl;
    cout << "現在の平均身長は" << bl_total / no_of_obj << endl;
  } else {
    cout << "Eroor!!" << endl;
  }
}

int main() {
  char end[8];
  while (1) {
    Meibo person;
    Meibo::getmean();  // 「クラス名::関数()」の形で呼び出す

    cout << "続けますか(y/n)";
    cin >> end;
    if (end[0] == 'n') break;
    cout << "----------------" << endl;
  }

  return 0;
}

