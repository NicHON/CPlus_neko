// throw01.cpp
#include <fstream>
#include <iostream>
using namespace std;

int MyError(bool err) {
  if (!err) throw 0;
  return 0;
}

int main() {
  ifstream infile;
  char szFile[64], ch;

  try {
    cout << "ファイル名 --- ";
    cin >> szFile;
    infile.open(szFile);
    MyError(infile.is_open());
    while ((ch = infile.get()) != EOF) cout << ch;
    infile.close();
  }

  catch (int) {
    cout << szFile << "を開けませんでした" << endl;
  }

  return 0;
}
