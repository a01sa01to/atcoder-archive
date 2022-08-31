/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/34481015
 * Submitted at: 2022-09-01 00:06:45
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_e
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<double> dp(n + 1, 0);
  rep(i, n) {
    dp[i + 1] = 0;
    rep(t, 6) {
      dp[i + 1] += max(1.0 + t, dp[i]) / 6;
    }
  }
  cout << fixed << setprecision(10) << dp[n] << endl;
  return 0;
}