/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc182/submissions/27734944
 * Submitted at: 2021-12-06 16:27:48
 * Problem URL: https://atcoder.jp/contests/abc182/tasks/abc182_d
 * Result: AC
 * Execution Time: 71 ms
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
  vector<ll> sum(n + 1, 0);
  // dp[i] = i番目までの最大値
  vector<ll> dp(n + 1, 0);
  rep(i, n) {
    ll a;
    cin >> a;
    sum[i + 1] = sum[i] + a;
    dp[i + 1] = max(dp[i], sum[i] + a);
  }
  ll ans = 0, now = 0;
  rep(i, n + 1) {
    ans = max(ans, now + dp[i]);
    now += sum[i];
  }
  cout << ans << endl;
  return 0;
}