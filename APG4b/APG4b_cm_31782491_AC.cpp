/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/31782491
 * Submitted at: 2022-05-18 19:49:49
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cm
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記
  cout << "A:";
  int i = 0;
  while (i < A) {
    cout << "]";
    i++;
  }
  cout << endl;

  cout << "B:";
  // すでに宣言をしているので、代入だけ行う
  // int i = 0 とは書けない
  i = 0;
  while (i < B) {
    cout << "]";
    i++;
  }
  cout << endl;
}
