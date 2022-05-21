/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/31869362
 * Submitted at: 2022-05-21 22:17:08
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_e
 * Result: WA
 * Execution Time: 360 ms
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

struct Edge {
  ll to, cost, from, id;
  Edge(ll from, ll to, ll cost, ll id): from(from), to(to), cost(cost), id(id) {}
  bool operator<(const Edge& rhs) const {
    return cost < rhs.cost;
  }
  bool operator==(const Edge& rhs) const {
    return from == rhs.from && to == rhs.to && cost == rhs.cost;
  }
  bool operator>(const Edge& rhs) const {
    return cost > rhs.cost;
  }
};

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<Edge>> Graph(n);
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    Graph[a].push_back(Edge(a, b, c, i + 1));
    Graph[b].push_back(Edge(b, a, c, i + 1));
  }
  vector<pair<ll, Edge>> dist(n, { 1e18, Edge(0, 0, 0, 0) });
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> que;
  for (auto e : Graph[0]) {
    dist[e.to] = { e.cost, e };
    que.push({ e.cost, e.to });
  }
  dist[0] = { 0, Edge(0, 0, 0, 0) };
  while (!que.empty()) {
    auto [d, v] = que.top();
    que.pop();
    for (auto e : Graph[v]) {
      if (dist[e.to].first > d + e.cost) {
        dist[e.to] = { d + e.cost, e };
        que.push({ d + e.cost, e.to });
      }
    }
  }
  vector<int> ans;
  rep(i, n) {
    if (i == 0) continue;
    ans.push_back(dist[i].second.id);
  }
  for (auto a : ans) cout << a << " ";
  cout << endl;
  return 0;
}