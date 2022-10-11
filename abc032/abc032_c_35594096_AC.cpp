/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc032/submissions/35594096
 * Submitted at: 2022-10-12 01:33:14
 * Problem URL: https://atcoder.jp/contests/abc032/tasks/abc032_c
 * Result: AC
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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) {
    cin >> a[i];
    if (a[i] == 0) {
      cout << n << endl;
      return 0;
    }
  }
  ll prod = a[0];
  int l = 0, r = 1;
  int ans = 0;
  while (l < n) {
    while (r < n && prod * a[r] <= k) prod *= a[r++];
    if (prod <= k) ans = max(ans, r - l);
    Debug(l, r, prod);
    if (l == r) {
      prod *= a[r++];
    }
    else {
      prod /= a[l++];
    }
  }
  cout << ans << endl;
  return 0;
}