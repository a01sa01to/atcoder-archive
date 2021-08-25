/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc140/submissions/25329790
 * Submitted at: 2021-08-25 18:47:12
 * Problem URL: https://atcoder.jp/contests/abc140/tasks/abc140_c
 * Result: AC
 * Execution Time: 8 ms
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
  // a_i = min(b_i , b_previ)
  int ans = 0, prevB;
  rep(i, n - 1) {
    int b;
    cin >> b;
    if (!i) {
      ans += b;
    }
    else {
      ans += min(b, prevB);
    }
    prevB = b;
  }
  ans += prevB;
  cout << ans << endl;
  return 0;
}