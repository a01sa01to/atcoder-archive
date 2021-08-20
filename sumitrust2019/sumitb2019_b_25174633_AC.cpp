/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/sumitrust2019/submissions/25174633
 * Submitted at: 2021-08-20 22:54:09
 * Problem URL: https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b
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
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    double price = floor(i * 1.08);
    if (price == n) {
      cout << i << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
  return 0;
}