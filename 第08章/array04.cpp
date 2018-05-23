// array04.cpp
#include <iostream>
using namespace std;

int main() {
  int a[] = {10, 20, 30, 40}, i, *p;

  p = a;  // pにa[0]のアドレスを代入

  for (i = 0; i < 4; i++) {
    cout << "&a[" << i << "] = " << &a[i] << ", a[" << i << "] = " << a[i]
         << ", *(p + " << i << ") = " << *(p + i) << endl;
  }

  return 0;
}
