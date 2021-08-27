/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc004/submissions/25366858
 * Submitted at: 2021-08-27 23:13:55
 * Problem URL: https://atcoder.jp/contests/agc004/tasks/agc004_a
 * Result: AC
 * Execution Time: 7 ms
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
  ll a, b, c;
  cin >> a >> b >> c;
  if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
    cout << 0 << endl;
  }
  else {
    cout << min({ a * b, b * c, c * a }) << endl;
  }
  return 0;
}