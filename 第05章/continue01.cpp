// continue01.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int i, j;

  for (i = 1; i < 10; i++) {
    for (j = 1; j < 10; j++) {
      if (i > j) continue;
      cout << i << " X " << j << " = " << setw(2) << i * j << endl;
    }
    cout << "----------------------" << endl;
  }
  return 0;
}
