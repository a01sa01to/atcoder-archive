/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954653
 * Submitted at: 2022-04-14 09:41:52
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_q
 * Result: AC
 * Execution Time: 34 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;

ll GCD(ll x, ll y) {
  if (y == 0LL) return x;
  return GCD(y, x % y);
}

ll LCM(ll x, ll y) {
  return x / GCD(x, y) * y;
}

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll ans = a[0];
  rep(i, n) ans = LCM(ans, a[i]);

  cout << ans << endl;
  return 0;
}