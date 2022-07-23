/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33462944
 * Submitted at: 2022-07-23 21:51:02
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_d
 * Result: AC
 * Execution Time: 177 ms
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
  int n, m;
  cin >> n >> m;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];
  vector<ll> bonus(n + 2, 0);
  rep(i, m) {
    int c, y;
    cin >> c >> y;
    bonus[c] = y;
  }
  vector dp(n + 1, vector<ll>(n + 2, -1));
  dp[0][0] = 0;
  rep(i, n) {
    rep(j, n + 2) {
      int idx = min(j + 1, n + 1);
      if (dp[i][j] == -1) continue;
      dp[i + 1][idx] = max(dp[i + 1][idx], dp[i][j] + x[i] + bonus[idx]);
      dp[i + 1][0] = max(dp[i + 1][0], dp[i][j]);
    }
    Debug(dp[i + 1]);
  }
  cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
  return 0;
}