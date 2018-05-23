// overload01.cpp
#include <iostream>
using namespace std;

int zei(int a)  //引数1つ
{
  return (int)(a * 1.05);
}

int zei(int x, double r)  //引数2つ
{
  return (int)(x * (r + 1));
}

int main() {
  int teika, total;
  cout << "定価（税抜き）--> ";
  cin >> teika;
  total = zei(teika);
  cout << "税込み（5%）価格は" << total << "円です" << endl;
  total = zei(teika, 0.1);
  cout << "税込み(10%)価格は" << total << "円です" << endl;
  return 0;
}
