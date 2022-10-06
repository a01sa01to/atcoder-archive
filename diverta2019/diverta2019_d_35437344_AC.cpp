/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/diverta2019/submissions/35437344
 * Submitted at: 2022-10-07 00:18:42
 * Problem URL: https://atcoder.jp/contests/diverta2019/tasks/diverta2019_d
 * Result: AC
 * Execution Time: 18 ms
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
  ll n;
  cin >> n;
  ll ans = 0;
  for (ll m = 1; m * m <= n; m++) {
    ll x = m - 1;
    if (x != 0 && n / x == n % x) {
      ans += x;
    }
    if (n % m == 0 && m * m != n) {
      ll y = n / m - 1;
      if (n / y == n % y) {
        ans += y;
      }
    }
  }
  cout << ans << endl;
  return 0;
}