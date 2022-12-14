/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/37273290
 * Submitted at: 2022-12-15 00:06:55
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_e
 * Result: TLE
 * Execution Time: 2168 ms
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
  ll to, cost, time;
};

int main() {
  int n, m, x, y;
  cin >> n >> m >> x >> y;
  --x, --y;
  vector<vector<Edge>> Graph(n);
  rep(i, m) {
    ll a, b, t, k;
    cin >> a >> b >> t >> k;
    --a, --b;
    Graph[a].push_back({ b, t, k });
    Graph[b].push_back({ a, t, k });
  }
  constexpr ll INF = 1e18;
  vector<ll> dist(n, INF);
  dist[x] = 0;
  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
  pq.push({ 0, x });
  while (!pq.empty()) {
    auto [d, v] = pq.top();
    pq.pop();
    if (dist[y] < d) break;
    for (auto e : Graph[v]) {
      ll nd = (e.time - d % e.time) % e.time + d + e.cost;
      if (nd < dist[e.to]) {
        dist[e.to] = nd;
        pq.push({ nd, e.to });
      }
    }
  }
  if (dist[y] == INF) {
    cout << -1 << endl;
  }
  else {
    cout << dist[y] << endl;
  }
  return 0;
}