/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29169604
 * Submitted at: 2022-02-09 00:24:35
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ap
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

typedef modint1000000007 mint;

int main() {
  int k;
  cin >> k;
  if (k % 9 != 0) cout << 0 << endl;
  else {
    // dp[i] = 桁和がiとなる場合数
    vector<mint> dp(k + 1, 0);
    dp[0] = 1;
    rep(i, k + 1) {
      rep(j, min(i, 9)) dp[i] += dp[i - j - 1];
    }
    cout << dp[k].val() << endl;
  }
  return 0;
}