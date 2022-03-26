/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc009/submissions/30415424
 * Submitted at: 2022-03-26 16:20:27
 * Problem URL: https://atcoder.jp/contests/ahc009/tasks/ahc009_a
 * Result: AC
 * Execution Time: 12 ms
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

const int h = 20, w = 20;
int sx, sy, tx, ty;
double p;

struct Cell {
  bool u = false, d = false, l = false, r = false;
  Cell(bool u, bool d, bool l, bool r): u(u), d(d), l(l), r(r) {}
};

string solve(int s_x, int s_y, vector<vector<Cell>>& wall) {
  auto inRange = [&](int x, int y) {
    return 0 <= x && x < h && 0 <= y && y < w;
  };
  queue<tuple<int, int, string>> q;
  vector visited(h, vector<bool>(w, false));
  q.push({ s_x, s_y, "" });
  visited[s_x][s_y] = true;
  while (!q.empty()) {
    auto [x, y, s] = q.front();
    q.pop();
    if (x == tx && y == ty) {
      return s;
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
  return "";
}

int main() {
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
  rep(i, h) {
    wall[i][0].l = true;
    wall[i][w - 1].r = true;
  }
  rep(i, w) {
    wall[0][i].u = true;
    wall[h - 1][i].d = true;
  }

  // Solve
  string ans = "";
  vector prob(h, vector<double>(w, 0));
  prob[sx][sy] = true;
  int nx = sx, ny = sy;
  while (true) {
    string t = solve(nx, ny, wall);
    Debug(t);
    if (t.size() != 0 && ans.size() + t.size() <= 200) {
      ans += t;
      rep(turn, t.size()) {
        vector tmp(h, vector<double>(w, 0));
        rep(i, h) rep(j, w) {
          if (t[turn] == 'U') {
            if (wall[i][j].u) {
              tmp[i][j] += prob[i][j];
            }
            else {
              tmp[i - 1][j] += prob[i][j] * (1 - p);
              tmp[i][j] += prob[i][j] * p;
            }
          }
          if (t[turn] == 'D') {
            if (wall[i][j].d) {
              tmp[i][j] += prob[i][j];
            }
            else {
              tmp[i + 1][j] += prob[i][j] * (1 - p);
              tmp[i][j] += prob[i][j] * p;
            }
          }
          if (t[turn] == 'L') {
            if (wall[i][j].l) {
              tmp[i][j] += prob[i][j];
            }
            else {
              tmp[i][j - 1] += prob[i][j] * (1 - p);
              tmp[i][j] += prob[i][j] * p;
            }
          }
          if (t[turn] == 'R') {
            if (wall[i][j].r) {
              tmp[i][j] += prob[i][j];
            }
            else {
              tmp[i][j + 1] += prob[i][j] * (1 - p);
              tmp[i][j] += prob[i][j] * p;
            }
          }
        }
        swap(prob, tmp);
      }
      tuple<int, int, double> nxt = { 0, 0, 0 };
      rep(i, h) rep(j, w) {
        if (prob[i][j] > get<2>(nxt) && i != tx && j != ty) {
          nxt = { i, j, prob[i][j] };
        }
      }
      Debug(nxt);
      if (get<2>(nxt) > 0) {
        nx = get<0>(nxt);
        ny = get<1>(nxt);
      }
    }
    else {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}