/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc121/submissions/25174751
 * Submitted at: 2021-08-20 22:59:57
 * Problem URL: https://atcoder.jp/contests/abc121/tasks/abc121_b
 * Result: AC
 * Execution Time: 10 ms
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
  int n, m, c;
  cin >> n >> m >> c;
  ll1d b(m);
  rep(i, m) cin >> b[i];
  int ans = 0;
  rep(i, n) {
    int sum = c;
    rep(i, m) {
      int a;
      cin >> a;
      sum += a * b[i];
    }
    if (sum > 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}