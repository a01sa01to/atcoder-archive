/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc068/submissions/25175485
 * Submitted at: 2021-08-20 23:30:37
 * Problem URL: https://atcoder.jp/contests/abc068/tasks/abc068_b
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
  int n;
  cin >> n;
  int ans = pow(2, floor(log2(n)));
  cout << ans << endl;
  return 0;
}