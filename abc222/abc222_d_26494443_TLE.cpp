/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc222/submissions/26494443
 * Submitted at: 2021-10-10 22:25:36
 * Problem URL: https://atcoder.jp/contests/abc222/tasks/abc222_d
 * Result: TLE
 * Execution Time: 2210 ms
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

typedef modint998244353 mint;

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  ll1d a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  const int INF = 1e4;

  // dp[i][j] = i番目まで見たとき、c_i=jの場合の数
  vector dp(n + 1, vector<mint>(INF, 0));
  dp[0][0] = 1;
  rep(i, n) {
    for (int j = a[i]; j <= b[i]; j++) {
      for (int k = 0; k <= j; k++) {
        dp[i + 1][j] += dp[i][k];
      }
    }
  }
  mint ans = 0;
  rep(j, INF) ans += dp[n][j];
  cout << ans.val() << endl;
  return 0;
}