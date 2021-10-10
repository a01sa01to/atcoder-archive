/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc222/submissions/26494492
 * Submitted at: 2021-10-10 22:27:32
 * Problem URL: https://atcoder.jp/contests/abc222/tasks/abc222_d
 * Result: AC
 * Execution Time: 268 ms
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
  vector dp(n + 1, fenwick_tree<mint>(INF));
  dp[0].add(0, 1);
  rep(i, n) {
    for (int j = a[i]; j <= b[i]; j++) {
      dp[i + 1].add(j, dp[i].sum(0, j + 1));
    }
  }
  cout << dp[n].sum(0, INF).val() << endl;
  return 0;
}