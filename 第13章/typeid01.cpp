// tupeid01.cpp
#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
class MyClass {
  T data;

 public:
  MyClass(T x) { data = x; }
  void getdatatype();
};

// 外部で関数定義するときは注意!!
template <typename T>
void MyClass<T>::getdatatype() {
  cout << "現在の型は" << typeid(T).name() << "で値は(" << data << ")です"
       << endl;
}

int main() {
  MyClass<int> mc1(1);
  MyClass<char *> mc2("猫でもわかる");

  mc1.getdatatype();
  mc2.getdatatype();

  return 0;
}
