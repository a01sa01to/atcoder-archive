/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/31937906
 * Submitted at: 2022-05-25 00:06:28
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_d
 * Result: AC
 * Execution Time: 36 ms
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

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  rep(i, n) cin >> t[i];

  vector dp(n + 1, vector<bool>(1e5 + 1, false));
  dp[0][0] = true;
  rep(i, n) rep(j, 1e5 + 1) {
    if (dp[i][j]) {
      dp[i + 1][j] = true;
      dp[i + 1][j + t[i]] = true;
    }
  }
  int sum = accumulate(t.begin(), t.end(), 0);
  int ans = 1e9;
  rep(i, 1e5 + 1) {
    if (dp[n][i]) ans = min(ans, max(i, sum - i));
  }
  cout << ans << endl;
  return 0;
}