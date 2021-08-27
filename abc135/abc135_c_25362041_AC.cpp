/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc135/submissions/25362041
 * Submitted at: 2021-08-27 17:30:33
 * Problem URL: https://atcoder.jp/contests/abc135/tasks/abc135_c
 * Result: AC
 * Execution Time: 69 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll n;
  cin >> n;
  ll1d a(n + 1), b(n);
  rep(i, n + 1) cin >> a[i];
  rep(i, n) cin >> b[i];
  ll ans = 0;
  rep(i, n) {
    ll sum = a[i] + a[i + 1];
    ans += min(sum, b[i]);
    a[i + 1] -= min(a[i + 1], max(b[i] - a[i], 0LL));
  }
  cout << ans << endl;
  return 0;
}