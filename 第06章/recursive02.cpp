// recursive02.cpp
#include <iostream>
using namespace std;

int kaijo(int);

int main() {
  int i;
  for (i = 0; i < 11; i++) cout << i << "! = " << kaijo(i) << endl;

  return 0;
}

int kaijo(int n) {
  if (n == 0)
    return 1;
  else
    return n * kaijo(n - 1);  //再帰呼び出し
}
