/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc208/submissions/37046824
 * Submitted at: 2022-12-06 00:08:35
 * Problem URL: https://atcoder.jp/contests/abc208/tasks/abc208_d
 * Result: AC
 * Execution Time: 146 ms
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
  constexpr ll INF = 1e18;
  vector dist(n, vector<ll>(n, INF));
  rep(i, n) dist[i][i] = 0;
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    dist[a][b] = c;
  }
  ll ans = 0;
  rep(k, n) rep(i, n) rep(j, n) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    if (dist[i][j] != INF) ans += dist[i][j];
  }
  cout << ans << endl;
  return 0;
}