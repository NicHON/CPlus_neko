// sl01.cpp
#include <iostream>
using namespace std;

int main() {
  int a;
  a = 5;

  cout << " a < 10は「" << (a < 10) << "」です" << endl;  //正しい
  cout << " a > 10は「" << (a > 10) << "」です" << endl;  //正しくない

  return 0;
}
