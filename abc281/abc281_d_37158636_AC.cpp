/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37158636
 * Submitted at: 2022-12-10 21:26:08
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_d
 * Result: AC
 * Execution Time: 15 ms
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
  int n, k, d;
  cin >> n >> k >> d;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector dp(n + 1, vector(k + 1, vector<ll>(d, -1)));
  dp[0][0][0] = 0;
  rep(i, n) {
    dp[i + 1] = dp[i];
    for (int j = 0; j < min(i + 1, k); j++) {
      rep(l, d) {
        if (dp[i][j][l] == -1) continue;
        ll nxt = dp[i][j][l] + a[i];
        dp[i + 1][j + 1][nxt % d] = max(dp[i + 1][j + 1][nxt % d], nxt);
        Debug(i, j, l, dp[i][j][l], nxt, dp[i + 1][j + 1][nxt % d]);
      }
    }
  }
  Debug(dp);
  ll ans = -1;
  rep(i, n) {
    ans = max(ans, dp[i + 1][k][0]);
  }
  cout << ans << endl;
  return 0;
}