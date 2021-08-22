/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc027/submissions/25282430
 * Submitted at: 2021-08-22 23:57:16
 * Problem URL: https://atcoder.jp/contests/agc027/tasks/agc027_a
 * Result: AC
 * Execution Time: 8 ms
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
  ll n, x;
  cin >> n >> x;
  ll1d a(n);
  rep(i, n) cin >> a[i];
  sort(all(a));
  ll ans = 0;
  rep(i, n) {
    if (a[i] <= x) {
      ans++;
      x -= a[i];
    }
    else {
      cout << ans << endl;
      return 0;
    }
  }
  if (x == 0) {
    cout << ans << endl;
  }
  else {
    cout << ans - 1 << endl;
  }
  return 0;
}