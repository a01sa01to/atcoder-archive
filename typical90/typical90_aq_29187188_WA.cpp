/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29187188
 * Submitted at: 2022-02-10 00:41:33
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_aq
 * Result: WA
 * Execution Time: 172 ms
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

inline void chmin(int& a, int b) {
  a = min(a, b);
}

struct Point {
  int x, y;
};

int main() {
  int h, w, rs, cs, rt, ct;
  cin >> h >> w >> rs >> cs >> rt >> ct;
  --rs, --cs, --rt, --ct;
  Point s = { rs, cs }, g = { rt, ct };
  vector Grid(h, vector<bool>(w, false));
  rep(i, h) rep(j, w) {
    char c;
    cin >> c;
    if (c == '#') Grid[i][j] = true;
  }
  // dist[i][j] = (i,j)で[上右下左]を向くまでの最小
  vector dist(h, vector<vector<int>>(w, vector<int>(4, INT_MAX)));
  queue<Point> q;
  dist[s.x][s.y] = { 0, 0, 0, 0 };
  q.push(s);
  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    if (x > 0 && !Grid[x - 1][y]) {
      chmin(dist[x - 1][y][0], dist[x][y][2] + 1);
      chmin(dist[x - 1][y][1], dist[x][y][2] + 1);
      chmin(dist[x - 1][y][3], dist[x][y][2] + 1);
      chmin(dist[x - 1][y][2], dist[x][y][2]);
      q.push({ x - 1, y });
      Grid[x - 1][y] = true;
    }
    if (x < h - 1 && !Grid[x + 1][y]) {
      chmin(dist[x + 1][y][1], dist[x][y][0] + 1);
      chmin(dist[x + 1][y][2], dist[x][y][0] + 1);
      chmin(dist[x + 1][y][3], dist[x][y][0] + 1);
      chmin(dist[x + 1][y][0], dist[x][y][0]);
      q.push({ x + 1, y });
      Grid[x + 1][y] = true;
    }
    if (y > 0 && !Grid[x][y - 1]) {
      chmin(dist[x][y - 1][0], dist[x][y][3] + 1);
      chmin(dist[x][y - 1][1], dist[x][y][3] + 1);
      chmin(dist[x][y - 1][2], dist[x][y][3] + 1);
      chmin(dist[x][y - 1][3], dist[x][y][3]);
      q.push({ x, y - 1 });
      Grid[x][y - 1] = true;
    }
    if (y < w - 1 && !Grid[x][y + 1]) {
      chmin(dist[x][y + 1][2], dist[x][y][1] + 1);
      chmin(dist[x][y + 1][3], dist[x][y][1] + 1);
      chmin(dist[x][y + 1][0], dist[x][y][1] + 1);
      chmin(dist[x][y + 1][1], dist[x][y][1]);
      q.push({ x, y + 1 });
      Grid[x][y + 1] = true;
    }
  }
  Debug(dist);
  int ans = dist[g.x][g.y][0];
  rep(i, 4) chmin(ans, dist[g.x][g.y][i]);
  cout << ans << endl;
  return 0;
}