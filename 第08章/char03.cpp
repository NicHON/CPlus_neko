// char03.cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  char i;

  for (i = '!'; i <= '`'; i++) {
    cout << setw(3) << dec << (int)i << "(0x" << hex << (int)i << ") -- "
         << (char)i << " ";
    if ((i - '!' + 1) % 4 == 0) cout << endl;
  }
  cout << endl;

  return 0;
}
