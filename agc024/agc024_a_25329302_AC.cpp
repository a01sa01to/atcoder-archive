/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc024/submissions/25329302
 * Submitted at: 2021-08-25 18:14:00
 * Problem URL: https://atcoder.jp/contests/agc024/tasks/agc024_a
 * Result: AC
 * Execution Time: 7 ms
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
  ll a, b, c, k;
  cin >> a >> b >> c >> k;
  if (abs(a - b) >= 1e18) {
    cout << "Unfair" << endl;
  }
  else if (k % 2) {
    cout << b - a << endl;
  }
  else {
    cout << a - b << endl;
  }
  return 0;
}