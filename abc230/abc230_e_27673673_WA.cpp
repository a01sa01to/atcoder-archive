/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/27673673
 * Submitted at: 2021-12-03 23:07:03
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_e
 * Result: WA
 * Execution Time: 2205 ms
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

ll sqrt(ll x) {
  ll l = 0, r = x;
  while (l + 1 < r) {
    ll m = (l + r) / 2;
    if (m * m <= x) l = m;
    else
      r = m;
  }
  return l;
}

int main() {
  ll n;
  cin >> n;
  ll k = sqrt(n);
  ll ans = 0;
  // https://www.geeksforgeeks.org/summation-of-floor-of-harmonic-progression/
  for (ll i = 1; i <= k; ++i) ans += 2 * (n / i);
  ans -= k * k;
  cout << ans << endl;
  return 0;
}