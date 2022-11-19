/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36647922
 * Submitted at: 2022-11-19 23:20:00
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_e
 * Result: AC
 * Execution Time: 202 ms
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
  int h, w, n, hh, ww;
  cin >> h >> w >> n >> hh >> ww;
  vector Grid(h, vector(w, 0));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  vector cnt(h + 1, vector(w + 1, vector<int>(n + 1, 0)));
  rep(i, h) rep(j, w) rep(k, n + 1) {
    cnt[i + 1][j + 1][k] = cnt[i + 1][j][k] + cnt[i][j + 1][k] - cnt[i][j][k] + (Grid[i][j] == k);
  }
  vector ans(h - hh + 1, vector(w - ww + 1, 0));
  rep(i, h - hh + 1) rep(j, w - ww + 1) {
    rep(k, n + 1) {
      int willwhite = cnt[h][w][k];
      int willblack = cnt[i + hh][j + ww][k] - cnt[i + hh][j][k] - cnt[i][j + ww][k] + cnt[i][j][k];
      ans[i][j] += (willwhite > willblack);
    }
  }
  rep(i, h - hh + 1) {
    rep(j, w - ww + 1) cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}