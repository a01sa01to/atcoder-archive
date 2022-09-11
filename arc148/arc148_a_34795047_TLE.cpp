/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc148/submissions/34795047
 * Submitted at: 2022-09-11 22:14:23
 * Problem URL: https://atcoder.jp/contests/arc148/tasks/arc148_a
 * Result: TLE
 * Execution Time: 2205 ms
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
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll minim = *min_element(a.begin(), a.end());
  for (ll x = 0; x <= minim; x++) {
    vector<ll> b(n);
    rep(i, n) b[i] = a[i] - x;
    ll t = 0;
    rep(i, n) t = gcd(t, b[i]);
    if (t != 1) {
      Debug(x, t);
      cout << 1 << endl;
      exit(0);
    }
  }
  cout << 2 << endl;
  return 0;
}