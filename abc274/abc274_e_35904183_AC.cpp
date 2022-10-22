/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35904183
 * Submitted at: 2022-10-23 01:14:17
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_e
 * Result: AC
 * Execution Time: 116 ms
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

template<typename T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

inline double dist(pair<ll, ll>& a, pair<ll, ll>& b) {
  return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

int main() {
  ll n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> v(n + m);
  rep(i, n + m) cin >> v[i].first >> v[i].second;
  v.push_back({ 0, 0 });
  vector dp(n + m, vector<double>(1 << (n + m), 1e18));
  rep(i, n + m) dp[i][1 << i] = dist(v[n + m], v[i]);
  rep(bit, 1 << (n + m)) {
    if (bit == 0) continue;
    ll cnt = __builtin_popcount(bit >> n);
    rep(i, n + m) {
      if (!(bit & (1 << i))) continue;
      rep(j, n + m) {
        if (bit & (1 << j)) continue;
        chmin(dp[j][bit | (1 << j)], dp[i][bit] + dist(v[i], v[j]) / (1 << cnt));
      }
    }
  }

  double ans = 1e18;
  rep(i, n + m) {
    for (ll bit = (1 << n) - 1; bit < (1 << (n + m)); bit += (1 << n)) {
      ll cnt = __builtin_popcount(bit >> n);
      chmin(ans, dp[i][bit] + dist(v[i], v[n + m]) / (1 << cnt));
    }
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}