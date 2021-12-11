/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc172/submissions/27856355
 * Submitted at: 2021-12-12 00:38:50
 * Problem URL: https://atcoder.jp/contests/abc172/tasks/abc172_c
 * Result: WA
 * Execution Time: 132 ms
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
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> asum(n + 1, 0), bsum(m + 1, 0);
  rep(i, n) {
    ll a;
    cin >> a;
    asum[i + 1] = asum[i] + a;
  }
  rep(i, m) {
    ll b;
    cin >> b;
    bsum[i + 1] = bsum[i] + b;
  }
  ll ans = 0;
  ll bidx = m;
  rep(i, n + 1) {
    while (bidx > 0 && asum[i] + bsum[bidx] > k) --bidx;
    if (bidx > 0) ans = max(ans, i + bidx);
  }
  cout << ans << endl;
  return 0;
}