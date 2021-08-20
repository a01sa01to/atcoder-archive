/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc086/submissions/25175130
 * Submitted at: 2021-08-20 23:16:43
 * Problem URL: https://atcoder.jp/contests/abc086/tasks/abc086_b
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
  string s, a, b;
  cin >> a >> b;
  s = a + b;
  int integ = stoi(s);
  rep(i, 1000) {
    if ((i + 1) * (i + 1) == integ) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}