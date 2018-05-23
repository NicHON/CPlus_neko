// param01.cpp
#include <iostream>
using namespace std;

int showarray(int *);

int main() {
  int a[3] = {10, 20, 30};
  showarray(a);  //関数に整数配列を渡す
  return 0;
}

int showarray(int x[]) {
  int i;
  for (i = 0; i < 3; i++) cout << "x[" << i << "] = " << x[i] << endl;
  return 0;
}
