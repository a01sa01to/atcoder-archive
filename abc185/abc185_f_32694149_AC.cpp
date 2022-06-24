/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/32694149
 * Submitted at: 2022-06-25 00:23:54
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_f
 * Result: AC
 * Execution Time: 718 ms
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

int op(int a, int b) { return a ^ b; }

int e() { return 0; }

int main() {
  int n, q;
  cin >> n >> q;
  segtree<int, op, e> seg(n);
  rep(i, n) {
    int a;
    cin >> a;
    seg.set(i, a);
  }
  while (q--) {
    int t, x, y;
    cin >> t >> x >> y;
    --x;
    if (t == 1) {
      seg.set(x, seg.get(x) ^ y);
    }
    else {
      cout << seg.prod(x, y) << endl;
    }
  }
  return 0;
}