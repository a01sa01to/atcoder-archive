/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc267/submissions/34550900
 * Submitted at: 2022-09-03 21:31:21
 * Problem URL: https://atcoder.jp/contests/abc267/tasks/abc267_d
 * Result: AC
 * Execution Time: 35 ms
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
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector dp(n + 1, vector<ll>(m + 1, -1e18));
  dp[0][0] = 0;
  rep(i, n) {
    rep(j, m + 1) {
      dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
      if (j < m) dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + a[i] * (j + 1));
    }
  }
  cout << dp[n][m] << endl;
  return 0;
}