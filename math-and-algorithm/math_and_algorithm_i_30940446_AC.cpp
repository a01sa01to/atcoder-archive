/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30940446
 * Submitted at: 2022-04-13 12:31:29
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_i
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, s;
  cin >> n >> s;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector dp(n + 1, vector<bool>(s + 1, false));
  dp[0][0] = true;
  rep(i, n) {
    dp[i + 1] = dp[i];
    rep(j, s + 1) {
      if (dp[i][j] && j + a[i] <= s)
        dp[i + 1][j + a[i]] = true;
    }
  }
  puts(dp[n][s] ? "Yes" : "No");
  return 0;
}