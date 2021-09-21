/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/26022466
 * Submitted at: 2021-09-21 11:53:51
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_i
 * Result: AC
 * Execution Time: 144 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;

  // dp[i][j] = i枚が表、j枚が裏
  vector<vector<long double>> dp(n + 1, vector<long double>(n + 1, 0));

  rep(i, n) {
    long double p;
    cin >> p;
    if (i == 0) {
      dp[0][1] = 1 - p;
      dp[1][0] = p;
      continue;
    }
    rep(j, i + 1) {
      // 表
      dp[j + 1][i - j] += dp[j][i - j] * p;
      // 裏
      dp[j][i - j + 1] += dp[j][i - j] * (1 - p);
      // printf("[DEB_表] %lld %lld | dp: %LF\n", j + 1, i - j, dp[j + 1][i - j]);
      // printf("[DEB_裏] %lld %lld | dp: %LF\n", j, i - j + 1, dp[j][i - j + 1]);
    }
  }
  long double ans = 0;
  rep(i, n + 1) {
    if (i > n - i) {
      ans += dp[i][n - i];
      // printf("[DEB] %lld %lld | dp: %Lf\n", i, n - i, dp[i][n - i]);
    }
  }
  cout << ans << endl;
  return 0;
}