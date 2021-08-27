/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc055/submissions/25362406
 * Submitted at: 2021-08-27 17:54:23
 * Problem URL: https://atcoder.jp/contests/abc055/tasks/abc055_b
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
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

typedef modint1000000007 mint;

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  mint ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  cout << ans.val() << endl;
  return 0;
}