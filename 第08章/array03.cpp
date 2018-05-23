// array03.cpp
#include <iostream>
using namespace std;

int main() {
  int a[4] = {1, 2, 3, 4}, i;

  for (i = 0; i < 4; i++) {
    cout << "&a[" << i << "] = " << &a[i] << endl;
  }
  cout << endl;
  cout << "a= " << a << endl;
  return 0;
}
