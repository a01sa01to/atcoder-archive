/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954638
 * Submitted at: 2022-04-14 09:40:48
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_p
 * Result: AC
 * Execution Time: 47 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;

ll GCD(ll x, ll y) {
  if (y == 0LL) return x;
  return GCD(y, x % y);
}

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 0;
  rep(i, n) ans = GCD(ans, a[i]);

  cout << ans << endl;
  return 0;
}