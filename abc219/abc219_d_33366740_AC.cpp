/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/33366740
 * Submitted at: 2022-07-20 00:37:31
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_d
 * Result: AC
 * Execution Time: 208 ms
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
typedef vector<ll2d> ll3d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll n, x, y;
  cin >> n >> x >> y;
  const int INF = 100000;
  // dp[i][j][k] = i個目まで買ったときにx個たこ焼きy個たい焼きgetした時の最小弁当
  ll3d dp(n + 1, ll2d(x + 1, ll1d(y + 1, INF)));
  dp[0][0][0] = 0;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    rep(j, x+1) rep(k, y+1) {
      // 買わない
      dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
      // 買う
      dp[i + 1][min(j + a, x)][min(k + b, y)] = min(dp[i + 1][min(j + a, x)][min(k + b, y)], dp[i][j][k] + 1);
    }
  }
  if (dp[n][x][y] == INF) {
    cout << -1 << endl;
  }
  else {
    cout << dp[n][x][y] << endl;
  }
  return 0;
}