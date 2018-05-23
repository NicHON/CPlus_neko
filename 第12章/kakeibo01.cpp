// kakeibo01.cpp
#include <iostream>
using namespace std;

class Kakeibo {
 protected:
  int zankin;

 public:
  Kakeibo();              // 残金(zankin）を0で初期化
  void shunyu(int x);     // 収入を残金に足す
  void shishutsu(int x);  // 支出を残金から引く
  void disp_zankin();     // 残金を表示する
};

Kakeibo::Kakeibo() { zankin = 0; }

void Kakeibo::shunyu(int x) { zankin += x; }

void Kakeibo::shishutsu(int x) { zankin -= x; }

void Kakeibo::disp_zankin() { cout << "残金： " << zankin << "円" << endl; };

int menu() {
  char ret[16];
  cout << "1:収入 2:支出 3:残金表示 0:終了 --- ";
  cin.getline(ret, 16);
  return (ret[0] - '0');
}

int main() {
  Kakeibo mykakei;
  int ans;
  char buf[64];
  bool loopend = false;

  cout << "猫でもわかる家計簿-------------------" << endl;
  cout << endl;

  while (1) {       // 無限ループ
    ans = menu();   // メニューを表示
    switch (ans) {  // 入力されたメニュー番号によって分岐
      case 0:
        loopend = true;
        break;
      case 1:
        cout << "収入金額 --- ";
        cin.getline(buf, 64);
        mykakei.shunyu(atoi(buf));
        break;
      case 2:
        cout << "支出金額 --- ";
        cin.getline(buf, 64);
        mykakei.shishutsu(atoi(buf));
        break;
      case 3:
        mykakei.disp_zankin();
        break;
      default:
        cout << "入力が不正です" << endl;
        break;
    }
    if (loopend) break;
  }
  return 0;
}

