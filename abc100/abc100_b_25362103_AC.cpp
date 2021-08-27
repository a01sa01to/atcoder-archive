/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc100/submissions/25362103
 * Submitted at: 2021-08-27 17:34:32
 * Problem URL: https://atcoder.jp/contests/abc100/tasks/abc100_b
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
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int d, n;
  cin >> d >> n;
  int ans = n * pow(100, d);
  if (n == 100) ans += pow(100, d);
  cout << ans << endl;
  return 0;
}