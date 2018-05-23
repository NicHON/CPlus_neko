// array07.cpp
#define NO 3  // NOを3と定義
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int point[][2] = {
      80,  80,  // 出席番号1の英語、数学の得点
      100, 98,  // 出席番号2
      60,  80,  // 出席番号3
  };

  int i, j, sum = 0, p_sum[NO];
  double ave;

  // 英語の平均点を求める
  for (i = 0; i < NO; i++) sum += point[i][0];
  ave = (double)sum / NO;

  cout << "英語の平均点は" << setw(5) << fixed << setprecision(1) << ave
       << "点です" << endl;

  // 数学の平均点を求める
  sum = 0;  // 合計点を0に戻しておく
  for (i = 0; i < NO; i++) sum += point[i][1];
  ave = (double)sum / NO;

  cout << "数学の平均点は" << setw(5) << ave << "点です" << endl;
  cout << endl;

  //個人別合計点を求める
  for (i = 0; i < NO; i++) p_sum[i] = 0;

  for (i = 0; i < NO; i++) {
    for (j = 0; j < 2; j++) {
      p_sum[i] += point[i][j];
    }
    cout << "出席番号" << i + 1 << "の総得点 " << p_sum[i] << endl;
  }

  return 0;
}

