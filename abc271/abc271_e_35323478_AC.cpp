/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35323478
 * Submitted at: 2022-10-01 23:38:59
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_e
 * Result: AC
 * Execution Time: 181 ms
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

struct Edge {
  int from, to;
  ll cost;
  int id;
};

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<Edge> edges(m);
  rep(i, m) {
    cin >> edges[i].from >> edges[i].to >> edges[i].cost;
    --edges[i].from, --edges[i].to;
    edges[i].id = i;
  }
  constexpr ll INF = 1e18;
  vector<ll> dist(n, INF);
  dist[0] = 0;
  rep(i, k) {
    int d;
    cin >> d;
    --d;
    Edge e = edges[d];
    dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);
  }
  cout << (dist[n - 1] == INF ? -1 : dist[n - 1]) << endl;
  return 0;
}