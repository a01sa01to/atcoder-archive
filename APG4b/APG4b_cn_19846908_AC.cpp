/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/19846908
 * Submitted at: 2021-01-31 23:25:17
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cn
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  cout << ++x << endl;

  // ここにプログラムを追記
  x *= (a+b);
  cout << x << endl;
  
  x *= x;
  cout << x << endl;
  cout << --x << endl;
  return 0;
}
