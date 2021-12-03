/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/27654619
 * Submitted at: 2021-12-03 21:17:52
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_c
 * Result: AC
 * Execution Time: 10 ms
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
  ll n, a, b, p, q, r, s;
  cin >> n >> a >> b >> p >> q >> r >> s;
  ll max1 = max(1 - a, 1 - b);
  ll max2 = max(1 - a, b - n);
  ll min1 = min(n - a, n - b);
  ll min2 = min(n - a, b - 1);
  for (ll i = p; i <= q; ++i) {
    for (ll j = r; j <= s; ++j) {
      bool chk = false;
      chk |= (a + max1 <= i && i <= a + min1) && (b + max1 <= j && j <= b + min1) && (i - a == j - b);
      chk |= (a + max2 <= i && i <= a + min2) && (b - min2 <= j && j <= b - max2) && (i - a == b - j);
      putchar(chk ? '#' : '.');
    }
    putchar('\n');
  }
  return 0;
}