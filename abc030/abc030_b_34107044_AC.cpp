/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc030/submissions/34107044
 * Submitted at: 2022-08-17 18:30:09
 * Problem URL: https://atcoder.jp/contests/abc030/tasks/abc030_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  double a = ((n % 12) * 60 + m) / 2.0;
  double b = m * 6;
  Debug(a, b);
  double ans = 360;
  ans = min(ans, abs(a - b));
  ans = min(ans, 360 - ans);
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}