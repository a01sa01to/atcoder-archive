/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/35628851
 * Submitted at: 2022-10-14 00:51:21
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_e
 * Result: AC
 * Execution Time: 408 ms
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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll logK;
  for (int i = 60; i >= 0; i--) {
    if (k & (1LL << i)) {
      logK = i;
      break;
    }
  }

  vector d(n, vector<ll>(logK + 1, 0));
  rep(i, n) d[i][0] = a[i];
  rep(j, logK) {
    rep(i, n) {
      ll x = d[i][j];
      d[i][j + 1] = x + d[(i + x) % n][j];
    }
  }
  Debug(d);

  ll ans = 0;
  ll now = 0;
  ll idx = 0;
  while (k) {
    if (k & 1) {
      ans += d[now][idx];
      now = (now + d[now][idx]) % n;
    }
    k >>= 1;
    idx++;
  }
  cout << ans << endl;
  return 0;
}