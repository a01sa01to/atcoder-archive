/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc179/submissions/35624937
 * Submitted at: 2022-10-13 21:29:39
 * Problem URL: https://atcoder.jp/contests/abc179/tasks/abc179_e
 * Result: AC
 * Execution Time: 103 ms
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
  ll n, x, m;
  cin >> n >> x >> m;
  ll logN;
  for (int i = 60; i >= 0; i--) {
    if (n & (1LL << i)) {
      logN = i;
      break;
    }
  }

  vector d(m, vector<pair<int, ll>>(logN + 1, { -1, 0 }));
  rep(i, m) {
    d[i][0] = { (ll(i) * i) % m, i };
  }
  rep(j, logN) {
    rep(i, m) {
      auto [nxt, sum] = d[i][j];
      auto [nxt2, sum2] = d[nxt][j];
      d[i][j + 1] = { nxt2, sum + sum2 };
    }
  }

  ll ans = 0;
  ll cur = x;
  rep(i, logN + 1) {
    if (n & (1LL << i)) {
      auto [nxt, sum] = d[cur][i];
      ans += sum;
      cur = nxt;
    }
  }
  cout << ans << endl;
  return 0;
}