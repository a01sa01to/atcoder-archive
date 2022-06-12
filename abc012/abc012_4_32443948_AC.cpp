/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc012/submissions/32443948
 * Submitted at: 2022-06-13 01:57:59
 * Problem URL: https://atcoder.jp/contests/abc012/tasks/abc012_4
 * Result: AC
 * Execution Time: 50 ms
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
  int n, m;
  cin >> n >> m;
  vector dist(n, vector<ll>(n, 1e18));
  rep(i, n) dist[i][i] = 0;
  rep(i, m) {
    int a, b, t;
    cin >> a >> b >> t;
    --a, --b;
    dist[a][b] = dist[b][a] = t;
  }
  rep(k, n) rep(i, n) rep(j, n) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }

  ll ans = 1e18;
  rep(i, n) {
    ll mx = 0;
    rep(j, n) mx = max(mx, dist[i][j]);
    ans = min(ans, mx);
  }
  cout << ans << endl;
  return 0;
}