/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29098181
 * Submitted at: 2022-02-05 22:26:36
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_e
 * Result: WA
 * Execution Time: 207 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct S {
  int a;
  int size;
};

struct F {
  int a, b;
};

S op(S l, S r) { return S { l.a + r.a, l.size + r.size }; }

S e() { return S { 0, 0 }; }

S mapping(F l, S r) { return S { r.a * l.a + r.size * l.b, r.size }; }

F composition(F l, F r) { return F { r.a * l.a, r.b * l.a + l.b }; }

F id() { return F { 1, 0 }; }

int main() {
  int n, q;
  scanf("%d %d", &n, &q);

  vector<S> a(n);
  for (int i = 0; i < n; i++) {
    a[i] = S { 0, 1 };
  }

  lazy_segtree<S, op, e, F, mapping, composition, id> seg(a);

  rep(_, q) {
    int l, r;
    cin >> l >> r;
    --l;
    seg.apply(l, r, F { 1, 1 });
  }
  bool chk = true;
  rep(i, n) {
    if (seg.prod(i, i + 1).a == 0) {
      chk = false;
      break;
    }
  }
  puts(chk ? "Yes" : "No");
}