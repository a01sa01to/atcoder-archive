/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954626
 * Submitted at: 2022-04-14 09:39:31
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_p
 * Result: WA
 * Execution Time: 52 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int GCD(int x, int y) {
  if (y == 0) return x;
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