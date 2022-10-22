/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35904099
 * Submitted at: 2022-10-23 01:10:14
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_e
 * Result: WA
 * Execution Time: 70 ms
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

inline double dist(pair<ll, ll> a, pair<ll, ll> b) {
  return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> p(n + m);
  rep(i, n) cin >> p[i].first >> p[i].second;
  rep(i, m) cin >> p[n + i].first >> p[n + i].second;
  constexpr double INF = 1e18;
  vector<double> dp(1 << (n + m), INF);
  dp[0] = 0;
  priority_queue<tuple<double, ll, ll>, vector<tuple<double, ll, ll>>, greater<>> q;
  p.push_back({ 0, 0 });
  q.push({ 0, 0, n + m });
  double ans = INF;
  while (!q.empty()) {
    auto [d, s, u] = q.top();
    q.pop();
    int cnt = __builtin_popcount(s >> n);
    Debug(s, u, cnt);
    if ((s & ((1 << n) - 1)) == ((1 << n) - 1)) {
      Debug(s, u, cnt, ans);
      Debug(dist(p[u], p[n + m]) / (1 << cnt));
      chmin(ans, d + dist(p[u], p[n + m]) / (1 << cnt));
      continue;
    }
    rep(i, n + m) {
      if ((1 << i) & s) continue;
      Debug(s, u, i, cnt);
      Debug(dist(p[u], p[i]) / (1 << cnt));
      bool a = chmin(dp[s | (1 << i)], d + (dist(p[u], p[i]) / (1 << cnt)));
      if (a) q.push({ dp[s | (1 << i)], s | (1 << i), i });
    }
    Debug(dp);
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}