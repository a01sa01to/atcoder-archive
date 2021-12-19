/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/28005507
 * Submitted at: 2021-12-19 21:44:20
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_e
 * Result: AC
 * Execution Time: 90 ms
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
typedef modint998244353 mint;

int main() {
  ll h, w, k, x1, x2, y1, y2;
  cin >> h >> w >> k >> x1 >> y1 >> x2 >> y2;

  // dp[i][j] = i回の操作の後、置かれているようにする方法
  //  j=0: 同じ行or列にない, j=1: 同じ行, j=2: 同じ列, j=3: 同じマス
  vector dp(k + 1, vector<mint>(4, 0));
  dp[0][0] = (x1 != x2) && (y1 != y2);
  dp[0][1] = (x1 == x2) && (y1 != y2);
  dp[0][2] = (x1 != x2) && (y1 == y2);
  dp[0][3] = (x1 == x2) && (y1 == y2);
  rep(i, k) {
    dp[i + 1][0] = dp[i][0] * ((h - 2) + (w - 2)) + dp[i][1] * (h - 1) + dp[i][2] * (w - 1);
    dp[i + 1][1] = dp[i][0] + dp[i][1] * (w - 2) + dp[i][3] * (w - 1);
    dp[i + 1][2] = dp[i][0] + dp[i][2] * (h - 2) + dp[i][3] * (h - 1);
    dp[i + 1][3] = dp[i][1] + dp[i][2];
  }
  cout << dp[k][3].val() << endl;
  return 0;
}