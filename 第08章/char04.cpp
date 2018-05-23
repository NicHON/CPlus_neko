// char04.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int c;  // char型ではなくint型!

  for (c = 'A'; c <= 'z'; c++) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
      cout << (char)c << " = " << setw(3) << dec << c << "(0x" << hex
           << uppercase << c << ")" << endl;
    }
  }

  return 0;
}
