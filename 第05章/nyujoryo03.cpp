// nyujoryo03.cpp
#include <iostream>
using namespace std;

int main() {
  int age;
  int is_seito;  // 生徒なら1そうでないなら0

  cout << "年齢を入寮してください---";
  cin >> age;
  cout << "「猫でも学園」の\n生徒さんですか（Yes:1, No:0）---";
  cin >> is_seito;

  if (age < 6) {
    cout << "入場料は無料です" << endl;
  } else if (is_seito == 1) {
    cout << "入場料は無料です" << endl;
  } else {
    cout << "入場料は1000円です" << endl;
  }
  return 0;
}
