// param03.cpp
#include <iostream>
using namespace std;

int showint(int x[][2]);

int main() {
  int a[][2] = {1, 2, 3, 4, 5, 6, 7, 8};

  showint(a);  //関数に多次元配列を渡す

  return 0;
}

int showint(int m[][2]) {
  int i, j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      cout << "m[" << i << "][" << j << "] = " << m[i][j] << endl;
    }
  }

  return 0;
}
