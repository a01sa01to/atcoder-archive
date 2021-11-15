/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc175/submissions/27280406
 * Submitted at: 2021-11-16 00:41:03
 * Problem URL: https://atcoder.jp/contests/abc175/tasks/abc175_c
 * Result: WA
 * Execution Time: 7 ms
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
#define rep(i, n) for (ll i = 0; i < n; i++)

int main() {
  ll x, k, d;
  cin >> x >> k >> d;
  ll ans = abs(x);
  // まっすぐ0に近づく
  ans -= min(x / d, k) * d;
  k -= min(x / d, k);
  // 往復
  if (k > 0 && k & 1) ans -= d;
  cout << abs(ans) << endl;
  return 0;
}