/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/29870354
 * Submitted at: 2022-03-05 21:07:04
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_c
 * Result: AC
 * Execution Time: 166 ms
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

typedef modint998244353 mint;

int main() {
  int n;
  cin >> n;

  // dp[i][j] = i桁目がj
  vector dp(n, vector<mint>(9, 0));

  rep(i, 9) dp[0][i] = 1;

  rep(i, n - 1) rep(j, 9) {
    if (j != 0) dp[i + 1][j - 1] += dp[i][j];
    dp[i + 1][j] += dp[i][j];
    if (j != 8) dp[i + 1][j + 1] += dp[i][j];
  }

  mint ans = 0;
  rep(i, 9) ans += dp[n - 1][i];
  cout << ans.val() << endl;
  return 0;
}