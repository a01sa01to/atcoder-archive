/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32755489
 * Submitted at: 2022-06-26 00:13:07
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_d
 * Result: AC
 * Execution Time: 23 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<tuple<ll, ll, ll>> v;
  rep(i, n) {
    ll x, y, p;
    cin >> x >> y >> p;
    v.push_back({ x, y, p });
  }
  vector<tuple<ll, ll, ll>> t;
  vector dist(n, vector<ll>(n, 0));
  rep(i, n) rep(j, n) {
    if (i == j) continue;
    auto [xi, yi, pi] = v[i];
    auto [xj, yj, pj] = v[j];
    ll cost = (abs(xi - xj) + abs(yi - yj) + pi - 1) / pi;
    dist[i][j] = cost;
  }
  rep(k, n) rep(i, n) rep(j, n) {
    dist[i][j] = min(dist[i][j], max(dist[i][k], dist[k][j]));
  }
  ll ans = 1e18;
  rep(i, n) {
    ll a = 0;
    rep(j, n) a = max(a, dist[i][j]);
    ans = min(ans, a);
  }
  cout << ans << endl;
  return 0;
}