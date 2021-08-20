/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc138/submissions/25176205
 * Submitted at: 2021-08-21 00:04:29
 * Problem URL: https://atcoder.jp/contests/abc138/tasks/abc138_c
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
  int n;
  cin >> n;
  ll1d v(n);
  rep(i, n) cin >> v[i];
  sort(all(v));
  double ans = v[0];
  rep(i, n - 1) {
    ans = (ans + v[i + 1]) / 2;
  }
  cout << ans << endl;
  return 0;
}