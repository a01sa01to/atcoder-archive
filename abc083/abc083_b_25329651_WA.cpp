/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc083/submissions/25329651
 * Submitted at: 2021-08-25 18:37:26
 * Problem URL: https://atcoder.jp/contests/abc083/tasks/abc083_b
 * Result: WA
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
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int sum = (i / 1000 % 10) + (i / 100 % 10) + (i / 10 % 10) + (i % 10);
    if (a <= sum && sum <= b) {
      ans += i;
    }
  }
  cout << ans << endl;
  return 0;
}