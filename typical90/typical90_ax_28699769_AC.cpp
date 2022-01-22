/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28699769
 * Submitted at: 2022-01-23 00:21:47
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ax
 * Result: AC
 * Execution Time: 6 ms
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
  int n, l;
  cin >> n >> l;
  vector<mint> dp(n + 1, 0);
  dp[0] = 1;
  rep(i, n) {
    dp[i + 1] += dp[i];
    if (i + l <= n) dp[i + l] += dp[i];
  }
  cout << dp[n].val() << endl;
  return 0;
}