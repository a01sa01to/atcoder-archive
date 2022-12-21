/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc213/submissions/37431570
 * Submitted at: 2022-12-22 00:38:32
 * Problem URL: https://atcoder.jp/contests/abc213/tasks/abc213_e
 * Result: AC
 * Execution Time: 59 ms
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
  vector Grid(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];

  auto inRange = [&](int i, int j) {
    return 0 <= i && i < h && 0 <= j && j < w;
  };
  const vector<int> dx = { 1, 0, -1, 0 };
  const vector<int> dy = { 0, 1, 0, -1 };

  deque<pair<int, int>> que;
  constexpr int INF = 1e9;
  vector dist(h, vector(w, INF));
  que.push_back({ 0, 0 });
  dist[0][0] = 0;
  while (!que.empty()) {
    auto [x, y] = que.front();
    que.pop_front();
    rep(i, 4) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (inRange(nx, ny) && dist[nx][ny] > dist[x][y] && Grid[nx][ny] == '.') {
        dist[nx][ny] = dist[x][y];
        que.push_front({ nx, ny });
      }
    }
    for (int i = -2; i <= 2; ++i) {
      for (int j = -2; j <= 2; ++j) {
        if (abs(i) + abs(j) > 3) continue;
        int nx = x + i;
        int ny = y + j;
        if (inRange(nx, ny) && dist[nx][ny] > dist[x][y] + 1) {
          dist[nx][ny] = dist[x][y] + 1;
          que.push_back({ nx, ny });
        }
      }
    }
  }
  cout << dist[h - 1][w - 1] << endl;
  return 0;
}