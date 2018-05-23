// fileio01.cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream of;  // ofstreamオブジェクトを作成

  of.open("test.txt", ios::app);  // ファイルを開く
  if (!of) {
    cerr << "オープンエラーです" << endl;
    return -1;
  }
  of << "テスト書き込みです" << endl;  // ファイルに書き込む
  of.close();

  return 0;
}
