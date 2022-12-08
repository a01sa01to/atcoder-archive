/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc184/submissions/37099689
 * Submitted at: 2022-12-09 00:27:24
 * Problem URL: https://atcoder.jp/contests/abc184/tasks/abc184_e
 * Result: AC
 * Execution Time: 474 ms
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
  vector<vector<pair<int, int>>> pos(26);
  pair<int, int> s, g;
  rep(i, h) rep(j, w) {
    cin >> Grid[i][j];
    if (Grid[i][j] == 'S') s = { i, j };
    if (Grid[i][j] == 'G') g = { i, j };
    if (islower(Grid[i][j])) pos[Grid[i][j] - 'a'].push_back({ i, j });
  }
  constexpr int INF = 1e9;
  vector dist(h, vector<int>(w, INF));
  dist[s.first][s.second] = 0;
  queue<pair<int, int>> que;
  que.push(s);
  while (!que.empty()) {
    auto [x, y] = que.front();
    Debug(x, y);
    que.pop();
    vector<int> dx = { 1, 0, -1, 0 };
    vector<int> dy = { 0, 1, 0, -1 };
    rep(d, 4) {
      int nx = x + dx[d];
      int ny = y + dy[d];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if (Grid[nx][ny] == '#') continue;
      if (dist[nx][ny] != INF) continue;
      dist[nx][ny] = dist[x][y] + 1;
      que.push({ nx, ny });
    }
    Debug(Grid[x][y], !islower(Grid[x][y]));
    if (!islower(Grid[x][y])) continue;
    for (auto [nx, ny] : pos[Grid[x][y] - 'a']) {
      if (dist[nx][ny] != INF) continue;
      dist[nx][ny] = dist[x][y] + 1;
      que.push({ nx, ny });
    }
    pos[Grid[x][y] - 'a'].clear();
  }
  Debug(dist);
  int ans = dist[g.first][g.second];
  cout << (ans == INF ? -1 : ans) << endl;
  return 0;
}