// logical01.cpp
#include <iostream>
using namespace std;

int main() {
  int a = 2, b = 3;

  if (a == 5 && b++) cout << "真文です" << endl;
  cout << "b = " << b << endl;

  return 0;
}
