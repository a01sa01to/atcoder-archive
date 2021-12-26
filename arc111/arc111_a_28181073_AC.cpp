/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc111/submissions/28181073
 * Submitted at: 2021-12-27 00:04:42
 * Problem URL: https://atcoder.jp/contests/arc111/tasks/arc111_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n, m;
  cin >> n >> m;
  cout << pow_mod(10, n, m * m) / m % m << endl;
  return 0;
}