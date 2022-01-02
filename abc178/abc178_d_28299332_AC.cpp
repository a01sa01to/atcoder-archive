/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc178/submissions/28299332
 * Submitted at: 2022-01-03 00:57:01
 * Problem URL: https://atcoder.jp/contests/abc178/tasks/abc178_d
 * Result: AC
 * Execution Time: 7 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef modint1000000007 mint;

int main() {
  int s;
  cin >> s;

  // dp[i] = 総和がsであるような数列の個数
  vector<mint> dp(max(5, s + 1), 0);

  dp[0] = dp[1] = dp[2] = 0;
  dp[3] = 1;
  for (int i = 4; i <= s; ++i) {
    dp[i] = 1;
    for (int j = 3; j < i; ++j) dp[i] += dp[i - j];
  }
  cout << dp[s].val() << endl;
  return 0;
}