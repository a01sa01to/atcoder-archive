/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30955173
 * Submitted at: 2022-04-14 10:35:00
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_y
 * Result: AC
 * Execution Time: 57 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  double ans = 0;
  rep(i, n) {
    ans += (double) a[i] * 2 / 6;
    ans += (double) b[i] * 4 / 6;
  }

  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}