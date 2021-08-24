/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc002/submissions/25318743
 * Submitted at: 2021-08-24 23:49:04
 * Problem URL: https://atcoder.jp/contests/agc002/tasks/agc002_a
 * Result: AC
 * Execution Time: 10 ms
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
  ll a, b;
  cin >> a >> b;
  if (a * b <= 0) {
    cout << "Zero" << endl;
  }
  else if (a < 0 && (b - a) % 2 == 0) {
    cout << "Negative" << endl;
  }
  else {
    cout << "Positive" << endl;
  }
  return 0;
}