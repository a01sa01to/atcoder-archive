/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc021/submissions/25350506
 * Submitted at: 2021-08-26 22:27:39
 * Problem URL: https://atcoder.jp/contests/agc021/tasks/agc021_a
 * Result: WA
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
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll n;
  cin >> n;
  ll l10 = floor(log10((long double) n));
  ll tp = (n / ll(pow(10, l10))) % 10;
  cout << (tp - 1) + (9 * l10) << endl;
  return 0;
}