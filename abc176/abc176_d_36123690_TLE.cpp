/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc176/submissions/36123690
 * Submitted at: 2022-11-01 00:05:49
 * Problem URL: https://atcoder.jp/contests/abc176/tasks/abc176_d
 * Result: TLE
 * Execution Time: 2205 ms
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
  int ch, cw, dh, dw;
  cin >> ch >> cw >> dh >> dw;
  --ch, --cw, --dh, --dw;

  vector Grid(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];

  constexpr int INF = 1e9;
  vector dist(h, vector(w, INF));
  dist[ch][cw] = 0;

  queue<pair<int, int>> que;
  que.push({ ch, cw });

  auto push = [&](int x, int y, int nd) {
    if (x < 0 || x >= h || y < 0 || y >= w) return;
    if (Grid[x][y] == '#') return;
    if (dist[x][y] <= nd) return;
    dist[x][y] = nd;
    que.push({ x, y });
  };

  while (!que.empty()) {
    auto [i, j] = que.front();
    que.pop();
    push(i + 1, j, dist[i][j]);
    push(i - 1, j, dist[i][j]);
    push(i, j + 1, dist[i][j]);
    push(i, j - 1, dist[i][j]);
    for (int dx = -2; dx <= 2; dx++) {
      for (int dy = -2; dy <= 2; dy++) {
        push(i + dx, j + dy, dist[i][j] + 1);
      }
    }
  }
  cout << (dist[dh][dw] == INF ? -1 : dist[dh][dw]) << endl;
  return 0;
}