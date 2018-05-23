// fileio02.cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char fname[32], ch;
  cout << "ファイル名---";
  cin.getline(fname, 32);

  ifstream ifs;  // ofstreamオブジェクトを作成

  ifs.open(fname);  // ファイルを開く
  if (!ifs) {       // エラーチェック
    cerr << "ファイルをオープンできません" << endl;
    return -1;
  }

  while ((ch = ifs.get()) != EOF)  // ファイルから読み込む
    cout << ch;

  ifs.close();  // ファイルを閉じる

  return 0;
}
