/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/25329523
 * Submitted at: 2021-08-25 18:27:56
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_c
 * Result: AC
 * Execution Time: 40 ms
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
  ll ans = 0;
  ll prev = 0, cnt = 0;
  rep(i, n) {
    ll h;
    cin >> h;
    if (prev >= h) {
      cnt++;
    }
    else {
      ans = max(ans, cnt);
      cnt = 0;
    }
    prev = h;
  }
  cout << max(ans, cnt) << endl;
  return 0;
}