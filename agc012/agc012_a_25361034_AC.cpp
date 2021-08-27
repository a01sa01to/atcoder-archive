/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc012/submissions/25361034
 * Submitted at: 2021-08-27 16:30:49
 * Problem URL: https://atcoder.jp/contests/agc012/tasks/agc012_a
 * Result: AC
 * Execution Time: 99 ms
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
  int n;
  cin >> n;
  ll1d a(3 * n);
  rep(i, 3 * n) cin >> a[i];
  sort(all(a), greater<ll>());
  ll ans = 0;
  rep(i, n) {
    ans += a[2 * i + 1];
  }
  cout << ans << endl;
  return 0;
}