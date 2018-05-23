// template04.cpp
#include <iostream>
using namespace std;

template <typename T>
class MyClass {
  T a;

 public:
  MyClass(T x) { a = x; }

  void show(T b) {
    cout << "\"" << a << "\""
         << " + "
         << "\"" << b << "\" = " << a + b << endl;
  }
};

int main() {
  MyClass<int> myint(2);
  MyClass<double> mydouble(1.25);
  MyClass<char> mychar('c');

  myint.show(3);
  mydouble.show(2.75);
  mychar.show('c');

  return 0;
}
