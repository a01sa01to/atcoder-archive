/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/30890242
 * Submitted at: 2022-04-10 22:37:40
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_e
 * Result: WA
 * Execution Time: 117 ms
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
typedef pair<int, int> P;

P op(P a, P b) {
  return make_pair(min(a.first, b.first), max(a.second, b.second));
}
P e() {
  return make_pair(1e9, 0);
}

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  segtree<P, op, e> seg(n);
  rep(i, n) {
    int a;
    cin >> a;
    seg.set(i, make_pair(a, a));
  }
  ll ans = 0;
  auto bl = [&](P a) {
    return a.first >= y;
  };
  auto ov = [&](P a) {
    return a.second <= x;
  };
  int r = 0;

  rep(l, n) {
    while (r < n && (y != seg.prod(l, r + 1).first || seg.prod(l, r + 1).second != x)) r++;
    if (r == n) break;

    int r2 = seg.max_right(l, bl);
    int r3 = seg.max_right(l, ov);

    Debug(l, r, r2, r3);
    ans += ll(min(r2, r3) - r);
  }
  cout << ans << endl;
  return 0;
}