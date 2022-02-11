/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29225220
 * Submitted at: 2022-02-12 00:51:29
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_br
 * Result: AC
 * Execution Time: 81 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  double x_mid, y_mid;
  if (n % 2 == 0) {
    x_mid = (x[n / 2] + x[n / 2 - 1]) / 2.0;
    y_mid = (y[n / 2] + y[n / 2 - 1]) / 2.0;
  }
  else {
    x_mid = x[n / 2];
    y_mid = y[n / 2];
  }
  long double ans = 0;
  rep(i, n) ans += abs(x[i] - x_mid) + abs(y[i] - y_mid);
  cout << fixed << setprecision(0) << ans << endl;
  return 0;
}