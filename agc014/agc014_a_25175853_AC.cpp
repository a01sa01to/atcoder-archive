/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc014/submissions/25175853
 * Submitted at: 2021-08-20 23:47:55
 * Problem URL: https://atcoder.jp/contests/agc014/tasks/agc014_a
 * Result: AC
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

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll a, b, c;
  cin >> a >> b >> c;
  if (a == b && b == c) {
    cout << a % 2 - 1 << endl;
  }
  else {
    int cnt = 0;
    while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
      cnt++;
      ll1d tmp = { a, b, c };
      a = (tmp[1] + tmp[2]) / 2;
      b = (tmp[2] + tmp[0]) / 2;
      c = (tmp[0] + tmp[1]) / 2;
      // cout << a << " " << b << " " << c << endl;
    }
    cout << cnt << endl;
  }
  return 0;
}