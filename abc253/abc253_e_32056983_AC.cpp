/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32056983
 * Submitted at: 2022-05-28 22:44:54
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_e
 * Result: AC
 * Execution Time: 214 ms
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
  vector dp(n, fenwick_tree<mint>(m));
  rep(j, m) dp[0].add(j, 1);
  rep(i, n - 1) rep(j, m) {
    // printf("[Debug] %d: Sum(%d, %d) = %d\n", j, 0, max(0, j - k), dp[i].sum(0, max(0, j - k + 1)).val());
    // printf("[Debug] %d: Sum(%d, %d) = %d\n", j, min(j + k, m - 1), m, dp[i].sum(min(j + k, m), m).val());
    if (k == 0)
      dp[i + 1].add(j, dp[i].sum(0, m));
    else
      dp[i + 1].add(j, dp[i].sum(0, max(0, j - k + 1)) + dp[i].sum(min(j + k, m), m));
    // printf("[Debug] dp[%d][%d] = %d\n", i + 1, j, dp[i + 1].sum(j, j + 1).val());
  }
  cout << dp[n - 1].sum(0, m).val() << endl;
  return 0;
}