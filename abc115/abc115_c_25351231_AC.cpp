/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc115/submissions/25351231
 * Submitted at: 2021-08-26 23:03:47
 * Problem URL: https://atcoder.jp/contests/abc115/tasks/abc115_c
 * Result: AC
 * Execution Time: 47 ms
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
  int n, k;
  cin >> n >> k;
  ll1d h(n);
  rep(i, n) cin >> h[i];
  sort(all(h));
  ll ans = 1e10;
  rep(i, n - k + 1) {
    ans = min(ans, h[i + k - 1] - h[i]);
  }
  cout << ans << endl;
  return 0;
}