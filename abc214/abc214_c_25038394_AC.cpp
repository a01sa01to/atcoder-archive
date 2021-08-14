/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc214/submissions/25038394
 * Submitted at: 2021-08-14 21:30:24
 * Problem URL: https://atcoder.jp/contests/abc214/tasks/abc214_c
 * Result: AC
 * Execution Time: 414 ms
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
  ll1d s(n), t(n), ans(n, 1e9);
  rep(i, n) { cin >> s[i]; }
  rep(i, n) { cin >> t[i]; }
  ll sum = 1e9;
  rep(i, 2 * n) {
    if (t[i % n] <= sum) {
      sum = min(t[i % n], ans[i % n]);
    }
    ans[i % n] = sum;
    sum += s[i % n];
  }
  for (ll x : ans) {
    cout << x << endl;
  }
  return 0;
}