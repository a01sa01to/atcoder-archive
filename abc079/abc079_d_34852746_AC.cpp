/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc079/submissions/34852746
 * Submitted at: 2022-09-14 18:30:23
 * Problem URL: https://atcoder.jp/contests/abc079/tasks/abc079_d
 * Result: AC
 * Execution Time: 13 ms
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
  int h, w;
  cin >> h >> w;
  constexpr int x = 10;
  vector dist(x, vector(x, 1e9));
  rep(i, x) rep(j, x) cin >> dist[i][j];
  rep(k, x) rep(i, x) rep(j, x) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  vector<int> cnt(x, 0);
  rep(i, h) rep(j, w) {
    int a;
    cin >> a;
    if (a == -1) continue;
    cnt[a]++;
  }
  int ans = 0;
  rep(i, x) ans += cnt[i] * dist[i][1];
  cout << ans << endl;
  return 0;
}