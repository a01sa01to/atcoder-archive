/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc005/submissions/35775368
 * Submitted at: 2022-10-19 00:03:05
 * Problem URL: https://atcoder.jp/contests/abc005/tasks/abc005_4
 * Result: AC
 * Execution Time: 575 ms
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
  int n;
  cin >> n;
  vector d(n, vector<int>(n));
  rep(i, n) rep(j, n) cin >> d[i][j];
  vector sum(n + 1, vector<int>(n + 1, 0));
  rep(i, n) rep(j, n) sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + d[i][j];

  int q;
  cin >> q;
  while (q--) {
    int p;
    cin >> p;
    int ans = 0;
    for (int x1 = 0; x1 < n; x1++) {
      for (int y1 = 0; y1 < n; y1++) {
        for (int x2 = x1 + 1; x2 <= n; x2++) {
          int y2 = y1 + p / (x2 - x1);
          if (y2 > n) y2 = n;
          int t = sum[x2][y2] - sum[x1][y2] - sum[x2][y1] + sum[x1][y1];
          ans = max(ans, t);
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}