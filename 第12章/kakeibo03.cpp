// kakeibo03.cpp
#include <fstream>
#include <iomanip>   // マニピュレータ
#include <iostream>  // ファイル入出力
using namespace std;

class Kakeibo {
 protected:
  int zankin;

 public:
  Kakeibo();  // 残金(zankin）を0で初期化
  ~Kakeibo();
  void shunyu(int x);     // 収入を残金に足す
  void shishutsu(int x);  // 支出を残金から引く
  void disp_zankin();     // 残金を表示する
  int GetZankin();        // 残金をファイルから読み込む
  void SetZankin();       // 残金をファイルに書き込む
};

Kakeibo::Kakeibo() { zankin = GetZankin(); }

Kakeibo::~Kakeibo() { SetZankin(); }

void Kakeibo::shunyu(int x) { zankin += x; }

void Kakeibo::shishutsu(int x) { zankin -= x; }

void Kakeibo::disp_zankin() { cout << "残金： " << zankin << "円" << endl; }

int Kakeibo::GetZankin() {
  char zan[16];
  ifstream KakeiFile("kakei.txt");  // ファイルを開く
  if (!KakeiFile) {                 // ファイルが存在しない場合は
    return 0;                       // 残金を0にする
  }
  KakeiFile >> zan;    // 残金を文字列として読み取る
  KakeiFile.close();   // ファイルを閉じる
  return (atoi(zan));  // 残金をint型に変換して返
}

void Kakeibo::SetZankin() {
  ofstream KakeiFile("kakei.txt", ios::trunc);
  KakeiFile << zankin;
  KakeiFile.close();
}

;

class KakeiEx : public Kakeibo {
  int kyuyo;       // 給与収入
  int sonota_in;   // その他収入
  int shokuhi;     // 食費
  int kosaihi;     // 交際費
  int sonota_out;  // その他支出
 public:
  KakeiEx();
  ~KakeiEx();
  void shishutsu_menu();
  void shunyu_menu();
  void disp_komoku();
};

KakeiEx::KakeiEx() {
  ifstream KakeiFile("kakeiex.txt");

  if (!KakeiFile) {
    kyuyo = 0;
    sonota_in = 0;
    shokuhi = 0;
    kosaihi = 0;
    sonota_out = 0;
  } else {
    KakeiFile >> kyuyo >> sonota_in >> shokuhi >> kosaihi >> sonota_out;
    KakeiFile.close();
  }
}

KakeiEx::~KakeiEx() {
  ofstream KakeiFile("kakeiex.txt", ios::trunc);
  KakeiFile << kyuyo << endl;
  KakeiFile << sonota_in << endl;
  KakeiFile << shokuhi << endl;
  KakeiFile << kosaihi << endl;
  KakeiFile << sonota_out << endl;
  KakeiFile.close();
}

void KakeiEx::shunyu_menu() {
  char buf[64];
  int money;

  while (1) {
    cout << "(a)給与 (b)その他の収入 --- ";
    cin.getline(buf, 64);
    if (strcmp(buf, "a") != 0 && strcmp(buf, "b") != 0) {
      cout << "入力が不正です!" << endl;
      continue;
    }
    switch (buf[0]) {
      case 'a':
        cout << "給与収入（円） --- ";
        cin.getline(buf, 64);
        money = atoi(buf);
        kyuyo += money;
        shunyu(money);
        break;
      case 'b':
        cout << "その他の収入（円）--- ";
        cin.getline(buf, 64);
        money = atoi(buf);
        sonota_in += money;
        shunyu(money);
        break;
      default:
        cout << "Error" << endl;
        break;
    }
    break;
  }
}

void KakeiEx::shishutsu_menu() {
  char buf[64];
  int money;

  while (1) {
    cout << "(a)食費 (b)交際費 (c)その他の支出 --- ";
    cin.getline(buf, 64);
    if (strcmp(buf, "a") != 0 && strcmp(buf, "b") != 0 &&
        strcmp(buf, "c") != 0) {
      cout << "入力が不正です!" << endl;
    }
    switch (buf[0]) {
      case 'a':
        cout << "食費(円) --- ";
        cin.getline(buf, 64);
        money = atoi(buf);
        shokuhi += money;
        shishutsu(money);
        break;
      case 'b':
        cout << "交際費（円） --- ";
        cin.getline(buf, 64);
        money = atoi(buf);
        kosaihi += money;
        shishutsu(money);
        break;
      case 'c':
        cout << "その他の支出（円） --- ";
        cin.getline(buf, 64);
        money = atoi(buf);
        sonota_out += money;
        shishutsu(money);
        break;
      default:
        cout << "Error" << endl;
        break;
    }
    break;
  }
}

void KakeiEx::disp_komoku() {
  cout << "収入 *****************************" << endl;
  cout << setw(15) << left << "給与収入";
  cout << setw(8) << right << kyuyo << endl;
  cout << setw(15) << left << "その他の収入";
  cout << setw(8) << right << sonota_in << endl;
  cout << "---------------------------------" << endl;
  cout << setw(15) << left << "収入合計";
  cout << setw(8) << right << kyuyo + sonota_in << endl;
  cout << endl;
  cout << "支出 ****************************" << endl;
  cout << setw(15) << left << "食費";
  cout << setw(8) << right << shokuhi << endl;
  cout << setw(15) << left << "交際費";
  cout << setw(8) << right << kosaihi << endl;
  cout << setw(15) << left << "その他の支出";
  cout << setw(8) << right << sonota_out << endl;
  cout << "---------------------------------" << endl;
  cout << setw(15) << left << "支出合計";
  cout << setw(8) << right << shokuhi + kosaihi + sonota_out << endl;
  cout << endl;
}

int menu() {
  char ret[16];
  cout << "1:収入 2:支出 3:残金表示 4:項目別表示 0:終了 --- ";
  cin.getline(ret, 16);
  return (ret[0] - '0');
}

int main() {
  KakeiEx mykakeiex;
  int ans;
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
        mykakeiex.shunyu_menu();
        break;
      case 2:
        mykakeiex.shishutsu_menu();
        break;
      case 3:
        mykakeiex.disp_zankin();
        break;
      case 4:
        mykakeiex.disp_komoku();
        break;
      default:
        cout << "入力が不正です" << endl;
        break;
    }
    if (loopend) break;
  }
  return 0;
}

