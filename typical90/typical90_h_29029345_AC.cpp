/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29029345
 * Submitted at: 2022-02-04 00:03:46
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_h
 * Result: AC
 * Execution Time: 26 ms
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
  string s;
  cin >> n >> s;
  vector dp(n + 1, vector<mint>(8, 0));
  const string atc = "atcoder";
  dp[0][0] = 1;
  rep(i, n) {
    dp[i + 1] = dp[i];
    rep(j, 7) {
      if (s[i] == atc[j]) dp[i + 1][j + 1] += dp[i][j];
    }
  }
  cout << dp[n][7].val() << endl;
  return 0;
}