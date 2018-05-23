// constructor03.cpp
#include <iostream>
using namespace std;

class Menseki {
  double area;  //面積を格納するためのデータメンバ
 public:
  // 引数1つのコンストラクタ、円の面積を計算する
  Menseki(double r) { area = r * r * 3.14; }
  // 引数2つのコンストラクタ、長方形の面積を計算する
  Menseki(double a, double b) { area = a * b; }
  // 引数3つのコンストラクタ、台形の面積を計算する
  Menseki(double a, double b, double h) { area = (a + b) * h / 2.0; }
  double show() { return area; }
};

int main() {
  Menseki En(1.5), Shikaku(5.2, 2.5), Daikei(2.5, 4.5, 3.0);

  cout << "半径1.5の円の面積は" << En.show() << "です" << endl;
  cout << "縦5.2, 横2.5の長方形の面積は" << Shikaku.show() << "です" << endl;
  cout << "上底2.5, 下底4.5, 高さ3.0の台形の面積は" << Daikei.show() << "です"
       << endl;

  return 0;
}

