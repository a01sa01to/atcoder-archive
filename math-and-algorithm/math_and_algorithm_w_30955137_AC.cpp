/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30955137
 * Submitted at: 2022-04-14 10:30:47
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_w
 * Result: AC
 * Execution Time: 40 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> b(n), r(n);
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> r[i];

  double ans = 0;
  ans += accumulate(b.begin(), b.end(), 0.0) / n;
  ans += accumulate(r.begin(), r.end(), 0.0) / n;

  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}