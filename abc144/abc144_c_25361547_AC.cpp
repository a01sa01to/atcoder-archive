/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc144/submissions/25361547
 * Submitted at: 2021-08-27 17:01:44
 * Problem URL: https://atcoder.jp/contests/abc144/tasks/abc144_c
 * Result: AC
 * Execution Time: 25 ms
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
  ll n;
  cin >> n;
  ll ans = n - 1;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      ans = min(ans, i + (n / i) - 2);
    }
  }
  cout << ans << endl;
  return 0;
}