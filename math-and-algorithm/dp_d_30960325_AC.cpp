/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30960325
 * Submitted at: 2022-04-14 16:42:22
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/dp_d
 * Result: AC
 * Execution Time: 79 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, w;
  cin >> n >> w;
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;

  vector dp(n + 1, vector<ll>(w + 1, -1));
  dp[0][0] = 0;
  rep(i, n) {
    dp[i + 1] = dp[i];
    rep(j, w + 1) {
      if (j + v[i].first <= w) {
        dp[i + 1][j + v[i].first] = max(dp[i + 1][j + v[i].first], dp[i][j] + v[i].second);
      }
    }
  }

  cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
  return 0;
}