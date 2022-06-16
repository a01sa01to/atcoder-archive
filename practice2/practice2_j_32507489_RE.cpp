/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/32507489
 * Submitted at: 2022-06-17 00:27:04
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_j
 * Result: RE
 * Execution Time: 393 ms
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

int op(int a, int b) {
  return max(a, b);
}
int e() {
  return 0;
}

int main() {
  int n, q;
  cin >> n >> q;
  segtree<int, op, e> seg(n);
  rep(i, n) {
    int x;
    cin >> x;
    seg.set(i, x);
  }
  while (q--) {
    int t, x, y;
    cin >> t >> x >> y;
    if (t == 1) {
      seg.set(--x, y);
    }
    else if (t == 2) {
      cout << seg.prod(--x, y) << endl;
    }
    else {
      cout << 1 + seg.max_right(--x, [&](int a) {
        return a < y;
      }) << endl;
    }
  }
  return 0;
}