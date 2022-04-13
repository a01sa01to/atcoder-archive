/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30940320
 * Submitted at: 2022-04-13 12:19:13
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  vector<int> a(3);
  rep(i, 3) cin >> a[i];
  cout << a[0] + a[1] + a[2] << endl;
  return 0;
}