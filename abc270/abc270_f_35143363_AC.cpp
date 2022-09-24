/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35143363
 * Submitted at: 2022-09-25 00:15:01
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_f
 * Result: AC
 * Execution Time: 330 ms
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
  vector<tuple<int, int, int>> v(0);
  rep(i, n) {
    int x;
    cin >> x;
    v.push_back({ x, i, n });
  }
  rep(i, n) {
    int y;
    cin >> y;
    v.push_back({ y, i, n + 1 });
  }
  rep(i, m) {
    int a, b, z;
    cin >> a >> b >> z;
    --a, --b;
    v.push_back({ z, a, b });
  }
  sort(v.begin(), v.end());
  Debug(v);
  ll ans = 1e18;
  rep(bit, 4) {
    dsu d(n + 2);
    ll t = 0;
    for (auto [c, u, v] : v) {
      if ((bit & 1) && v == n) continue;
      if ((bit & 2) && v == n + 1) continue;
      if (d.same(u, v)) continue;
      d.merge(u, v);
      t += c;
    }
    if (d.size(0) < n) continue;
    Debug(bit, t);
    ans = min(ans, t);
  }
  cout << ans << endl;
  return 0;
}