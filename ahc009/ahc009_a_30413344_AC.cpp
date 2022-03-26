/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc009/submissions/30413344
 * Submitted at: 2022-03-26 15:17:16
 * Problem URL: https://atcoder.jp/contests/ahc009/tasks/ahc009_a
 * Result: AC
 * Execution Time: 15 ms
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

struct Cell {
  bool u = false, d = false, l = false, r = false;
  Cell(bool u, bool d, bool l, bool r): u(u), d(d), l(l), r(r) {}
};

int main() {
  const int h = 20, w = 20;
  int sx, sy, tx, ty;
  double p;

  // Input
  cin >> sx >> sy >> tx >> ty >> p;
  vector wall(h, vector<Cell>(w, Cell(false, false, false, false)));
  rep(i, h) rep(j, w - 1) {
    char c;
    cin >> c;
    if (c == '1') {
      wall[i][j].r = true;
      wall[i][j + 1].l = true;
    }
  }
  rep(i, h - 1) rep(j, w) {
    char c;
    cin >> c;
    if (c == '1') {
      wall[i][j].d = true;
      wall[i + 1][j].u = true;
    }
  }

  auto inRange = [&](int x, int y) {
    return 0 <= x && x < h && 0 <= y && y < w;
  };

  // Solve
  queue<tuple<int, int, string>> q;
  vector visited(h, vector<bool>(w, false));
  q.push({ sx, sy, "" });
  visited[sx][sy] = true;
  while (!q.empty()) {
    auto [x, y, s] = q.front();
    q.pop();
    if (x == tx && y == ty) {
      cout << s << endl;
      break;
    }
    if (!wall[x][y].u && inRange(x - 1, y) && !visited[x - 1][y]) {
      q.push({ x - 1, y, s + "U" });
      visited[x - 1][y] = true;
    }
    if (!wall[x][y].d && inRange(x + 1, y) && !visited[x + 1][y]) {
      q.push({ x + 1, y, s + "D" });
      visited[x + 1][y] = true;
    }
    if (!wall[x][y].l && inRange(x, y - 1) && !visited[x][y - 1]) {
      q.push({ x, y - 1, s + "L" });
      visited[x][y - 1] = true;
    }
    if (!wall[x][y].r && inRange(x, y + 1) && !visited[x][y + 1]) {
      q.push({ x, y + 1, s + "R" });
      visited[x][y + 1] = true;
    }
  }
  return 0;
}