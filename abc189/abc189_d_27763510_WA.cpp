/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc189/submissions/27763510
 * Submitted at: 2021-12-08 16:08:41
 * Problem URL: https://atcoder.jp/contests/abc189/tasks/abc189_d
 * Result: WA
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  int n;
  cin >> n;
  // dp[i][j] = i番目まで計算したときに{j=1:True, j=0:False}になる個数
  vector dp(n + 1, vector<int>(2, 0));
  dp[0][0] = 1;
  dp[0][1] = 1;
  rep(i, n) {
    string s;
    cin >> s;
    if (s == "AND") {
      dp[i + 1][0] = 2 * dp[i][0] + dp[i][1];
      dp[i + 1][1] = dp[i][1];
    }
    else {
      dp[i + 1][0] = dp[i][0];
      dp[i + 1][1] = 2 * dp[i][1] + dp[i][0];
    }
  }
  cout << dp[n][1] << endl;
  return 0;
}