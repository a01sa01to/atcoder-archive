/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc161/submissions/25175928
 * Submitted at: 2021-08-20 23:51:47
 * Problem URL: https://atcoder.jp/contests/abc161/tasks/abc161_c
 * Result: AC
 * Execution Time: 9 ms
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
  ll n, k;
  cin >> n >> k;
  cout << min(n % k, -(n % k) + k) << endl;
  return 0;
}