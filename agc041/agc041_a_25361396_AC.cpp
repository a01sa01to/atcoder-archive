/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc041/submissions/25361396
 * Submitted at: 2021-08-27 16:51:36
 * Problem URL: https://atcoder.jp/contests/agc041/tasks/agc041_a
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
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll n, a, b;
  cin >> n >> a >> b;
  if ((a + b) % 2 == 1) {
    cout << min(n - b, a - 1) + 1 + (b - a - 1) / 2 << endl;
  }
  else {
    cout << (b - a) / 2 << endl;
  }
  return 0;
}