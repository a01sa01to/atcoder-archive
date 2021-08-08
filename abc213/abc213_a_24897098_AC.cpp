/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc213/submissions/24897098
 * Submitted at: 2021-08-09 00:16:22
 * Problem URL: https://atcoder.jp/contests/abc213/tasks/abc213_a
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

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int a, b;
  cin >> a >> b;
  cout << (b ^ a) << endl;
  return 0;
}