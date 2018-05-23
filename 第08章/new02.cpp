// new02.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
  int i;
  char *name[4], tempname[64];

  for (i = 0; i < 4; i++) {
    cout << "名前 -- ";
    cin >> tempname;
    name[i] = new char[strlen(tempname) + 1];
    strcpy(name[i], tempname);
  }

  for (i = 0; i < 4; i++) cout << name[i] << endl;

  for (i = 0; i < 4; i++) delete[] name[i];

  return 0;
}
