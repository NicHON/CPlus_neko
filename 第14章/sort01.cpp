// sort01.cpp
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void show(vector<char> v) {
  vector<char>::iterator pv;
  pv = v.begin();
  while (pv != v.end()) {
    cout << *pv << ", ";
    pv++;
  }
  cout << endl;
}

int main() {
  vector<char> v;
  v.push_back('d');
  v.push_back('b');
  v.push_back('c');
  v.push_back('a');
  show(v);  // 表示

  sort(v.begin(), v.end());  // ソート
  show(v);                   // 表示

  return 0;
}
