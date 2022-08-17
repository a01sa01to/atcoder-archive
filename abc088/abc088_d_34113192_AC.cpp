/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/34113192
 * Submitted at: 2022-08-18 00:03:47
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_d
 * Result: AC
 * Execution Time: 10 ms
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
  int cnt = -1;
  rep(i, h) rep(j, w) {
    if (Grid[i][j] == '.') cnt++;
  }
  queue<tuple<int, int, int>> que;
  que.push({ 0, 0, 0 });
  while (!que.empty()) {
    auto [d, x, y] = que.front();
    que.pop();
    if (x == h - 1 && y == w - 1) {
      cout << cnt - d << endl;
      break;
    }
    if (x > 0 && Grid[x - 1][y] == '.') {
      Grid[x - 1][y] = '#';
      que.push({ d + 1, x - 1, y });
    }
    if (x < h - 1 && Grid[x + 1][y] == '.') {
      Grid[x + 1][y] = '#';
      que.push({ d + 1, x + 1, y });
    }
    if (y > 0 && Grid[x][y - 1] == '.') {
      Grid[x][y - 1] = '#';
      que.push({ d + 1, x, y - 1 });
    }
    if (y < w - 1 && Grid[x][y + 1] == '.') {
      Grid[x][y + 1] = '#';
      que.push({ d + 1, x, y + 1 });
    }
  }
  if (Grid[h - 1][w - 1] == '.') cout << -1 << endl;
  return 0;
}