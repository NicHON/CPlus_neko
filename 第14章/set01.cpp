// set01.cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
  set<int> s;
  set<char> c;
  set<int>::iterator ps;
  set<char>::iterator pc;

  s.insert(10);
  s.insert(5);
  s.insert(8);
  s.insert(12);
  s.insert(8);  // 同じものがあるのでinsertで失敗する

  for (ps = s.begin(); ps != s.end(); ps++) cout << *ps << ", ";
  cout << endl;

  c.insert('x');
  c.insert('d');
  c.insert('a');
  c.insert('c');
  c.insert('b');

  for (pc = c.begin(); pc != c.end(); pc++) cout << *pc << ", ";
  cout << endl;

  return 0;
}
