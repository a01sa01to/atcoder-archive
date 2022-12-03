/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/37001627
 * Submitted at: 2022-12-04 00:08:21
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_f
 * Result: WA
 * Execution Time: 292 ms
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
  int to;
  ll cost;
  Edge(int to, ll cost): to(to), cost(cost) {}
};

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<vector<Edge>> Graph(n);
  dsu d(n + 1);
  rep(i, m) {
    int u, v;
    ll w;
    cin >> u >> v >> w;
    u--, v--;
    if (u == v) {
      d.merge(u, n);
      continue;
    }
    Graph[u].push_back(Edge(v, w));
    Graph[v].push_back(Edge(u, -w));
    d.merge(u, v);
  }
  vector<ll> dist(n, -1);
  vector<bool> neg(n, false);
  rep(i, n) {
    if (d.leader(i) != i) continue;
    queue<int> que;
    dist[i] = 0;
    que.push(i);
    while (!que.empty()) {
      int v = que.front();
      que.pop();
      for (auto [next_v, cost] : Graph[v]) {
        if (dist[next_v] != -1) {
          if (dist[next_v] != dist[v] + cost) neg[i] = true;
          continue;
        }
        dist[next_v] = dist[v] + cost;
        que.push(next_v);
      }
    }
  }
  while (q--) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    if (!d.same(u, v)) {
      cout << "nan" << endl;
    }
    else if (neg[d.leader(u)]) {
      cout << "inf" << endl;
    }
    else {
      cout << dist[v] - dist[u] << endl;
    }
  }
  return 0;
}