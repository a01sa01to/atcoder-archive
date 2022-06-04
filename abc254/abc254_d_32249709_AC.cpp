/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/32249709
 * Submitted at: 2022-06-05 00:08:45
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_d
 * Result: AC
 * Execution Time: 363 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  for (ll i = 1; i <= n; i++) {
    ll t = i;
    for (ll d = 2; d * d <= t; d++) {
      while (t % (d * d) == 0) t /= d * d;
    }
    for (ll d = 1; t * d * d <= n; d++) ans++;
  }
  cout << ans << endl;
  return 0;
}