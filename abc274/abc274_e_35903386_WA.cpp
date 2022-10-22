/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35903386
 * Submitted at: 2022-10-23 00:38:09
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_e
 * Result: WA
 * Execution Time: 1915 ms
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

inline double dist(pair<int, int>& a, pair<int, int>& b) {
  return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> v(n + m);
  rep(i, n + m) cin >> v[i].first >> v[i].second;
  v.push_back({ 0, 0 });
  vector dp(n + m + 1, vector<double>(1 << (n + m + 1), 1e18));
  dp[n + m][0] = 0;
  dp[n + m][1 << (n + m)] = 0;
  queue<pair<int, int>> q;
  q.push({ n + m, 1 << (n + m) });
  double ans = 1e18;
  while (!q.empty()) {
    auto [i, s] = q.front();
    q.pop();
    int cnt = __builtin_popcount(s >> n) - 1;
    if ((s & ((1 << n) - 1)) == ((1 << n) - 1)) {
      rep(k, n + m + 1) {
        if (!(s & (1 << k))) continue;
        chmin(ans, dp[k][s] + dist(v[k], v[n + m]) / (1 << cnt));
      }
      continue;
    }
    rep(j, n + m) {
      if (i == j) continue;
      if (s & (1 << j)) continue;
      rep(k, n + m + 1) {
        if (!(s & (1 << k))) continue;
        bool xxx = chmin(dp[j][s | (1 << j)], dp[k][s] + dist(v[k], v[j]) / (1 << cnt));
        if (xxx) {
          q.push({ j, s | (1 << j) });
        }
      }
    }
    Debug(dp);
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}