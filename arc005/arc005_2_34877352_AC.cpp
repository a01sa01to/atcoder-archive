/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc005/submissions/34877352
 * Submitted at: 2022-09-16 00:22:57
 * Problem URL: https://atcoder.jp/contests/arc005/tasks/arc005_2
 * Result: AC
 * Execution Time: 8 ms
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
  int x, y;
  cin >> y >> x;
  --x, --y;
  string s;
  cin >> s;
  int dx = 0, dy = 0;
  if (s.back() == 'D') {
    dx = 1;
    s.pop_back();
  }
  if (s.back() == 'U') {
    dx = -1;
    s.pop_back();
  }
  if (s == "R") dy = 1;
  if (s == "L") dy = -1;
  constexpr int n = 9;
  vector Grid(n, vector<int>(n));
  rep(i, n) rep(j, n) {
    char c;
    cin >> c;
    Grid[i][j] = c - '0';
  }
  int cnt = 0;
  while (cnt < 4) {
    bool flag = false;
    if (x < 0 || x >= n) {
      dx = -dx;
      x += 2 * dx;
      flag = true;
    }
    if (y < 0 || y >= n) {
      dy = -dy;
      y += 2 * dy;
      flag = true;
    }
    if (flag) continue;
    Debug(x, y);
    cout << Grid[x][y];
    x += dx, y += dy;
    cnt++;
  }
  cout << endl;
  return 0;
}