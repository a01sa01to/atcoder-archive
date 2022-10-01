/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35324870
 * Submitted at: 2022-10-02 00:14:41
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_f
 * Result: AC
 * Execution Time: 894 ms
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
  vector a(n, vector<int>(n));
  rep(i, n) rep(j, n) cin >> a[i][j];
  map<pair<int, int>, ll> mp1, mp2;
  rep(bit, 1 << (n - 1)) {
    int now = 0;
    int i = 0, j = 0;
    rep(k, n - 1) {
      now ^= a[i][j];
      ((bit & (1 << k)) ? i : j)++;
    }
    mp1[{ __builtin_popcount(bit), now }]++;
  }
  rep(bit, 1 << (n - 1)) {
    int now = 0;
    int i = n - 1, j = n - 1;
    rep(k, n - 1) {
      now ^= a[i][j];
      ((bit & (1 << k)) ? j : i)--;
    }
    mp2[{ __builtin_popcount(bit), now }]++;
  }
  Debug(mp1);
  Debug(mp2);
  ll ans = 0;
  for (auto [k, v] : mp1) {
    int x = k.second ^ a[k.first][n - 1 - k.first];
    Debug(k, v, x);
    ans += v * mp2[{ k.first, x }];
  }
  cout << ans << endl;
  return 0;
}