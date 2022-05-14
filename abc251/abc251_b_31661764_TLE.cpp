/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31661764
 * Submitted at: 2022-05-14 21:07:31
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_b
 * Result: TLE
 * Execution Time: 2289 ms
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
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector dp(n + 1, vector(w + 1, vector<bool>(4, false)));
  dp[0][0][0] = true;
  rep(i, n) {
    dp[i + 1] = dp[i];
    rep(j, w + 1) {
      rep(k, 3) {
        if (dp[i][j][k] && a[i] + j <= w) dp[i + 1][a[i] + j][k + 1] = true;
      }
    }
  }
  Debug(dp[n]);
  int ans = 0;
  rep(i, w + 1) if (dp[n][i][1] || dp[n][i][2] || dp[n][i][3]) ans++;
  cout << ans << endl;
  return 0;
}