/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36051460
 * Submitted at: 2022-10-29 21:24:59
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_e
 * Result: AC
 * Execution Time: 1049 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using mint = modint998244353;
void operator<<(ostream &os, mint x) { os << x.val(); }

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  // dp[i][j] = iマス目にいる j回目
  vector dp(n + 1, vector<mint>(k + 1, 0));
  dp[0][0] = 1;
  rep(j, k) rep(i, n) {
    for (int l = 1; l <= m; l++) {
      if (i + l + 1 > n) {
        int ov = i + l - n;
        dp[n - ov][j + 1] += dp[i][j] / m;
      }
      else {
        dp[i + l][j + 1] += dp[i][j] / m;
      }
    }
  }
  Debug(dp);
  cout << accumulate(dp[n].begin(), dp[n].end(), mint(0)).val() << endl;
  return 0;
}