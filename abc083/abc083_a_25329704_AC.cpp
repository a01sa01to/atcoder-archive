/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc083/submissions/25329704
 * Submitted at: 2021-08-25 18:41:26
 * Problem URL: https://atcoder.jp/contests/abc083/tasks/abc083_a
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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a + b > c + d) {
    cout << "Left" << endl;
  }
  else if (a + b == c + d) {
    cout << "Balanced" << endl;
  }
  else {
    cout << "Right" << endl;
  }
  return 0;
}