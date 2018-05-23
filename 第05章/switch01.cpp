// switch01.cpp
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "1から5までの整数を入力してください。----";
  cin >> n;
  switch (n) {
    case 1:
      cout << "あなたは一番小さい数字を入力しましたね" << endl;
      break;
    case 2:
      cout << "今日はよいことがあるでしょう" << endl;
      break;
    case 3:
      cout << "中庸の徳です" << endl;
      break;
    case 4:
      cout << "4は幸せの4" << endl;
      break;
    case 5:
      cout << "あなたは5を選びました" << endl;
      break;
    default:
      cout << "1から5までの整数を入力してください" << endl;
      break;
  }

  cout << "これでおしまいです" << endl;

  return 0;
}
