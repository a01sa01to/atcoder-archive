/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc227/submissions/27246764
 * Submitted at: 2021-11-14 09:30:04
 * Problem URL: https://atcoder.jp/contests/abc227/tasks/abc227_c
 * Result: AC
 * Execution Time: 266 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll n;
  cin >> n;
  ll ans = 0;
  for (ll a = 1; a * a * a <= n; a++) {
    for (ll b = a; a * b * b <= n; b++) {
      // cout << "[DEB] " << a << " " << b << " " << n / (a * b) << endl;
      ans += n / (a * b) - b + 1;
    }
  }
  cout << ans << endl;
  return 0;
}