/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc069/submissions/34710555
 * Submitted at: 2022-09-10 00:25:34
 * Problem URL: https://atcoder.jp/contests/abc069/tasks/arc080_b
 * Result: RE
 * Execution Time: 119 ms
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
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector ans(h, vector<int>(w, -1));

  int x = 0, y = 0, i = 0;
  vector<int> mx = { 0, 0, 0, 0 };
  // right, down, left, up
  int dir = 0;
  while (true) {
    ans[x][y] = i + 1;
    if (dir == 0) {
      y++;
      if (y + 1 == w - mx[0]) {
        dir = 1;
        mx[3]++;
      }
    }
    else if (dir == 1) {
      x++;
      if (x + 1 == h - mx[1]) {
        dir = 2;
        mx[0]++;
      }
    }
    else if (dir == 2) {
      y--;
      if (y == mx[2]) {
        dir = 3;
        mx[1]++;
      }
    }
    else {
      x--;
      if (x == mx[3]) {
        dir = 0;
        mx[2]++;
      }
    }
    a[i]--;
    if (a[i] == 0) {
      i++;
      if (i == n) break;
    }
  }

  rep(i, h) {
    rep(j, w) cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}