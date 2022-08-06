/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/33845922
 * Submitted at: 2022-08-07 01:00:13
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_d
 * Result: AC
 * Execution Time: 76 ms
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
  ll n, l, r;
  cin >> n >> l >> r;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> x(n + 1, 0);
  rep(i, n) {
    x[i + 1] = min(x[i] + a[i], l * (i + 1));
  }

  vector<ll> y(n + 1, 0);
  rep(i, n) {
    y[i + 1] = min(y[i] + a[n-i-1], r * (i + 1));
  }

  ll ans = 1e18;
  rep(i, n + 1) ans = min(ans, x[i] + y[n - i]);
  cout << ans << endl;
  return 0;
}