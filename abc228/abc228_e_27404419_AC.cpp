/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/27404419
 * Submitted at: 2021-11-20 23:13:02
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_e
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
#define rep(i, n) for (ll i = 0; i < n; i++)
typedef modint998244353 mint;
typedef static_modint<998244352> mint2;

int main() {
  ll n, k, m;
  cin >> n >> k >> m;
  mint mm = m;
  if(mm.val()==0){cout<<0<<endl;return 0;}
  mint2 p = mint2(k).pow(n);
  mint ans = mm.pow(p.val());
  cout << ans.val() << endl;
  return 0;
}