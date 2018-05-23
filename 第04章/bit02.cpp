// bit02.cpp
#define CAT 1     // 2進法で表すと0001
#define DOG 2     // 2進法で表すと0010
#define RAT 4     // 2進法で表すと0100
#define RABBIT 8  // 2進法で表すと1000

#include <iostream>
using namespace std;

int main() {
  int a = CAT | DOG;
  int b = RAT;
  int c = CAT | DOG | RAT | RABBIT;
  int d = DOG | RAT;

  cout << "Aさんのペット（猫 = " << ((a & CAT) != 0)
       << ", 犬 = " << ((a & DOG) != 0) << ", ネズミ = " << ((a & RAT) != 0)
       << ", ウサギ = " << ((a & RABBIT) != 0) << ")" << endl;

  cout << "Bさんのペット（猫 = " << ((b & CAT) != 0)
       << ", 犬 = " << ((b & DOG) != 0) << ", ネズミ = " << ((b & RAT) != 0)
       << ", ウサギ = " << ((b & RABBIT) != 0) << ")" << endl;

  cout << "Cさんのペット（猫 = " << ((c & CAT) != 0)
       << ", 犬 = " << ((c & DOG) != 0) << ", ネズミ = " << ((c & RAT) != 0)
       << ", ウサギ = " << ((c & RABBIT) != 0) << ")" << endl;

  cout << "Dさんのペット（猫 = " << ((d & CAT) != 0)
       << ", 犬 = " << ((d & DOG) != 0) << ", ネズミ = " << ((d & RAT) != 0)
       << ", ウサギ = " << ((d & RABBIT) != 0) << ")" << endl;

  return 0;
}

