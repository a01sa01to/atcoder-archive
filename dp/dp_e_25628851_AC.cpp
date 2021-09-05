/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/25628851
 * Submitted at: 2021-09-05 16:20:18
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_e
 * Result: AC
 * Execution Time: 86 ms
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

  const ll INF = 1e13;

  // dp[i][j] = i以下番目のものを価値jにするようにしたときの、品物の重さの最小値
  ll2d dp(n, ll1d(1e5 + 1, INF));
  rep(i, n) {
    ll we, v;
    cin >> we >> v;
    if (i == 0) {
      dp[0][v] = we;
    }
    rep(j, 1e5 + 1) {
      if (j == 0) {
        dp[i][0] = 0;
      }
      else if (j >= v && i != 0) {
        dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - v] + we);
      }
      else if (i != 0) {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  ll ans = -1;
  rep(i, 1e5 + 1) {
    if (dp[n - 1][i] <= w) {
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}