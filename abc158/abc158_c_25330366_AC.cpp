/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc158/submissions/25330366
 * Submitted at: 2021-08-25 19:27:46
 * Problem URL: https://atcoder.jp/contests/abc158/tasks/abc158_c
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
  int a, b;
  cin >> a >> b;
  for (int i = 1; i <= 10000; i++) {
    if (i * 8 / 100 == a && i / 10 == b) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}