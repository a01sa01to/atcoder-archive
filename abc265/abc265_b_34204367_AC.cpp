/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/34204367
 * Submitted at: 2022-08-21 21:05:53
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_b
 * Result: AC
 * Execution Time: 108 ms
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
  ll n, m, t;
  cin >> n >> m >> t;
  vector<ll> a(n - 1);
  rep(i, n - 1) cin >> a[i];
  map<ll, ll> mp;
  rep(_, m) {
    ll x, y;
    cin >> x >> y;
    mp[x - 2] = y;
  }
  rep(i, n - 1) {
    if (t > a[i]) {
      t -= a[i];
      t += mp[i];
    }
    else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}