/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc160/submissions/25175644
 * Submitted at: 2021-08-20 23:38:15
 * Problem URL: https://atcoder.jp/contests/abc160/tasks/abc160_c
 * Result: AC
 * Execution Time: 59 ms
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
  ll k, n;
  cin >> k >> n;
  ll1d a(n);
  rep(i, n) cin >> a[i];
  ll maxRoad = 0;
  rep(i, n + 1) {
    maxRoad = max(maxRoad, (a[(i + 1) % n] - a[i % n] + k) % k);
  }
  cout << k - maxRoad << endl;
  return 0;
}