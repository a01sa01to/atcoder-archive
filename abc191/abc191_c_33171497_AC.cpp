/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/33171497
 * Submitted at: 2022-07-12 00:35:34
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_c
 * Result: AC
 * Execution Time: 6 ms
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
  int ans = 0;
  rep(i, h - 1) rep(j, w - 1) {
    int cnt = 0;
    cnt += (Grid[i][j] == '#');
    cnt += (Grid[i][j + 1] == '#');
    cnt += (Grid[i + 1][j] == '#');
    cnt += (Grid[i + 1][j + 1] == '#');
    if (cnt % 2) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}