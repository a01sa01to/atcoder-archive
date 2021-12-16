/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc106/submissions/27932631
 * Submitted at: 2021-12-16 10:03:08
 * Problem URL: https://atcoder.jp/contests/arc106/tasks/arc106_b
 * Result: AC
 * Execution Time: 199 ms
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
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  dsu d(n);
  rep(i, m) {
    ll x, y;
    cin >> x >> y;
    d.merge(x - 1, y - 1);
  }
  auto v = d.groups();
  bool chk = true;
  rep(i, v.size()) {
    ll asum = 0, bsum = 0;
    rep(j, v[i].size()) {
      asum += a[v[i][j]];
      bsum += b[v[i][j]];
    }
    if (asum != bsum) chk = false;
  }
  puts(chk ? "Yes" : "No");
  return 0;
}