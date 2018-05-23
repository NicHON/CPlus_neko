// param02.cpp
#include <iostream>
using namespace std;

int showname(char **);

int main() {
  char *name[] = {"粂井康孝", "田中良一", "Thomas", "エジソン"};

  showname(name);  //関数に文字列配列を渡す

  return 0;
}

int showname(char **p) {
  int i;
  for (i = 0; i < 4; i++) cout << p[i] << endl;
  return 0;
}
