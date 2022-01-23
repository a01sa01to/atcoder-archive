/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28761777
 * Submitted at: 2022-01-24 00:02:07
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_az
 * Result: AC
 * Execution Time: 8 ms
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

typedef modint1000000007 mint;

int main() {
  int n;
  cin >> n;
  vector a(n, vector<int>(6));
  rep(i, n) rep(j, 6) cin >> a[i][j];

  vector dp(n, vector<mint>(6, 0));
  rep(i, 6) dp[0][i] = a[0][i];
  rep(i, n - 1) {
    rep(j, 6) {
      rep(k, 6) dp[i + 1][j] += dp[i][k] * a[i + 1][j];
    }
  }

  mint ans = 0;
  rep(i, 6) ans += dp[n - 1][i];

  cout << ans.val() << endl;
  return 0;
}