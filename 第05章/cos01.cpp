// cous01.cpp
#include <cmath>  // cos()を使うので必要
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int i, j, genbun = 5;
  double rad, cosvalue, pai = 3.14;

  cout << "角度\tcos値\tイメージ" << endl;

  for (i = 0; i < 70; i++) cout << "-";

  for (i = 90; i >= 0; i -= genbun) {
    rad = (pai * i) / 180;
    cosvalue = cos(rad);
    cout << endl;
    cout << setw(2) << i << "\t" << fixed << setprecision(6) << cosvalue;
    for (j = 1; j <= (int)(cosvalue * 40); j++) cout << "*";
  }
  cout << endl;
  return 0;
}
