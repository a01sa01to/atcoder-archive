/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc256/submissions/32556494
 * Submitted at: 2022-06-18 21:38:02
 * Problem URL: https://atcoder.jp/contests/abc256/tasks/abc256_e
 * Result: AC
 * Execution Time: 140 ms
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
  int n;
  cin >> n;
  vector<ll> x(n), c(n);
  rep(i, n) cin >> x[i];
  rep(i, n) cin >> c[i];
  scc_graph Graph(n);
  rep(i, n) Graph.add_edge(x[i] - 1, i);
  vector sc = Graph.scc();
  ll ans = 0;
  Debug(sc);
  for (auto group : sc) {
    if (group.size() == 1) continue;
    ll minim = 1e18;
    for (auto v : group) {
      minim = min(minim, c[v]);
    }
    ans += minim;
  }
  cout << ans << endl;
  return 0;
}