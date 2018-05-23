// vector03.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<char> v(4);  // 4つの要素を持つ
  vector<char>::iterator pv;

  // 最初から4つ分の要素があるのでpush_backしなくてよい
  pv = v.begin();
  *pv = 'x';
  pv++;
  *pv = 'y';
  pv++;
  *pv = 'z';
  pv++;
  *pv = 'a';

  // 反復子を使わずに全要素を出力
  for (int i = 0; i < (int)v.size(); i++) cout << v[i] << ", ";
  cout << endl;

  // 反復子を使って全要素を出力
  pv = v.begin();
  while (pv != v.end()) {
    cout << *pv << ", ";
    pv++;
  }
  cout << endl;

  return 0;
}

