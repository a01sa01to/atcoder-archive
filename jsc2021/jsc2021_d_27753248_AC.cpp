/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jsc2021/submissions/27753248
 * Submitted at: 2021-12-07 21:25:11
 * Problem URL: https://atcoder.jp/contests/jsc2021/tasks/jsc2021_d
 * Result: AC
 * Execution Time: 11 ms
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
typedef modint1000000007 mint;

int main() {
  int n, p;
  cin >> n >> p;
  mint ans = p - 1;
  ans *= mint(p - 2).pow(n - 1);
  cout << ans.val() << endl;
  return 0;
}