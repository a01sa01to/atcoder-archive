/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33088715
 * Submitted at: 2022-07-09 21:26:05
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_d
 * Result: AC
 * Execution Time: 94 ms
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

inline ll sqr(ll x) { return x * x; }

int main() {
  int n, sx, sy, tx, ty;
  cin >> n >> sx >> sy >> tx >> ty;
  vector<tuple<ll, ll, ll>> v;
  rep(i, n) {
    int x, y, z;
    cin >> x >> y >> z;
    v.push_back({ x, y, z });
  }
  dsu d(n);
  rep(i, n) rep(j, n) {
    auto [xi, yi, ri] = v[i];
    auto [xj, yj, rj] = v[j];
    ll dist = sqr(xi - xj) + sqr(yi - yj);
    if (dist <= sqr(ri + rj) && dist >= sqr(ri - rj)) {
      d.merge(i, j);
    }
  }
  rep(i, n) rep(j, n) {
    auto [xi, yi, ri] = v[i];
    auto [xj, yj, rj] = v[j];
    if (sqr(xi - sx) + sqr(yi - sy) == sqr(ri)) {
      if (sqr(xj - tx) + sqr(yj - ty) == sqr(rj)) {
        if (d.same(i, j)) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}