/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc087/submissions/25318194
 * Submitted at: 2021-08-24 23:20:01
 * Problem URL: https://atcoder.jp/contests/abc087/tasks/abc087_b
 * Result: AC
 * Execution Time: 19 ms
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
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  rep(i, a + 1) rep(j, b + 1) rep(k, c + 1) {
    if (500 * i + 100 * j + 50 * k == x) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}