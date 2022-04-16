/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31015478
 * Submitted at: 2022-04-16 21:11:36
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_c
 * Result: AC
 * Execution Time: 31 ms
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
typedef modint998244353 mint;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector dp(n + 1, vector<mint>(k + 1, 0));
  dp[0][0] = 1;
  rep(i, n) {
    for (int j = 1; j <= m; ++j) {
      rep(l, k + 1) {
        if (j + l <= k) dp[i + 1][j + l] += dp[i][l];
      }
    }
  }
  mint ans = 0;
  rep(i, k) ans += dp[n][i + 1];
  cout << ans.val() << endl;
  return 0;
}