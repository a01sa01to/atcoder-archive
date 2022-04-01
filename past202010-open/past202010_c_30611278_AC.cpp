/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202010-open/submissions/30611278
 * Submitted at: 2022-04-02 00:09:03
 * Problem URL: https://atcoder.jp/contests/past202010-open/tasks/past202010_c
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
#define chk(x) x == '#'

int main() {
  int n, m;
  cin >> n >> m;
  vector Grid(n, vector<char>(m));
  rep(i, n) rep(j, m) cin >> Grid[i][j];
  vector ans(n, vector<int>(m, 0));

  auto chk = [](const char& c) {
    return (c == '#' ? 1 : 0);
  };

  rep(i, n) rep(j, m) {
    if (i > 0 && j > 0) ans[i][j] += chk(Grid[i - 1][j - 1]);
    if (i > 0) ans[i][j] += chk(Grid[i - 1][j]);
    if (i > 0 && j < m - 1) ans[i][j] += chk(Grid[i - 1][j + 1]);
    if (j > 0) ans[i][j] += chk(Grid[i][j - 1]);
    ans[i][j] += chk(Grid[i][j]);
    if (j < m - 1) ans[i][j] += chk(Grid[i][j + 1]);
    if (i < n - 1 && j > 0) ans[i][j] += chk(Grid[i + 1][j - 1]);
    if (i < n - 1) ans[i][j] += chk(Grid[i + 1][j]);
    if (i < n - 1 && j < m - 1) ans[i][j] += chk(Grid[i + 1][j + 1]);
  }
  rep(i, n) {
    rep(j, m) cout << ans[i][j];
    cout << endl;
  }
  return 0;
}