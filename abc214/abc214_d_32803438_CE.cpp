/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc214/submissions/32803438
 * Submitted at: 2022-06-28 00:38:16
 * Problem URL: https://atcoder.jp/contests/abc214/tasks/abc214_d
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<tuple<ll, ll, ll>> v;
  rep(i, n) {
    ll u, _v, w;
    cin >> u >> _v >> w;
    --u, --_v;
    v[i] = { w, u, _v };
  }
  sort(v.begin(), v.end());
  dsu d(n);
  ll ans = 0;
  rep(i, n) {
    auto [w, u, v] = v[i];
    ans += w * d.size(u) * d.size(v);
    d.merge(u, v);
  }
  cout << ans << endl;
}