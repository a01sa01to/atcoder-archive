/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/27400919
 * Submitted at: 2021-11-20 22:45:01
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_e
 * Result: RE
 * Execution Time: 144 ms
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
  int hoge = 0;
  ll p = 1;
  while (n) {
    if (n & 1) p *= k;
    k *= k;
    n >>= 1;
    if (p > 998244353) hoge += p / 998244353, p %= 998244353;
  }
  mint ans = mint(m).pow(p) * mint(m).pow(hoge);
  cout << ans.val() << endl;
  return 0;
}