/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/25175412
 * Submitted at: 2021-08-20 23:27:50
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_b
 * Result: AC
 * Execution Time: 5 ms
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
  ll1d a(n);
  rep(i, n) cin >> a[i];
  sort(all(a), greater<ll>());
  int alice = 0, bob = 0;
  rep(i, n) {
    if (i % 2) {
      bob += a[i];
    }
    else {
      alice += a[i];
    }
  }
  cout << alice - bob << endl;
  return 0;
}