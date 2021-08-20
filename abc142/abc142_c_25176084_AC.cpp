/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc142/submissions/25176084
 * Submitted at: 2021-08-20 23:59:15
 * Problem URL: https://atcoder.jp/contests/abc142/tasks/abc142_c
 * Result: AC
 * Execution Time: 47 ms
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

ll1d diff;

int main() {
  cout << fixed << setprecision(15);
  ll n;
  cin >> n;
  vector<pair<ll, ll>> a(n);
  rep(i, n) {
    ll cnt;
    cin >> cnt;
    a[i] = make_pair(cnt, i + 1);
  }
  sort(all(a));
  rep(i, n) {
    cout << a[i].second << " ";
  }
  cout << endl;
  return 0;
}