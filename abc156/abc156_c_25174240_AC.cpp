/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc156/submissions/25174240
 * Submitted at: 2021-08-20 22:37:37
 * Problem URL: https://atcoder.jp/contests/abc156/tasks/abc156_c
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
  ll1d x(n);
  rep(i, n) cin >> x[i];
  int ans = 1e6;
  rep(p, 100) {
    int sum = 0;
    rep(i, n) {
      sum += pow((x[i] - p), 2);
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
  return 0;
}