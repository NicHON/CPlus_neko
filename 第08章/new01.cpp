// new01.cpp
#include <iostream>
using namespace std;

int main() {
  cout << "必要な個数--> ";
  int n;
  cin >> n;

  int *p;
  p = new int[n];  // ユーザーが入力した個数分のメモリを確保

  for (int i = 0; i < n; i++) {
    cout << i + 1 << "番目のデータ --- ";
    cin >> p[i];
  }

  for (int i = 0; i < n; i++) {
    cout << i + 1 << "番目のデータは" << p[i] << endl;
  }

  delete[] p;  //不要になったのでメモリを解放

  return 0;
}

