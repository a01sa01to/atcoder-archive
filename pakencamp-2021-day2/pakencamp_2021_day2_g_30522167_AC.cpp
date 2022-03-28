/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day2/submissions/30522167
 * Submitted at: 2022-03-28 11:15:07
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day2/tasks/pakencamp_2021_day2_g
 * Result: AC
 * Execution Time: 18 ms
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
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  vector a(n - 1, vector<int>(n));
  rep(i, n - 1) rep(j, n) {
    cin >> a[i][j];
  }
  vector dp(n, vector<int>(1 << n, -1));
  dp[0][1] = 0;
  rep(d, n - 1) {
    Debug(dp[d]);
    dp[d + 1] = dp[d];
    rep(b, 1 << n) {
      if (dp[d][b] == -1) continue;
      int cnt = 0;
      rep(i, n) if (b & (1 << i)) cnt++;
      if (cnt != d + 1) continue;
      rep(i, n) {
        if (b & (1 << i)) {
          for (int j : Graph[i]) {
            if (b & (1 << j)) continue;
            int nxtBit = b | (1 << j);
            dp[d + 1][nxtBit] = max(dp[d + 1][nxtBit], dp[d][b] + a[d][j]);
          }
        }
      }
    }
  }
  Debug(dp.back());
  cout << *max_element(dp.back().begin(), dp.back().end()) << endl;
  return 0;
}