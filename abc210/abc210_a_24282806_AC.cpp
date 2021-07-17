/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc210/submissions/24282806
 * Submitted at: 2021-07-17 21:04:17
 * Problem URL: https://atcoder.jp/contests/abc210/tasks/abc210_a
 * Result: AC
 * Execution Time: 11 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, a, x, y;
  cin >> n >> a >> x >> y;
  int ans = x * n;
  if (n > a) { ans -= (x - y) * (n - a); }
  cout << ans << endl;
  return 0;
}