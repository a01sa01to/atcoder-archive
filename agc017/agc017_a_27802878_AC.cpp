/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc017/submissions/27802878
 * Submitted at: 2021-12-11 10:55:14
 * Problem URL: https://atcoder.jp/contests/agc017/tasks/agc017_a
 * Result: AC
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, p;
  cin >> n >> p;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  // dp[i][j] = i番目まで食べた時、余りがjの場合の数
  vector dp(n + 1, vector<ll>(2, 0));
  dp[0][0] = 1;
  rep(i, n) {
    // 食べる
    if (a[i] % 2 == 1) {
      dp[i + 1][0] += dp[i][1];
      dp[i + 1][1] += dp[i][0];
    }
    else {
      dp[i + 1][0] += dp[i][0];
      dp[i + 1][1] += dp[i][1];
    }

    // 食べない
    dp[i + 1][0] += dp[i][0];
    dp[i + 1][1] += dp[i][1];
  }
  cout << dp[n][p] << endl;
  return 0;
}