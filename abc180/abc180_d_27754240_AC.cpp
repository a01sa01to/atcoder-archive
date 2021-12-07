/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc180/submissions/27754240
 * Submitted at: 2021-12-07 22:18:01
 * Problem URL: https://atcoder.jp/contests/abc180/tasks/abc180_d
 * Result: AC
 * Execution Time: 5 ms
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
  ll x, y, a, b;
  cin >> x >> y >> a >> b;
  ll ans = 0;
  while (a * x > 0 && a * x < x + b && a * x < y) {
    ++ans;
    x *= a;
  }
  ans += (y - x - 1) / b;
  cout << ans << endl;
  return 0;
}