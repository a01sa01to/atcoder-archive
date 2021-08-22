/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc153/submissions/25283300
 * Submitted at: 2021-08-23 00:43:36
 * Problem URL: https://atcoder.jp/contests/abc153/tasks/abc153_d
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

ll dfs(ll x) {
  if (x == 1) return 1;
  return 1 + 2 * dfs(x / 2);
}

int main() {
  cout << fixed << setprecision(15);
  ll h;
  cin >> h;
  cout << dfs(h) << endl;
  return 0;
}