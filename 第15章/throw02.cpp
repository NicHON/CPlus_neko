// throw02.cpp
#include <fstream>
#include <iostream>
using namespace std;

class MyError {
 public:
  MyError(bool b);
};

MyError::MyError(bool b) {
  if (b == false) throw - 1;
}

int main() {
  ifstream infile;
  char szFile[64], ch;

  try {
    cout << "ファイル名 --- ";
    cin >> szFile;
    ifstream infile;
    infile.open(szFile);
    MyError myerr(infile.is_open());
    while ((ch = infile.get()) != EOF) cout << ch;
    infile.close();
  }

  catch (int) {
    cout << szFile << "を開けませんでした" << endl;
  }
  return 0;
}
