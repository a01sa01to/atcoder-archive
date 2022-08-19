/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc035/submissions/34148157
 * Submitted at: 2022-08-20 00:12:27
 * Problem URL: https://atcoder.jp/contests/arc035/tasks/arc035_c
 * Result: AC
 * Execution Time: 178 ms
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
  int n, m;
  cin >> n >> m;
  vector dist(n, vector<ll>(n, 1e18));
  rep(i, n) dist[i][i] = 0;
  rep(_, m) {
    ll a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    dist[a][b] = dist[b][a] = c;
  }
  rep(k, n) rep(i, n) rep(j, n) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }
  ll s = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      Debug(i, j, dist[i][j]);
      s += dist[i][j];
    }
  }
  int k;
  cin >> k;
  rep(_, k) {
    ll x, y, z;
    cin >> x >> y >> z;
    --x, --y;
    if (dist[x][y] > z) {
      s += z - dist[x][y];
      dist[x][y] = dist[y][x] = z;
      rep(i, n) rep(j, n) {
        ll nd = dist[i][x] + z + dist[y][j];
        if (dist[i][j] > nd) {
          s += nd - dist[i][j];
          dist[i][j] = dist[j][i] = nd;
        }
        ll nd2 = dist[i][y] + z + dist[x][j];
        if (dist[i][j] > nd2) {
          s += nd2 - dist[i][j];
          dist[i][j] = dist[j][i] = nd2;
        }
        Debug(i, j, dist[i][j]);
      }
    }
    cout << s << endl;
  }
  return 0;
}