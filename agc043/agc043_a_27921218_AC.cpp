/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc043/submissions/27921218
 * Submitted at: 2021-12-15 14:41:59
 * Problem URL: https://atcoder.jp/contests/agc043/tasks/agc043_a
 * Result: AC
 * Execution Time: 18 ms
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
  int h, w;
  cin >> h >> w;
  vector Board(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Board[i][j];

  // dp[i][j] = i,j からの最小
  vector dp(h, vector<int>(w, 1e9));

  if (Board[0][0] == '#') dp[0][0] = 1;
  else
    dp[0][0] = 0;
  rep(i, h) rep(j, w) {
    if (i > 0) {
      if (Board[i - 1][j] == '.' && Board[i][j] == '#') dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
      else
        dp[i][j] = min(dp[i][j], dp[i - 1][j]);
    }
    if (j > 0) {
      if (Board[i][j - 1] == '.' && Board[i][j] == '#') dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
      else
        dp[i][j] = min(dp[i][j], dp[i][j - 1]);
    }
  }
  cout << dp[h - 1][w - 1] << endl;
  return 0;
}