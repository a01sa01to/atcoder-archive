/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc074/submissions/25175322
 * Submitted at: 2021-08-20 23:24:36
 * Problem URL: https://atcoder.jp/contests/abc074/tasks/abc074_b
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
  int n, k;
  cin >> n >> k;
  int ans = 0;
  rep(i, n) {
    int x;
    cin >> x;
    ans += min(x, k - x) * 2;
  }
  cout << ans << endl;
  return 0;
}