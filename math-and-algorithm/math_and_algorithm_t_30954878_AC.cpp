/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954878
 * Submitted at: 2022-04-14 10:04:02
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_t
 * Result: AC
 * Execution Time: 25 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector dp(n + 1, vector<vector<ll>>(1001, vector<ll>(6, 0)));
  dp[0][0][0] = 1;
  rep(i, n) {
    dp[i + 1] = dp[i];
    rep(j, 1001) {
      if (j + a[i] <= 1000) {
        rep(k, 5) {
          dp[i + 1][j + a[i]][k + 1] += dp[i][j][k];
        }
      }
    }
  }
  cout << dp[n][1000][5] << endl;
  return 0;
}