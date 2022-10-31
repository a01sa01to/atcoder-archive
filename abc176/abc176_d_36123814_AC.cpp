/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc176/submissions/36123814
 * Submitted at: 2022-11-01 00:09:31
 * Problem URL: https://atcoder.jp/contests/abc176/tasks/abc176_d
 * Result: AC
 * Execution Time: 216 ms
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

  deque<pair<int, int>> que;
  que.push_back({ ch, cw });

  auto chk = [&](int x, int y, int nd) {
    if (x < 0 || x >= h || y < 0 || y >= w) return false;
    if (Grid[x][y] == '#') return false;
    if (dist[x][y] <= nd) return false;
    dist[x][y] = nd;
    return true;
  };

  while (!que.empty()) {
    auto [i, j] = que.front();
    que.pop_front();
    if (chk(i + 1, j, dist[i][j])) que.push_front({ i + 1, j });
    if (chk(i - 1, j, dist[i][j])) que.push_front({ i - 1, j });
    if (chk(i, j + 1, dist[i][j])) que.push_front({ i, j + 1 });
    if (chk(i, j - 1, dist[i][j])) que.push_front({ i, j - 1 });
    for (int dx = -2; dx <= 2; dx++) {
      for (int dy = -2; dy <= 2; dy++) {
        if (chk(i + dx, j + dy, dist[i][j] + 1)) que.push_back({ i + dx, j + dy });
      }
    }
  }
  cout << (dist[dh][dw] == INF ? -1 : dist[dh][dw]) << endl;
  return 0;
}