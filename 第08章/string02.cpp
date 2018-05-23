// string02.cpp
#include <iostream>
using namespace std;

int main() {
  cout << *("ABC" + 0) << ", " << *("ABC" + 1) << ", " << *("ABC" + 2) << endl;
  cout << "ABC"[0] << ", "
       << "ABC"[1] << ", "
       << "ABC"[2] << endl;

  return 0;
}
