// defarg01.cpp
#include <iostream>
using namespace std;

// トップダウン方式なので関数のプロトタイプ宣言が必要
// デフォルト引数はここに記述する
int zei(int, double = 0.05);

int main() {
  int teika, total;
  cout << "定価（税抜き）--> ";
  cin >> teika;
  total = zei(teika);
  cout << "税込み（5%）価格は" << total << "円です" << endl;
  total = zei(teika, 0.1);
  cout << "税込み（10%）価格は" << total << "円です" << endl;
  return 0;
}

int zei(int x, double r) { return (int)(x * (r + 1)); }
