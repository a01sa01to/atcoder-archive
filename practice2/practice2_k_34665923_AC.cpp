/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/34665923
 * Submitted at: 2022-09-07 12:51:59
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_k
 * Result: AC
 * Execution Time: 1767 ms
 */

#include <bits/stdc++.h>
using namespace std;
// #if __has_include(<atcoder/all>)
#include <atcoder/modint>
using namespace atcoder;
// #endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using mint = modint998244353;

struct S {
  mint a;
  int size;
};

struct F {
  mint a, b;
};

struct LazySegtree {
  using T = S;
  using U = F;

  int size;
  int log2;
  int n;
  vector<T> data;
  vector<U> lazyData;

  S e = S { 0, 0 };
  F id = F { 1, 0 };

  S f(F l, S r) { return S { r.a * l.a + r.size * l.b, r.size }; }
  F cmp(F l, F r) { return F { r.a * l.a, r.b * l.a + l.b }; }
  S op(S l, S r) { return S { l.a + r.a, l.size + r.size }; }

  LazySegtree(int _n) {
    log2 = 0;
    while ((1LL << log2) < _n) log2++;
    Debug(log2, 1 << log2);
    size = 1 << log2;
    data = vector<T>(2 * size, e);
    lazyData = vector<U>(size, id);
  }

  void push(int i) {
    lazyApply(2 * i, lazyData[i]);
    lazyApply(2 * i + 1, lazyData[i]);
    lazyData[i] = id;
  }
  void lazyApply(int i, U funcData) {
    data[i] = f(funcData, data[i]);
    if (i < size) {
      lazyData[i] = cmp(funcData, lazyData[i]);
    }
  }

  void set(int i, T x) {
    i += size;
    for (int j = log2; j >= 1; j--) push(i >> j);
    data[i] = x;
    for (int j = 1; j <= log2; j++) update(i >> j);
  }

  T get(int i) {
    i += size;
    for (int j = log2; j >= 1; j--) push(i >> j);
    return data[i];
  }

  T prod(int l, int r) {
    if (l == r) return e;
    l += size, r += size;

    for (int i = log2; i >= 1; i--) {
      if (((l >> i) << i) != l) push(l >> i);
      if (((r >> i) << i) != r) push((r - 1) >> i);
    }

    T sml = e, smr = e;
    while (l < r) {
      if (l & 1) sml = op(sml, data[l++]);
      if (r & 1) smr = op(data[--r], smr);
      l >>= 1, r >>= 1;
    }
    return op(sml, smr);
  }

  void apply(int l, int r, U funcData) {
    if (l >= r) return;
    l += size;
    r += size;

    for (int i = log2; i >= 1; i--) {
      if (((l >> i) << i) != l) push(l >> i);
      if (((r >> i) << i) != r) push((r - 1) >> i);
    }

    int l_tmp = l, r_tmp = r;
    while (l < r) {
      if (l & 1) lazyApply(l++, funcData);
      if (r & 1) lazyApply(--r, funcData);
      l >>= 1, r >>= 1;
    }
    l = l_tmp, r = r_tmp;

    for (int i = 1; i <= log2; i++) {
      if (((l >> i) << i) != l) update(l >> i);
      if (((r >> i) << i) != r) update((r - 1) >> i);
    }
  }

  void update(int i) { data[i] = op(data[2 * i], data[2 * i + 1]); }
};

int main() {
  int n, q;
  cin >> n >> q;
  LazySegtree seg(n);
  rep(i, n) {
    int a;
    cin >> a;
    seg.set(i, S { a, 1 });
  }
  rep(i, q) {
    int t;
    cin >> t;
    if (t == 0) {
      int l, r, b, c;
      cin >> l >> r >> b >> c;
      seg.apply(l, r, F { b, c });
    }
    else {
      int l, r;
      cin >> l >> r;
      cout << seg.prod(l, r).a.val() << endl;
    }
  }
  return 0;
}