/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc212/submissions/24644697
 * Submitted at: 2021-07-31 21:01:11
 * Problem URL: https://atcoder.jp/contests/abc212/tasks/abc212_a
 * Result: AC
 * Execution Time: 10 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int a, b;
  cin >> a >> b;
  if (a > 0 && b == 0) { cout << "Gold" << endl; }
  else if (a == 0 && b > 0) {
    cout << "Silver" << endl;
  }
  else {
    cout << "Alloy" << endl;
  }
  return 0;
}