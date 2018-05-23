// recursive01.cpp
#include <iostream>
using namespace std;

int main() {
  static int i = 1;

  if (i <= 10) {
    cout << "i = " << i << endl;
    i++;
    main();
  }
  return 0;
}
