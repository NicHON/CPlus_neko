// switch02.cpp
#include <iostream>
using namespace std;

int main() {
  int c;
  char buf[16];  //ユーザーの入力を補完するバッファ
  bool end = false;

  while (1) {  //無限ループ
    cout << "***** MENU ****" << endl;
    cout << "A:ゲーム" << endl;
    cout << "B:音楽" << endl;
    cout << "C:表計算" << endl;
    cout << "X:終了" << endl;
    cout << "****************" << endl;
    cout << "----->";

    while (1) {
      cin.getline(buf, 16);
      c = buf[0];
      if (c != '\n') break;
    }

    switch (c) {
      case 'A':
      case 'a':
        cout << endl;
        cout << "ゲームばかりしないでください" << endl;
        cout << endl;
        break;
      case 'B':
      case 'b':
        cout << endl;
        cout << "音楽が選択されました" << endl;
        cout << endl;
        break;
      case 'C':
      case 'c':
        cout << endl;
        cout << "表計算が選択されました" << endl;
        cout << endl;
        break;
      case 'X':
      case 'x':
        end = 1;  //終了を示すendlを真にする
        break;
      default:
        cout << endl;
        cout << "不正な入力です" << endl;
        cout << endl;
        break;
    }
    if (end)  // endが真ならば
      break;  // 無限ループを抜ける
  }
  cout << endl;
  cout << "終了です" << endl;

  return 0;
}
