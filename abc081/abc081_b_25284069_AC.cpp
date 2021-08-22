/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc081/submissions/25284069
 * Submitted at: 2021-08-23 01:55:48
 * Problem URL: https://atcoder.jp/contests/abc081/tasks/abc081_b
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
  int n;
  cin >> n;
  int ans = 1e8;
  rep(i, n) {
    ll a;
    cin >> a;
    int tmp = 0;
    while (a % 2 == 0) {
      a /= 2;
      tmp++;
    }
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}