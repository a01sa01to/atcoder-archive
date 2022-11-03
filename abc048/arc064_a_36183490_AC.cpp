/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc048/submissions/36183490
 * Submitted at: 2022-11-04 00:40:57
 * Problem URL: https://atcoder.jp/contests/abc048/tasks/arc064_a
 * Result: AC
 * Execution Time: 42 ms
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
  ll n, x;
  cin >> n >> x;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> t(n);
  t[0] = min(a[0], x);
  rep(i, n - 1) {
    t[i + 1] = min(a[i + 1], x - t[i]);
  }
  ll ans = 0;
  rep(i, n) ans += a[i] - t[i];
  cout << ans << endl;
  return 0;
}