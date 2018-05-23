// main01.cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int i;

  if (argc == 1) {
    printf("コマンドライン引数がありません\n");
    cout << "コマンドライン引数がありません" << endl;
    return -1;
  }
  for (i = 0; i < argc; i++) {
    cout << "argv[" << i << "]は「" << argv[i] << "」です" << endl;
  }

  return 0;
}
