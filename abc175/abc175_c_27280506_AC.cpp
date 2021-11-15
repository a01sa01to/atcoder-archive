/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc175/submissions/27280506
 * Submitted at: 2021-11-16 00:48:35
 * Problem URL: https://atcoder.jp/contests/abc175/tasks/abc175_c
 * Result: AC
 * Execution Time: 9 ms
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
  x = abs(x);
  // まっすぐ0に近づく
  ll tmp = min(x / d, k);
  x -= tmp * d;
  k -= tmp;
  // 往復
  if (k > 0 && k & 1) x -= d;
  cout << abs(x) << endl;
  return 0;
}