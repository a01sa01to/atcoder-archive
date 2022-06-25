/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32739058
 * Submitted at: 2022-06-25 22:10:13
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_d
 * Result: WA
 * Execution Time: 19 ms
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
  rep(i, n) rep(j, n) {
    if (i == j) continue;
    auto [xi, yi, pi] = v[i];
    auto [xj, yj, pj] = v[j];
    ll cost = (abs(xi - xj) + abs(yi - yj) + pi - 1) / pi;
    t.push_back({ cost, i, j });
  }
  sort(t.begin(), t.end());
  dsu d(n);
  ll ans = 0;
  rep(i, t.size()) {
    auto [cost, fr, to] = t[i];
    if (d.same(fr, to)) continue;
    d.merge(fr, to);
    ans = max(ans, cost);
  }
  cout << ans << endl;
  return 0;
}