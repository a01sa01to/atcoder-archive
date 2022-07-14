/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc120/submissions/33220280
 * Submitted at: 2022-07-14 19:53:38
 * Problem URL: https://atcoder.jp/contests/abc120/tasks/abc120_d
 * Result: WA
 * Execution Time: 197 ms
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
  int n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> v(m);
  rep(i, m) cin >> v[i].first >> v[i].second;
  reverse(v.begin(), v.end());
  vector<ll> ans(m + 1);
  dsu d(n);
  ans[0] = n * (n - 1) / 2;
  rep(i, m) {
    auto [x, y] = v[i];
    --x, --y;
    if (d.same(x, y)) continue;
    ans[i + 1] = ans[i] - d.size(x) * d.size(y);
    d.merge(x, y);
  }
  ans.pop_back();
  reverse(ans.begin(), ans.end());
  rep(i, m) cout << ans[i] << endl;
  return 0;
}