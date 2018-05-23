// constructor04.cpp
#include <iostream>
using namespace std;

class Menseki {
  double area;  // 面積を格納するためのデータメンバ
 public:
  // デフォルト引数を指定したコンストラクタ
  Menseki(double a = 0.0, double b = 0.0, double c = 0.0);
  double show();
};

Menseki::Menseki(double a, double b, double c) {
  int no = 0;

  // 何個の引数が渡されたか調べる
  if (a != 0.0) no++;
  if (b != 0.0) no++;
  if (c != 0.0) no++;

  // 渡された引数の個数に応じて面積を計算
  switch (no) {
    case 1:  // 円の面積を計算
      area = a * a * 3.14;
      break;
    case 2:  // 長方形の面積を計算
      area = a * b;
      break;
    case 3:  // 台形の面積を計算
      area = (a + b) * c / 2.0;
      break;
    default:  // 面積をゼロに認定
      area = 0.0;
      break;
  }
}

double Menseki::show() { return area; }

int main() {
  Menseki En(3), Shikaku(2, 5), Daikei(1, 3, 5);

  cout << "半径3の円の面積は" << En.show() << "です" << endl;
  cout << "縦2, 横5の長方形の面積は" << Shikaku.show() << "です" << endl;
  cout << "上底1, 下底3, 高さ5の台形の面積は" << Daikei.show() << "です"
       << endl;

  return 0;
}

