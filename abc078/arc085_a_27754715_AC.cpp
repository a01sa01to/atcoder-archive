/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc078/submissions/27754715
 * Submitted at: 2021-12-07 22:44:38
 * Problem URL: https://atcoder.jp/contests/abc078/tasks/arc085_a
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
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  // ans: Sum(i=1 to infinity) (1-p)^(i-1) * p * i * t
  // where p = 1/2^M, t=1800M+100N
  // -> ans: t/p = (1800M+100N) * 2^M
  int n, m;
  cin >> n >> m;
  cout << (100 * n + 1800 * m) * (1 << m) << endl;
  return 0;
}