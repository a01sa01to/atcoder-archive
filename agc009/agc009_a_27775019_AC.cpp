/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc009/submissions/27775019
 * Submitted at: 2021-12-09 12:08:52
 * Problem URL: https://atcoder.jp/contests/agc009/tasks/agc009_a
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
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  ll ans = 0;
  for (ll i = n - 1; i >= 0; --i) {
    ll x = -((a[i] + ans) % b[i]);
    ans += (x < 0 ? b[i] + x : x);
  }
  cout << ans << endl;
  return 0;
}