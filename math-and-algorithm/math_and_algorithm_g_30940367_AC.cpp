/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30940367
 * Submitted at: 2022-04-13 12:23:39
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_g
 * Result: AC
 * Execution Time: 14 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  int cnt = 0;
  for (int i = 1; i <= n; ++i) {
    if (i % x == 0 || i % y == 0)
      ++cnt;
  }
  cout << cnt << endl;
  return 0;
}