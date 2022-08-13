/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/33995913
 * Submitted at: 2022-08-13 21:15:02
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_c
 * Result: AC
 * Execution Time: 788 ms
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
  int h1, w1, h2, w2;
  cin >> h1 >> w1;
  vector a(h1, vector<int>(w1));
  rep(i, h1) rep(j, w1) cin >> a[i][j];
  cin >> h2 >> w2;
  vector b(h2, vector<int>(w2));
  rep(i, h2) rep(j, w2) cin >> b[i][j];
  bool chk = false;
  rep(hbit, 1 << h1) rep(wbit, 1 << w1) {
    vector<vector<int>> c(0);
    rep(i, h1) {
      if (hbit & (1 << i)) {
        vector<int> tmp(0);
        rep(j, w1) {
          if (wbit & (1 << j)) {
            tmp.push_back(a[i][j]);
          }
        }
        c.push_back(tmp);
      }
      chk |= (c == b);
    }
  }
  puts(chk ? "Yes" : "No");
  return 0;
}