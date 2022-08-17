/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc142/submissions/34107253
 * Submitted at: 2022-08-17 18:43:33
 * Problem URL: https://atcoder.jp/contests/abc142/tasks/abc142_e
 * Result: AC
 * Execution Time: 43 ms
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
  vector<int> cost(m);
  vector<vector<int>> c(0);
  rep(i, m) {
    int tmp;
    cin >> cost[i] >> tmp;
    vector<int> t(0);
    rep(_, tmp) {
      int x;
      cin >> x;
      t.push_back(--x);
    }
    c.push_back(t);
  }
  const int INF = 1e9;
  // bit dp
  vector dp(m + 1, vector<int>(1 << n, INF));
  dp[0][0] = 0;
  rep(i, m) {
    dp[i + 1] = dp[i];
    rep(j, 1 << n) {
      if (dp[i][j] == INF) continue;
      int bit = j;
      rep(k, c[i].size()) bit |= (1 << c[i][k]);
      dp[i + 1][bit] = min(dp[i + 1][bit], dp[i][j] + cost[i]);
    }
  }
  int ans = dp[m][(1 << n) - 1];
  cout << (ans == INF ? -1 : ans) << endl;
  return 0;
}