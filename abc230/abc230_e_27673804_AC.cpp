/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/27673804
 * Submitted at: 2021-12-03 23:09:54
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_e
 * Result: AC
 * Execution Time: 23 ms
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
  ll n;
  cin >> n;
  ll k = sqrt(n);
  ll ans = 0;
  // https://www.geeksforgeeks.org/summation-of-floor-of-harmonic-progression/
  for (ll i = 1; i <= k; ++i) ans += n / i;
  ans *= 2;
  ans -= k * k;
  cout << ans << endl;
  return 0;
}