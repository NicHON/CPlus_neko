// vector02.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;             // コンテナ
  vector<int>::iterator pv;  // 反復子

  for (int i = 0; i < 10; i++) v.push_back(20 - i);
  pv = v.begin();  // 反復子は最初の要素を指す

  while (pv != v.end()) {  // 反復子「最後の次」を指していないなら
    cout << *pv << ", ";  // 現在指している要素を表示し
    pv++;                 // 次の要素を指すようにする
  }
  cout << endl;

  return 0;
}

