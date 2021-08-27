/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc093/submissions/25363468
 * Submitted at: 2021-08-27 19:15:14
 * Problem URL: https://atcoder.jp/contests/abc093/tasks/arc094_a
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
  ll1d v(3);
  rep(i, 3) cin >> v[i];
  bool a = v[0] % 2 == v[1] % 2;
  bool b = v[1] % 2 == v[2] % 2;
  bool c = v[2] % 2 == v[0] % 2;
  int ans = 0;
  if (a && b) {}
  else if (a) {
    v[0]++;
    v[1]++;
    ans++;
  }
  else if (b) {
    v[1]++;
    v[2]++;
    ans++;
  }
  else if (c) {
    v[2]++;
    v[0]++;
    ans++;
  }
  sort(all(v));
  ans += (v[2] - v[0]) / 2 + (v[2] - v[1]) / 2;
  cout << ans << endl;
  return 0;
}