/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc025/submissions/33886183
 * Submitted at: 2022-08-09 00:29:15
 * Problem URL: https://atcoder.jp/contests/arc025/tasks/arc025_2
 * Result: AC
 * Execution Time: 120 ms
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
  vector c(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> c[i][j];
  rep(i, h) rep(j, w) if ((i + j) % 2) c[i][j] *= -1;
  vector cum(h + 1, vector<int>(w + 1, 0));
  rep(i, h) rep(j, w) cum[i + 1][j + 1] = cum[i + 1][j] + cum[i][j + 1] - cum[i][j] + c[i][j];
  int ans = 0;
  rep(lx, h) rep(ly, w) {
    rep(rx, h) rep(ry, w) {
      if (lx > rx || ly > ry) continue;
      int sum = cum[rx + 1][ry + 1] - cum[lx][ry + 1] - cum[rx + 1][ly] + cum[lx][ly];
      if (sum == 0) ans = max(ans, (rx - lx + 1) * (ry - ly + 1));
    }
  }
  cout << ans << endl;
  return 0;
}