/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/26151099
 * Submitted at: 2021-09-26 21:42:11
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_d
 * Result: AC
 * Execution Time: 36 ms
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
  ll1d a(n);
  rep(i, n) cin >> a[i];

  // dp[i][j] = i-1番目が終了したときに一番左がjである場合の数
  vector<vector<mint>> dp(n, vector<mint>(10, 0));

  dp[0][a[0]] = 1;

  rep(i, n) {
    if (i == 0) continue;
    rep(j, 10) {
      int pls = (j + a[i]) % 10;
      int tms = (j * a[i]) % 10;
      // 操作F
      dp[i][pls] += dp[i - 1][j];
      // 操作G
      dp[i][tms] += dp[i - 1][j];
    }
    // cout << "[DEB] " << i << ": {";
    // for (mint x : dp[i]) {
    //   cout << x.val() << " ";
    // }
    // cout << "}" << endl;
  }
  rep(i, 10) {
    cout << dp[n - 1][i].val() << endl;
  }
  return 0;
}