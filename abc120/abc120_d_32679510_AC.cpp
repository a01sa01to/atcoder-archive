/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc120/submissions/32679510
 * Submitted at: 2022-06-24 00:52:45
 * Problem URL: https://atcoder.jp/contests/abc120/tasks/abc120_d
 * Result: AC
 * Execution Time: 198 ms
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

int main() {
  int n, m;
  cin >> n >> m;
  vector v(m, pair<int, int>());
  rep(i, m) cin >> v[i].first >> v[i].second;
  dsu d(n);
  vector<ll> ans(m + 1, ll(n) * (n - 1) / 2);
  for (int i = m - 1; i >= 0; i--) {
    auto [a, b] = v[i];
    --a, --b;
    if (d.same(a, b)) {
      ans[i] = ans[i + 1];
    }
    else {
      ans[i] = ans[i + 1] - d.size(a) * d.size(b);
      d.merge(a, b);
    }
  }
  rep(i, m) cout << ans[i + 1] << endl;
  return 0;
}