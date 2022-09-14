/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc130/submissions/34852616
 * Submitted at: 2022-09-14 18:21:57
 * Problem URL: https://atcoder.jp/contests/arc130/tasks/arc130_b
 * Result: AC
 * Execution Time: 351 ms
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

int main() {
  int h, w, c, q;
  cin >> h >> w >> c >> q;
  vector<tuple<ll, ll, ll>> Query(q);
  rep(i, q) {
    ll a, b, d;
    cin >> a >> b >> d;
    Query[i] = { a, b, d };
  }
  reverse(Query.begin(), Query.end());
  vector<ll> ans(c, 0);
  map<ll, bool> row, col;
  for (auto [t, n, ci] : Query) {
    if (t == 1 && !row[n]) {
      row[n] = true;
      ans[ci - 1] += w - col.size();
    }
    if (t == 2 && !col[n]) {
      col[n] = true;
      ans[ci - 1] += h - row.size();
    }
  }
  rep(i, c) cout << ans[i] << " ";
  cout << endl;
  return 0;
}