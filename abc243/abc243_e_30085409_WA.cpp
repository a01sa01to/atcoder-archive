/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/30085409
 * Submitted at: 2022-03-13 00:01:11
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_e
 * Result: WA
 * Execution Time: 82 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector Query(m, tuple<int, int, int>(0, 0, 0));
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    Query[i] = { a, b, c };
  }

  vector dist(n, vector<ll>(n, 1e18));
  for (auto [a, b, c] : Query) dist[a][b] = dist[b][a] = c;
  rep(i, n) rep(j, n) rep(k, n) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }

  int ans = 0;
  for (auto [a, b, c] : Query) {
    bool flag = false;
    rep(i, n) if (dist[a][i] + dist[i][b] <= c) flag = true;
    if (flag) ++ans;
  }

  cout << ans << endl;
  return 0;
}