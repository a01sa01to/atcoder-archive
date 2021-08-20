/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc132/submissions/25176023
 * Submitted at: 2021-08-20 23:56:03
 * Problem URL: https://atcoder.jp/contests/abc132/tasks/abc132_c
 * Result: AC
 * Execution Time: 40 ms
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

ll1d diff;

int main() {
  cout << fixed << setprecision(15);
  ll n;
  cin >> n;
  diff.resize(n);
  rep(i, n) cin >> diff[i];
  sort(all(diff));
  cout << diff[n / 2] - diff[n / 2 - 1] << endl;
  return 0;
}