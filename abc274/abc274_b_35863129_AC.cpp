/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35863129
 * Submitted at: 2022-10-22 21:02:40
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_b
 * Result: AC
 * Execution Time: 44 ms
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
  vector Grid(h, vector<char>(w, '.'));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  vector<int> ans(w, 0);
  rep(i, w) {
    rep(j, h) ans[i] += (Grid[j][i] == '#');
  }
  rep(i, w) cout << ans[i] << " ";
  cout << endl;
  return 0;
}