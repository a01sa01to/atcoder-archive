/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/27402542
 * Submitted at: 2021-11-20 22:54:21
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_e
 * Result: WA
 * Execution Time: 6 ms
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
#define rep(i, n) for (ll i = 0; i < n; i++)
typedef modint998244353 mint;

int main() {
  ll n, k, m;
  cin >> n >> k >> m;
  auto p = static_modint<998244352>(k).pow(n);
  mint ans = mint(m).pow(p.val());
  cout << ans.val() << endl;
  return 0;
}