/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc079/submissions/25329383
 * Submitted at: 2021-08-25 18:19:22
 * Problem URL: https://atcoder.jp/contests/abc079/tasks/abc079_b
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
  ll1d l = { 2, 1 };
  int n;
  cin >> n;
  rep(i, n - 1) {
    l.push_back(l[i + 1] + l[i]);
  }
  cout << l[n] << endl;
  return 0;
}