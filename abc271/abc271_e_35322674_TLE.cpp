/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35322674
 * Submitted at: 2022-10-01 23:23:42
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_e
 * Result: TLE
 * Execution Time: 2206 ms
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

ll dfs(int v, int goal, vector<vector<tuple<int, int, ll>>>& Graph, vector<bool>& visited, vector<vector<int>>& e, int pl, ll cost) {
  if (v == goal) {
    return cost;
  }
  visited[v] = true;
  ll ret = 1e18;
  for (auto [idx, nxt_v, c] : Graph[v]) {
    if (visited[nxt_v]) continue;
    auto itr = upper_bound(e[idx].begin(), e[idx].end(), pl);
    if (itr == e[idx].end()) continue;
    int nxt_pl = *itr;
    ll res = dfs(nxt_v, goal, Graph, visited, e, nxt_pl, cost + c);
    ret = min(ret, res);
  }
  visited[v] = false;
  return ret;
}

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector Graph(n, vector<tuple<ll, int, int>>(0));
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    Graph[a].push_back({ c, i, b });
  }
  vector<vector<int>> e(m);
  rep(i, k) {
    int d;
    cin >> d;
    --d;
    e[d].push_back(i);
  }
  Debug(e);
  priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<tuple<ll, int, int>>> pq;
  pq.push({ 0, -1, 0 });
  vector<ll> dist(n, 1e18);
  dist[0] = 0;
  while (!pq.empty()) {
    auto [cost, pl, v] = pq.top();
    pq.pop();
    Debug(dist, cost, pl, v);
    for (auto [c, idx, nxt_v] : Graph[v]) {
      auto itr = upper_bound(e[idx].begin(), e[idx].end(), pl);
      if (itr == e[idx].end()) continue;
      int nxt_pl = *itr;
      if (dist[nxt_v] >= cost + c || dist[n - 1] == 1e18) {
        dist[nxt_v] = cost + c;
        pq.push({ dist[nxt_v], nxt_pl, nxt_v });
      }
    }
  }
  if (dist[n - 1] == 1e18) {
    cout << -1 << endl;
  }
  else {
    cout << dist[n - 1] << endl;
  }
  return 0;
}