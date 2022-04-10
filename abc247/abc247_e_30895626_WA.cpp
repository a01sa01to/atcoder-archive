/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/30895626
 * Submitted at: 2022-04-10 23:38:50
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_e
 * Result: WA
 * Execution Time: 97 ms
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
  return { min(a.first, b.first), max(a.second, b.second) };
}
P e() {
  return { 1e9, 0 };
}

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<vector<int>> b(0);
  {
    vector<int> tmp(0);
    rep(i, n) {
      if (a[i] < y || a[i] > x) {
        if (tmp.size()) b.push_back(tmp);
        tmp.resize(0);
      }
      else {
        tmp.push_back(a[i]);
      }
    }
    if (tmp.size()) b.push_back(tmp);
  }
  Debug(b);
  int ans = 0;
  rep(i, b.size()) {
    int r = 0;
    segtree<P, op, e> seg(b[i].size());
    rep(j, b[i].size()) seg.set(j, { b[i][j], b[i][j] });
    rep(j, b[i].size()) {
      while (r < b[i].size() && (seg.prod(j, r + 1).first != y || seg.prod(j, r + 1).second != x)) ++r;
      if (r == n) break;
      ans += b[i].size() - r;
      Debug(j, r, ans);
    }
  }
  cout << ans << endl;
  return 0;
}