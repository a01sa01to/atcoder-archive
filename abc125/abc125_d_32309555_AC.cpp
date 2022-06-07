/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc125/submissions/32309555
 * Submitted at: 2022-06-08 00:43:30
 * Problem URL: https://atcoder.jp/contests/abc125/tasks/abc125_d
 * Result: AC
 * Execution Time: 49 ms
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
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector dp(n + 1, vector<ll>(2, -1e18));
  dp[0][0] = 0;
  rep(i, n) {
    dp[i + 1][0] = max(dp[i][0] + a[i], dp[i][1] - a[i]);
    dp[i + 1][1] = max(dp[i][1] + a[i], dp[i][0] - a[i]);
  }
  cout << dp[n][0] << endl;
  return 0;
}