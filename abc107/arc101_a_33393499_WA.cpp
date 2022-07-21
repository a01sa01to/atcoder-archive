/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc107/submissions/33393499
 * Submitted at: 2022-07-21 19:05:01
 * Problem URL: https://atcoder.jp/contests/abc107/tasks/arc101_a
 * Result: WA
 * Execution Time: 40 ms
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
  int n, k;
  cin >> n >> k;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];
  ll ans = 1e18;
  for (int i = k; i <= n; i++) {
    if (x[i - k] < 0 && x[i - 1] < 0) {
      ans = min(ans, abs(x[i - k]));
    }
    else if (x[i - k] > 0 && x[i - 1] > 0) {
      ans = min(ans, abs(x[i - 1]));
    }
    else {
      ll a = x[i - k], b = x[i - 1];
      ans = min(ans, b - a + abs(min(a, b)));
    }
  }
  cout << ans << endl;
  return 0;
}