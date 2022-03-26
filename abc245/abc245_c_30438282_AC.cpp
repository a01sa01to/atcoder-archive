/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30438282
 * Submitted at: 2022-03-26 21:09:05
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_c
 * Result: AC
 * Execution Time: 131 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  vector dp(n, vector<bool>(4, false));
  dp[0][0] = dp[0][1] = dp[0][2] = dp[0][3] = true;
  rep(i, n - 1) {
    dp[i + 1][0] = (dp[i][0] || dp[i][2]) && (abs(a[i] - a[i + 1]) <= k);
    dp[i + 1][1] = (dp[i][0] || dp[i][2]) && (abs(a[i] - b[i + 1]) <= k);
    dp[i + 1][2] = (dp[i][1] || dp[i][3]) && (abs(b[i] - a[i + 1]) <= k);
    dp[i + 1][3] = (dp[i][1] || dp[i][3]) && (abs(b[i] - b[i + 1]) <= k);
  }
  bool chk = false;
  rep(i, 4) chk |= dp[n - 1][i];
  puts(chk ? "Yes" : "No");
  return 0;
}