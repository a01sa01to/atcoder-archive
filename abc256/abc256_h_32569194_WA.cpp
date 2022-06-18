/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32569194
 * Submitted at: 2022-06-18 22:32:25
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_h
 * Result: WA
 * Execution Time: 502 ms
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
struct S {
  mint a;
  int size;
};
struct F {
  mint a, b;
};
S op(S l, S r) { return S { l.a + r.a, l.size + r.size }; }
S e() { return S { 0, 0 }; }
S mapping(F l, S r) {
  if (l.a == 0) return S { r.size * l.b, r.size };
  return S { r.a.val() / l.a.val(), r.size };
}
F composition(F l, F r) { return F { r.a * l.a, r.b * l.a + l.b }; }
F id() { return F { 1, 0 }; }

int main() {
  int n, q;
  cin >> n >> q;
  lazy_segtree<S, op, e, F, mapping, composition, id> seg(n);
  rep(i, n) {
    int a;
    cin >> a;
    seg.set(i, S { a, 1 });
  }
  while (q--) {
    int t, l, r;
    cin >> t >> l >> r;
    --l;
    if (t == 1) {
      int x;
      cin >> x;
      seg.apply(l, r, F { x, 0 });
    }
    else if (t == 2) {
      int y;
      cin >> y;
      seg.apply(l, r, F { 0, y });
    }
    else if (t == 3) {
      cout << seg.prod(l, r).a.val() << endl;
    }
  }
  return 0;
}