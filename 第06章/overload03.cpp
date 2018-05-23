// overload03.cpp
#include <iostream>
using namespace std;

double menseki(double);
double menseki(double, double);
double menseki(double, double, double);

int main() {
  char no[16];
  int fig;
  double r, a, b, h;

  while (1) {
    cout << "1:円 2:長方形 3:台形 ---> ";
    cin >> no;
    if (no[0] == '1' || no[0] == '2' || no[0] == '3') {
      fig = no[0] - '1' + 1;
      break;
    } else {  // １、２、３以外が入力された場合
      cin.clear();
    }
  }

  switch (fig) {  //選択された図形によって処理を分岐
    case 1:
      cout << "半径 = ";
      cout << "円の面積は " << menseki(r) << endl;
      break;
    case 2:
      cout << "縦 = ";
      cin >> a;
      cout << "横 = ";
      cin >> b;
      cout << "長方形の面積は " << menseki(a, b) << endl;
      break;
    case 3:
      cout << "上底 = ";
      cin >> a;
      cout << "下底 = ";
      cin >> b;
      cout << "高さ = ";
      cin >> h;
      cout << "台形の面積は " << menseki(a, b, h) << endl;
      break;
    default:
      cout << "エラーです" << endl;
      break;
  }

  return 0;
}

double menseki(double r) {
  return r * r * 3.14;  // 円の面積
}

double menseki(double a, double b) {
  return a * b;  // 長方形の面積
}

double menseki(double a, double b, double h) {
  return ((a + b) * h) / 2;  // 台形の面積
}
