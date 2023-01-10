/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/37928751
 * Submitted at: 2023-01-11 00:14:43
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_e
 * Result: AC
 * Execution Time: 906 ms
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
  int n;
  cin >> n;
  int ax, ay, bx, by;
  cin >> ax >> ay >> bx >> by;
  --ax, --ay, --bx, --by;
  vector Grid(n, vector<char>(n));
  rep(i, n) rep(j, n) cin >> Grid[i][j];
  constexpr int INF = 1e9;
  vector dist(n, vector(n, vector<int>(4, INF)));
  deque<tuple<int, int, int>> q;
  rep(d, 4) {
    dist[ax][ay][d] = 1;
    q.push_back({ ax, ay, d });
  }
  const vector<int> dx = { 1, -1, -1, 1 };
  const vector<int> dy = { 1, -1, 1, -1 };
  while (!q.empty()) {
    auto [x, y, d] = q.front();
    q.pop_front();
    rep(nd, 4) {
      int nx = x + dx[nd], ny = y + dy[nd];
      if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
      if (Grid[nx][ny] == '#') continue;
      int ndist = dist[x][y][d] + (d == nd ? 0 : 1);
      if (ndist < dist[nx][ny][nd]) {
        dist[nx][ny][nd] = ndist;
        if (d == nd)
          q.push_front({ nx, ny, nd });
        else
          q.push_back({ nx, ny, nd });
      }
    }
  }
  Debug(dist);
  int ans = INF;
  rep(d, 4) ans = min(ans, dist[bx][by][d]);
  cout << (ans == INF ? -1 : ans) << endl;
  return 0;
}