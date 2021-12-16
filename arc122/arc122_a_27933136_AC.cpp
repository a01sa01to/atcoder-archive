/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc122/submissions/27933136
 * Submitted at: 2021-12-16 11:08:39
 * Problem URL: https://atcoder.jp/contests/arc122/tasks/arc122_a
 * Result: AC
 * Execution Time: 47 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef modint1000000007 mint;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  // dp[i][j] = i+1番目まで見たとき、j={0:前が+ 1:前が-}のときの選び方
  vector dp(n + 1, vector<mint>(2, 0));
  dp[0] = { 1, 0 };
  for (int i = 1; i <= n; ++i) {
    dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
    dp[i][1] = dp[i - 1][0];
  }
  mint ans = 0;
  rep(i, n) {
    mint tim = 0;
    if (i == 0) tim += (dp[n - 1][0] + dp[n - 1][1]);
    else
      tim += (dp[i][0] * dp[n - i][0]) - (dp[i][1] * dp[n - i][1]);
    ans += tim * a[i];
  }
  cout << ans.val() << endl;

  return 0;
}