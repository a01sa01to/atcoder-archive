/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc097/submissions/25350021
 * Submitted at: 2021-08-26 22:00:59
 * Problem URL: https://atcoder.jp/contests/abc097/tasks/abc097_b
 * Result: AC
 * Execution Time: 17 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int x;
  cin >> x;
  int maxim = 0;
  for (int i = 1; i <= 100; i++)
    for (int j = 2; j <= 10; j++) {
      int p = pow(i, j);
      if (p <= x) {
        maxim = max(maxim, p);
      }
    }
  cout << maxim << endl;
  return 0;
}