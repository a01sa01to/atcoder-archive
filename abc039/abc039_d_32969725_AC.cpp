/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc039/submissions/32969725
 * Submitted at: 2022-07-04 00:03:30
 * Problem URL: https://atcoder.jp/contests/abc039/tasks/abc039_d
 * Result: AC
 * Execution Time: 9 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector s(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> s[i][j];

  vector ans(h, vector<char>(w, '#'));
  rep(i, h) rep(j, w) {
    if (s[i][j] == '.') {
      if (i > 0) {
        if (j > 0) ans[i - 1][j - 1] = '.';
        ans[i - 1][j] = '.';
        if (j + 1 < w) ans[i - 1][j + 1] = '.';
      }
      if (j > 0) ans[i][j - 1] = '.';
      ans[i][j] = '.';
      if (j + 1 < w) ans[i][j + 1] = '.';
      if (i + 1 < h) {
        if (j > 0) ans[i + 1][j - 1] = '.';
        ans[i + 1][j] = '.';
        if (j + 1 < w) ans[i + 1][j + 1] = '.';
      }
    }
  }
  rep(i, h) rep(j, w) {
    if (s[i][j] == '#') {
      bool chk = false;
      if (i > 0) {
        if (j > 0) chk |= ans[i - 1][j - 1] == '#';
        chk |= ans[i - 1][j] == '#';
        if (j + 1 < w) chk |= ans[i - 1][j + 1] == '#';
      }
      if (j > 0) chk |= ans[i][j - 1] == '#';
      chk |= ans[i][j] == '#';
      if (j + 1 < w) chk |= ans[i][j + 1] == '#';
      if (i + 1 < h) {
        if (j > 0) chk |= ans[i + 1][j - 1] == '#';
        chk |= ans[i + 1][j] == '#';
        if (j + 1 < w) chk |= ans[i + 1][j + 1] == '#';
      }
      if (!chk) {
        cout << "impossible" << endl;
        return 0;
      }
    }
  }
  cout << "possible" << endl;
  rep(i, h) {
    rep(j, w) cout << ans[i][j];
    cout << endl;
  }
  return 0;
}