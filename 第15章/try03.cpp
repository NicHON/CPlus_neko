// try03.cpp
#include <cmath>    // atof
#include <cstdlib>  // atof
#include <iostream>
using namespace std;

int main() {
  while (1) {
    try {
      cout << "1以上5未満の数値を入力してください（x:終了）";
      char no[16];
      cin.getline(no, 16);
      if (no[0] == 'x') break;
      if (no[0] == 'X') throw 'X';  // charをthrow
      double x;
      x = atof(no);
      if (x >= 5.0) throw 5;                          // intをthrow
      if (x >= 0.0 && x < 1.0) throw 0.5;             // doubleをthrow
      if (x < 0.0) throw "負の数値が入力されました";  // char*をthrow
      cout << "x = " << x << endl;
    }

    catch (int) {
      cout << "5以上の数値が入力されました" << endl;
    } catch (double) {
      cout << "1未満の数値が入力されました" << endl;
    } catch (char *str) {
      cout << str << endl;
    } catch (...) {
      cout << "終了するときは小文字の'x'" << endl;
    }
  }

  return 0;
}
