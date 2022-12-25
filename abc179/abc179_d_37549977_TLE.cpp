/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc179/submissions/37549977
 * Submitted at: 2022-12-26 00:33:10
 * Problem URL: https://atcoder.jp/contests/abc179/tasks/abc179_d
 * Result: TLE
 * Execution Time: 2206 ms
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

using mint = modint998244353;
mint op(mint a, mint b) { return a + b; }
mint e() { return 0; }

int main() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> v(k);
  rep(i, k) cin >> v[i].first >> v[i].second;
  lazy_segtree<mint, op, e, mint, op, op, e> seg(n);
  seg.set(0, 1);
  rep(i, n) {
    for (auto [_l, _r] : v) {
      int l = i + _l;
      int r = min(i + _r + 1, n);
      Debug(_l, _r, l, r);
      if (l >= n) continue;
      seg.apply(l, r, seg.get(i));
    }

    cerr << "[Debug] " << i << " ";
    rep(j, n) cerr << seg.get(j).val() << " ";
    cerr << endl;
  }
  cout << seg.get(n - 1).val() << endl;
  return 0;
}