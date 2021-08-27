/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc103/submissions/25362228
 * Submitted at: 2021-08-27 17:42:30
 * Problem URL: https://atcoder.jp/contests/abc103/tasks/abc103_c
 * Result: AC
 * Execution Time: 11 ms
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
  ll ans = 0;
  rep(i, n) {
    ll a;
    cin >> a;
    ans += a - 1;
  }
  cout << ans << endl;
  return 0;
}