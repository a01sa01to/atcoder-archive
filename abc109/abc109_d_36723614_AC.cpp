/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc109/submissions/36723614
 * Submitted at: 2022-11-23 00:13:26
 * Problem URL: https://atcoder.jp/contests/abc109/tasks/abc109_d
 * Result: AC
 * Execution Time: 247 ms
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
  vector Grid(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  vector<tuple<int, int, int, int>> ans(0);
  rep(i, h) {
    if (i % 2 == 0) {
      for (int j = 0; j < w; j++) {
        if (Grid[i][j] % 2 == 1) {
          if (j == w - 1) {
            if (i == h - 1) continue;
            ans.push_back({ i, j, i + 1, j });
            Grid[i][j]--;
            Grid[i + 1][j]++;
          }
          else {
            ans.push_back({ i, j, i, j + 1 });
            Grid[i][j]--;
            Grid[i][j + 1]++;
          }
        }
      }
    }
    else {
      for (int j = w - 1; j >= 0; j--) {
        if (Grid[i][j] % 2 == 1) {
          if (j == 0) {
            if (i == h - 1) continue;
            ans.push_back({ i, j, i + 1, j });
            Grid[i][j]--;
            Grid[i + 1][j]++;
          }
          else {
            ans.push_back({ i, j, i, j - 1 });
            Grid[i][j]--;
            Grid[i][j - 1]++;
          }
        }
      }
    }
  }
  cout << ans.size() << endl;
  for (auto [a, b, c, d] : ans) {
    cout << a + 1 << " " << b + 1 << " " << c + 1 << " " << d + 1 << endl;
  }
  return 0;
}