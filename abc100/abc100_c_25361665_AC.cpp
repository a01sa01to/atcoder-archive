/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc100/submissions/25361665
 * Submitted at: 2021-08-27 17:09:03
 * Problem URL: https://atcoder.jp/contests/abc100/tasks/abc100_c
 * Result: AC
 * Execution Time: 14 ms
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

ll floorLog2(ll x) {
  ll ans = 0;
  while (x % 2 == 0) {
    x /= 2;
    ans++;
  }
  return ans;
}

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  ll ans = 0;
  rep(i, n) {
    ll a;
    cin >> a;
    ans += floorLog2(a);
  }
  cout << ans << endl;
  return 0;
}