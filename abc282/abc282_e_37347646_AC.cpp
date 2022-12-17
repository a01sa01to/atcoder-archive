/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37347646
 * Submitted at: 2022-12-17 21:55:19
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_e
 * Result: AC
 * Execution Time: 126 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using mint = modint;

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  mint::set_mod(m);
  priority_queue<tuple<ll, int, int>> pq;
  rep(i, n) {
    rep(j, n) {
      mint s = mint(a[i]).pow(a[j]) + mint(a[j]).pow(a[i]);
      pq.push({ s.val(), i, j });
    }
  }
  Debug(pq);
  ll ans = 0;
  dsu d(n);
  while (!pq.empty()) {
    auto [t, i, j] = pq.top();
    pq.pop();
    if (d.same(i, j)) continue;
    d.merge(i, j);
    ans += t;
  }
  cout << ans << endl;
  return 0;
}