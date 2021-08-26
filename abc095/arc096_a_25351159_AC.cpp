/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc095/submissions/25351159
 * Submitted at: 2021-08-26 23:00:04
 * Problem URL: https://atcoder.jp/contests/abc095/tasks/arc096_a
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
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  int ans = 0;
  if (a + b >= 2 * c) {
    ans += 2 * c * min(x, y);
  }
  else {
    ans += a * min(x, y) + b * min(x, y);
  }
  int del = x - y;
  if (del < 0) {
    // yがおおい
    if (b >= 2 * c) {
      ans += 2 * c * abs(del);
    }
    else {
      ans += b * abs(del);
    }
  }
  else {
    if (a >= 2 * c) {
      ans += 2 * c * abs(del);
    }
    else {
      ans += a * abs(del);
    }
  }
  cout << ans << endl;
  return 0;
}