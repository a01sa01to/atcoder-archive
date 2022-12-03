/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/37001356
 * Submitted at: 2022-12-04 00:00:08
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_f
 * Result: WA
 * Execution Time: 318 ms
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

pair<int, ll> dfs(int v, int prev_v, vector<vector<Edge>>& Graph, vector<bool>& seen, vector<bool>& finished) {
  seen[v] = true;
  for (auto next_v : Graph[v]) {
    if (next_v.to == prev_v) continue;
    if (finished[next_v.to]) continue;
    if (seen[next_v.to] && !finished[next_v.to]) {
      return { next_v.to, next_v.cost };
    }
    auto res = dfs(next_v.to, v, Graph, seen, finished);
    if (res.first == v) {
      finished[v] = true;
      return { -1, res.second };
    }
    if (res.first != -1) {
      finished[v] = true;
      return { res.first, res.second + next_v.cost };
    }
  }
  finished[v] = true;
  return { -1, 0 };
}

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
  rep(i, n) {
    if (d.leader(i) != i) continue;
    queue<pair<int, ll>> que;
    que.push({ i, 0 });
    dist[i] = 0;
    while (!que.empty()) {
      auto [v, cost] = que.front();
      que.pop();
      for (auto next_v : Graph[v]) {
        if (dist[next_v.to] != -1) {
          if (dist[next_v.to] != cost + next_v.cost) d.merge(i, n);
          continue;
        }
        dist[next_v.to] = cost + next_v.cost;
        que.push({ next_v.to, cost + next_v.cost });
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
    else if (d.same(n, u)) {
      cout << "inf" << endl;
    }
    else {
      cout << dist[v] - dist[u] << endl;
    }
  }
  return 0;
}