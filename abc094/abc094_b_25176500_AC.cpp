/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc094/submissions/25176500
 * Submitted at: 2021-08-21 00:20:58
 * Problem URL: https://atcoder.jp/contests/abc094/tasks/abc094_b
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

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, m, x;
  cin >> n >> m >> x;
  int toL = 0, toR = 0;
  rep(i, m) {
    int a;
    cin >> a;
    if (a < x) toL++;
    else
      toR++;
  }
  cout << min(toL, toR) << endl;
  return 0;
}