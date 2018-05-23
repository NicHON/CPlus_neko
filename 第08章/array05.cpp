// array05.cpp
#include <iostream>
using namespace std;

int main() {
  int *p, i, a[] = {20, 40, 80, 100};

  p = a;

  for (i = 0; i < 4; i++) {
    cout << "&a[" << i << "] = " << &a[i] << ", {p = " << i << ") = " << p + i
         << ", (a + " << i << ") = " << a + i << endl;
  }

  return 0;
}
