/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32576116
 * Submitted at: 2022-06-19 00:23:58
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_f
 * Result: AC
 * Execution Time: 523 ms
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
typedef modint998244353 mint;

int main() {
  int n, q;
  cin >> n >> q;
  fenwick_tree<mint> i2a(n), ia(n), a(n);
  rep(i, n) {
    int x;
    cin >> x;
    a.add(i, x);
    ia.add(i, mint(i + 1) * x);
    i2a.add(i, mint(i + 1) * (i + 1) * x);
  }
  while (q--) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      int v;
      cin >> v;
      a.add(x - 1, -a.sum(x - 1, x));
      ia.add(x - 1, -ia.sum(x - 1, x));
      i2a.add(x - 1, -i2a.sum(x - 1, x));
      a.add(x - 1, v);
      ia.add(x - 1, mint(x) * v);
      i2a.add(x - 1, mint(x) * (x) *v);
    }
    else {
      mint ans = 0;
      ans += i2a.sum(0, x) / 2;
      ans -= (mint(x) * 2 + 3) / 2 * ia.sum(0, x);
      ans += mint(x + 1) * (x + 2) / 2 * a.sum(0, x);
      cout << ans.val() << endl;
    }
  }
  return 0;
}