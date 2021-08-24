/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc141/submissions/25318459
 * Submitted at: 2021-08-24 23:32:28
 * Problem URL: https://atcoder.jp/contests/abc141/tasks/abc141_c
 * Result: AC
 * Execution Time: 176 ms
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
  ll n, k, q;
  cin >> n >> k >> q;
  ll1d got(n, 0);
  rep(i, q) {
    ll a;
    cin >> a;
    got[--a]++;
  }
  rep(i, n) {
    cout << ((k - q + got[i] > 0) ? "Yes" : "No") << endl;
  }
  return 0;
}