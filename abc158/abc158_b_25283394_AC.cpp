/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc158/submissions/25283394
 * Submitted at: 2021-08-23 00:50:55
 * Problem URL: https://atcoder.jp/contests/abc158/tasks/abc158_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = 0, now = 0;
  ans += (n / (a + b)) * a;
  ans += min(a, n % (a + b));
  cout << ans << endl;
  return 0;
}