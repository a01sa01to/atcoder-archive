/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc061/submissions/34082116
 * Submitted at: 2022-08-16 14:17:01
 * Problem URL: https://atcoder.jp/contests/abc061/tasks/abc061_d
 * Result: WA
 * Execution Time: 13 ms
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
  int n, m, start_v = 0;
  cin >> n >> m;
  vector<tuple<ll, ll, ll>> Edges(m);
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    Edges[i] = { a, b, -c };
  }
  constexpr ll INF = 1e18;
  vector<ll> dist(n, INF);
  dist[start_v] = 0;

  for (int i = 0; i < n - 1; i++) {
    for (auto [from, to, cost] : Edges) {
      if (dist[from] == INF) continue;
      if (dist[to] > dist[from] + cost) {
        dist[to] = dist[from] + cost;
      }
    }
  }

  for (auto [from, to, cost] : Edges) {
    if (dist[to] > dist[from] + cost) {
      cout << "inf" << endl;
      return 0;
    }
  }

  cout << -dist[n - 1] << endl;
}