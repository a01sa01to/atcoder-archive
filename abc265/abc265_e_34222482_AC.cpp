/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/34222482
 * Submitted at: 2022-08-21 21:31:09
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_e
 * Result: AC
 * Execution Time: 1209 ms
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
using mint = modint998244353;

int main() {
  int n, m;
  cin >> n >> m;
  ll a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  set<pair<ll, ll>> s;
  rep(_, m) {
    int x, y;
    cin >> x >> y;
    s.insert({ x, y });
  }
  map<pair<ll, ll>, mint> dp;
  dp[{ 0, 0 }] = 1;
  rep(_, n) {
    map<pair<ll, ll>, mint> ndp;
    for (auto [p, v] : dp) {
      auto [x, y] = p;
      if (!s.count({ x + a, y + b })) {
        ndp[{ x + a, y + b }] += v;
      }
      if (!s.count({ x + c, y + d })) {
        ndp[{ x + c, y + d }] += v;
      }
      if (!s.count({ x + e, y + f })) {
        ndp[{ x + e, y + f }] += v;
      }
    }
    dp = ndp;
  }
  mint ans = 0;
  for (auto [p, v] : dp) {
    ans += v;
  }
  cout << ans.val() << endl;
  return 0;
}