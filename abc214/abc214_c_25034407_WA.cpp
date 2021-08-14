/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc214/submissions/25034407
 * Submitted at: 2021-08-14 21:20:22
 * Problem URL: https://atcoder.jp/contests/abc214/tasks/abc214_c
 * Result: WA
 * Execution Time: 395 ms
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
  ll1d s(n), t(n), ans(n);
  rep(i, n) { cin >> s[i]; }
  rep(i, n) { cin >> t[i]; }
  int i = 0, sum = 1e9;
  rep(i, n + 1) {
    // cout << i << " | " << t[i % n] << " " << sum << endl;
    if (t[i % n] <= sum) {
      ans[i % n] = t[i % n];
      sum = t[i % n] + s[i % n];
    }
    else {
      ans[i % n] = sum;
      sum += s[i % n];
    }
  }
  for (ll x : ans) {
    cout << x << endl;
  }
  return 0;
}