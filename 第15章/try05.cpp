// try05.cpp
#include <iostream>
using namespace std;

int main() {
  try {
    try {
      cout << "a, b, cのいずれかを入力 --- ";
      char c;
      cin >> c;
      if (c != 'a' && c != 'b' && c != 'c') throw c;
      cout << "入力した文字は" << c << endl;
    }

    catch (char ch) {
      if (ch == 'A' || ch == 'B' || ch == 'C') throw;
      cout << "a, b, cのいずれかを入力してください" << endl;
    }

  }

  catch (char c) {
    cout << "大文字が入力されました" << endl;
    cout << "入力された文字は" << c << "です" << endl;
    cout << "正しくは" << (char)tolower(c) << "です" << endl;
  }

  return 0;
}
