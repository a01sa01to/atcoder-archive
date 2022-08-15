/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc142/submissions/34073261
 * Submitted at: 2022-08-16 00:06:00
 * Problem URL: https://atcoder.jp/contests/abc142/tasks/abc142_e
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> c(0);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    c.push_back({ a });
    rep(_, b) {
      int x;
      cin >> x;
      c.back().push_back(--x);
    }
  }
  Debug(c);
  constexpr int INF = 1e9;
  vector dp(m + 1, vector<int>(1 << n, INF));
  dp[0][0] = 0;
  rep(i, m) {
    dp[i + 1] = dp[i];
    rep(j, 1 << n) {
      if (dp[i][j] == INF) continue;
      int b = j;
      rep(k, c[i].size()) {
        if (k == 0) continue;
        b |= (1 << c[i][k]);
      }
      dp[i + 1][b] = min(dp[i + 1][b], dp[i][j] + c[i][0]);
    }
  }
  Debug(dp);
  cout << (dp[m][(1 << n) - 1] == INF ? -1 : dp[m][(1 << n) - 1]) << endl;
  return 0;
}