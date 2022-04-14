/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954970
 * Submitted at: 2022-04-14 10:13:20
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_v
 * Result: TLE
 * Execution Time: 1141 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  constexpr int Upper = 100000;
  vector dp(n + 1, vector<vector<ll>>(Upper + 1, vector<ll>(3, 0)));
  dp[0][0][0] = 1;
  rep(i, n) {
    dp[i + 1] = dp[i];
    rep(j, Upper + 1) {
      if (j + a[i] <= Upper) {
        rep(k, 2) {
          dp[i + 1][j + a[i]][k + 1] += dp[i][j][k];
        }
      }
    }
  }
  cout << dp[n][Upper][2] << endl;
  return 0;
}