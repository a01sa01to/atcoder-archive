/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc150/submissions/25282759
 * Submitted at: 2021-08-23 00:12:33
 * Problem URL: https://atcoder.jp/contests/abc150/tasks/abc150_c
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
  vector<int> p(n), q(n);
  int x = 0, y = 0;
  rep(i, n) cin >> p[i];
  rep(i, n) cin >> q[i];
  do {
    x++;
  } while (next_permutation(all(p)));
  do {
    y++;
  } while (next_permutation(all(q)));
  cout << abs(x - y) << endl;
  return 0;
}