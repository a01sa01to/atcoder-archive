/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc021/submissions/25350908
 * Submitted at: 2021-08-26 22:47:56
 * Problem URL: https://atcoder.jp/contests/agc021/tasks/agc021_a
 * Result: AC
 * Execution Time: 16 ms
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
  ll n_c = n;
  ll l10 = 0;
  while (n >= 10) {
    n /= 10;
    l10++;
  }
  // cout << "[DEB] " << n << " " << l10 << " | " << (n + 1) * ll(pow(10, l10)) - 1 << endl;
  if ((n + 1) * ll(pow(10, l10)) - 1 == n_c) {
    cout << n + (9 * l10) << endl;
  }
  else {
    cout << (n - 1) + (9 * l10) << endl;
  }
  return 0;
}