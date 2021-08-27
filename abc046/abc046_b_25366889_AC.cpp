/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc046/submissions/25366889
 * Submitted at: 2021-08-27 23:15:59
 * Problem URL: https://atcoder.jp/contests/abc046/tasks/abc046_b
 * Result: AC
 * Execution Time: 5 ms
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
  int n, k;
  cin >> n >> k;
  int ans = k;
  rep(i, n - 1) {
    ans *= k - 1;
  }
  cout << ans << endl;
  return 0;
}