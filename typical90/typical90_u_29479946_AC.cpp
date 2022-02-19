/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29479946
 * Submitted at: 2022-02-20 00:16:15
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_u
 * Result: AC
 * Execution Time: 107 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  scc_graph Graph(n);
  rep(_, m) {
    int a, b;
    cin >> a >> b;
    Graph.add_edge(a - 1, b - 1);
  }
  vector s = Graph.scc();
  ll ans = 0;
  for (auto x : s) {
    ll t = x.size();
    ans += t * (t - 1) / 2;
  }
  cout << ans << endl;
  return 0;
}