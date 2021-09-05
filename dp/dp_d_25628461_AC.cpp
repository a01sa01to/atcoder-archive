/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/25628461
 * Submitted at: 2021-09-05 16:02:46
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_d
 * Result: AC
 * Execution Time: 76 ms
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
  ll n, w;
  cin >> n >> w;

  // dp[i][j] = i以下番目のものを重さj以下にするようにしたときの、価値の最大値
  ll2d dp(n, ll1d(w + 1, 0));

  rep(i, n) {
    ll we, v;
    cin >> we >> v;
    rep(j, w + 1) {
      if (i == 0 && j >= we) {
        dp[i][j] = v;
      }
      else if (j >= we) {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - we] + v);
      }
      else if (i != 0) {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[n - 1][w] << endl;
  return 0;
}