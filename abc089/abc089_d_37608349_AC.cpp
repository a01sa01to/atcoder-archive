/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc089/submissions/37608349
 * Submitted at: 2022-12-29 11:22:37
 * Problem URL: https://atcoder.jp/contests/abc089/tasks/abc089_d
 * Result: AC
 * Execution Time: 259 ms
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
  int h, w, d;
  cin >> h >> w >> d;
  vector Grid(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];

  map<int, pair<int, int>> mp;
  rep(i, h) rep(j, w) mp[Grid[i][j]] = { i, j };
  vector<int> dist(h * w + 1, 0);
  for (int i = d + 1; i <= h * w; i++) {
    auto [x1, y1] = mp[i];
    auto [x2, y2] = mp[i - d];
    dist[i] = dist[i - d] + abs(x1 - x2) + abs(y1 - y2);
  }

  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << dist[r] - dist[l] << endl;
  }
  return 0;
}