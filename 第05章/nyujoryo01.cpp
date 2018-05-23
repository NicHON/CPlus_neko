// nyujoryo.cpp
#include <iostream>
using namespace std;

int main() {
  int age;

  cout << "この度は「猫でもランド」に" << endl;
  cout << "ご来園ありがとうございます。" << endl;

  cout << "--------------------------------" << endl;
  cout << "年齢を入力してください---";
  cin >> age;

  if (age < 6) {
    cout << "入場料は無料です" << endl;
  }
  if (age >= 6) {
    cout << "入場料1000円を頂きます" << endl;
  }
  cout << "--------------------------------" << endl;
  cout << "では、ごゆっくりお楽しみください" << endl;

  return 0;
}
