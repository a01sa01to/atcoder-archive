/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc133/submissions/25330031
 * Submitted at: 2021-08-25 19:03:25
 * Problem URL: https://atcoder.jp/contests/abc133/tasks/abc133_b
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

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, d;
  cin >> n >> d;
  ll2d x(n, ll1d(d));
  rep(i, n) rep(j, d) cin >> x[i][j];
  int ans = 0;
  rep(i, n) rep(j, n) {
    if (i >= j) continue;
    double dist = 0;
    rep(k, d) {
      dist += pow((x[i][k] - x[j][k]), 2);
    }
    if (sqrt(dist) == floor(sqrt(dist))) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}