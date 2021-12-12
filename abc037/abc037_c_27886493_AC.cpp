/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc037/submissions/27886493
 * Submitted at: 2021-12-13 00:45:17
 * Problem URL: https://atcoder.jp/contests/abc037/tasks/abc037_c
 * Result: AC
 * Execution Time: 40 ms
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

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> sum(n + 1, 0);
  rep(i, n) {
    ll a;
    cin >> a;
    sum[i + 1] = sum[i] + a;
  }
  ll ans = 0;
  rep(i, n - k + 1) ans += sum[i + k] - sum[i];
  cout << ans << endl;
  return 0;
}