/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-final/submissions/32821033
 * Submitted at: 2022-06-29 00:16:33
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_e
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> r(n);
  rep(i, n) cin >> r[i];
  // dp[i][j] = i番目まで見る、j=0/1:つぎに上がるべきか下がるべきか
  vector dp(n, vector<int>(2, 0));
  rep(i, n) {
    dp[i][0] = dp[i][1] = 1;
    rep(j, i) {
      if (r[j] < r[i]) dp[i][0] = max(dp[i][0], dp[j][1] + 1);
      if (r[j] > r[i]) dp[i][1] = max(dp[i][1], dp[j][0] + 1);
    }
  }
  int ans = max(dp.back()[0], dp.back()[1]);
  cout << (ans < 3 ? 0 : ans) << endl;
  return 0;
}