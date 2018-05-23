// map01.cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
  map<char*, int> m;
  map<char*, int>::iterator pm;

  // insert関数で、コンテナの先頭に要素を挿入
  m.insert(pair<char*, int>("ラーメン", 500));
  m.insert(pair<char*, int>("うどん", 450));
  m.insert(pair<char*, int>("カレー", 300));

  cout << "うどんは" << m["うどん"] << "円です" << endl;
  cout << endl;

  pm = m.begin();
  while (pm != m.end()) {
    cout << pm->first << "----" << pm->second << "円" << endl;
    pm++;
  }

  return 0;
}
