/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/25627387
 * Submitted at: 2021-09-05 15:21:12
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_a
 * Result: AC
 * Execution Time: 31 ms
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
  int n, INF = 1e9;
  cin >> n;
  ll1d h(n);
  rep(i, n) cin >> h[i];
  ll1d dp(n, INF);  // dp[i]: 足場iにたどりつくまでに支払うコストの最小値
  dp[0] = 0;
  rep(i, n) {
    if (i == 0) continue;
    if (i == 1) {
      dp[1] = abs(h[0] - h[1]);
    }
    else {
      dp[i] = min(abs(h[i] - h[i - 2]) + dp[i - 2], abs(h[i] - h[i - 1]) + dp[i - 1]);
    }
  }
  cout << dp[n - 1] << endl;
  return 0;
}