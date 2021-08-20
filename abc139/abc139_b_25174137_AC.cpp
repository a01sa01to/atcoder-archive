/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/25174137
 * Submitted at: 2021-08-20 22:33:18
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_b
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
  int a, b;
  cin >> a >> b;
  int ans = 0, now = 1;
  while (now < b) {
    ans++;
    now += a - 1;
  }
  cout << ans << endl;
  return 0;
}