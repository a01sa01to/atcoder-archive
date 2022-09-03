/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/34582508
 * Submitted at: 2022-09-04 00:01:36
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_c
 * Result: AC
 * Execution Time: 66 ms
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
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> sum1(n + 1, 0), sum2(n + 1, 0);
  rep(i, n) {
    sum1[i + 1] = sum1[i] + a[i];
    sum2[i + 1] = sum2[i] + a[i] * (i + 1);
  }
  ll ans = -1e18;
  for (int i = 0; i + m <= n; i++) {
    ll dx = sum1[i + m] - sum1[i];
    ll dy = sum2[i + m] - sum2[i];
    ans = max(ans, dy - dx * i);
  }
  cout << ans << endl;
  return 0;
}