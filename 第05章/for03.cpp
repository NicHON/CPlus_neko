// for03.cpp
#include <iostream>
using namespace std;

int main() {
  int i, j;

  for (i = 0; i < 4; i++) {
    cout << "外側のfor文の1, i = " << i << endl;

    for (j = 0; j < 3; j++) {
      cout << "\t内側のfor文, j = " << j << endl;
    }

    cout << "外側のfor文の2, i = " << i << endl;
  }

  return 0;
}
