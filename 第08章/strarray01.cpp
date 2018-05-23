// strarray01.cpp
#include <iostream>
using namespace std;

int main() {
  char str[] = "ABC";
  cout << str << endl;

  str[0] = 'd';  //配列strの要素を置き換える
  str[1] = 'e';
  str[2] = 'f';
  // str[3]はもともと'¥0'なので置き換える必要がない

  cout << str << endl;

  return 0;
}
