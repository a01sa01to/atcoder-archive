/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/25627799
 * Submitted at: 2021-09-05 15:38:41
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_c
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
  ll n;
  cin >> n;

  // dp[i][j] = 前日jをしたとき、i日目の幸福度max
  ll2d dp(n, ll1d(3));

  rep(i, n) {
    ll1d v(3);
    cin >> v[0] >> v[1] >> v[2];
    if (i == 0) {
      dp[0] = v;
    }
    else {
      rep(j, 3) rep(k, 3) {
        if (j != k) {
          dp[i][j] = max(dp[i][j], dp[i - 1][k] + v[j]);
        }
      }
    }
  }
  cout << *max_element(all(dp[n - 1])) << endl;
  return 0;
}