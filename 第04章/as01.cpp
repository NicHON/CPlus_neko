// as01.cpp
#include <iostream>
using namespace std;

int main() {
  int a1, a2, a3, a4;

  a1 = 5;
  a1 = a1 + 2;
  cout << "a1 = " << a1 << endl;

  a2 = 5;
  a2 += 2;
  cout << "a2 = " << a2 << endl;

  a3 = 5;
  a3 = (a3++) + 2;
  cout << "a3 = " << a3 << endl;

  a4 = 5;
  cout << "a4 = " << a4++ + 2 << endl;

  return 0;
}
