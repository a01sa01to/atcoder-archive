/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/34008734
 * Submitted at: 2022-08-13 21:51:02
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_e
 * Result: AC
 * Execution Time: 1030 ms
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
  int n, m, e;
  cin >> n >> m >> e;
  vector<pair<int, int>> ve(e);
  rep(i, e) {
    cin >> ve[i].first >> ve[i].second;
    ve[i].first--, ve[i].second--;
  }
  int q;
  cin >> q;
  vector<int> x(q);
  rep(i, q) {
    cin >> x[i];
    x[i]--;
  }

  dsu d(n + m + 1);
  rep(i, m) {
    d.merge(n + m, n + i);
  }
  {
    unordered_set<int> tmp(x.begin(), x.end());
    rep(i, e) {
      if (tmp.count(i)) continue;
      auto [u, v] = ve[i];
      d.merge(u, v);
    }
  }

  vector<ll> ans(q);
  for (int i = q - 1; i >= 0; i--) {
    auto [u, v] = ve[x[i]];
    ans[i] = d.size(n + m) - m - 1;
    d.merge(u, v);
  }
  Debug(ans);
  rep(i, q) {
    cout << ans[i] << endl;
  }
  return 0;
}