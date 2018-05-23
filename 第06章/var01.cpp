// var01.cpp	//無限ループとなるので注意
#include <iostream>
using namespace std;

int main() {
  // int n = 0;	//最初に宣言せずに

  while (1) {
    int n = 0;  //使う直前で宣言してみた
    cout << n << endl;
    n++;
    if (n >= 5) break;
  }
  return 0;
}

