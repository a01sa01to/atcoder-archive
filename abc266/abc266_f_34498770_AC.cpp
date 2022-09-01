/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/34498770
 * Submitted at: 2022-09-02 00:37:43
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_f
 * Result: AC
 * Execution Time: 516 ms
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

struct NamoriGraph {
  private:
  vector<vector<int>> Graph;
  vector<bool> onCycle;
  vector<bool> seen;
  vector<bool> finished;
  stack<int> history;
  int pos = -1;
  int n;

  void dfs(int v, int prev_v) {
    seen[v] = true;
    history.push(v);
    for (auto next_v : Graph[v]) {
      if (next_v == prev_v) continue;
      if (finished[next_v]) continue;
      if (seen[next_v]) {
        pos = next_v;
        return;
      }
      dfs(next_v, v);
      if (pos != -1) return;
    }
    history.pop();
    finished[v] = true;
  }

  public:
  NamoriGraph(int n) {
    Graph.resize(n);
    onCycle.assign(n, false);
    seen.assign(n, false);
    finished.assign(n, false);
    this->n = n;
  }
  void addEdge(int u, int v) { Graph[u].push_back(v); }
  vector<bool> getOnCycle() {
    onCycle.assign(n, false);
    seen.assign(n, false);
    finished.assign(n, false);
    history = stack<int>();
    pos = -1;

    dfs(0, -1);

    while (!history.empty()) {
      int t = history.top();
      history.pop();
      onCycle[t] = true;
      if (t == pos) break;
    }
    return onCycle;
  }
};

int main() {
  int n;
  cin >> n;
  NamoriGraph Graph(n);
  vector<pair<int, int>> edges;
  rep(i, n) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    Graph.addEdge(u, v);
    Graph.addEdge(v, u);
    edges.push_back({ u, v });
  }
  auto onCycle = Graph.getOnCycle();
  Debug(onCycle);
  dsu d(n);
  for (auto [u, v] : edges) {
    if (!onCycle[u] || !onCycle[v]) d.merge(u, v);
  }

  int q;
  cin >> q;
  while (q--) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    if (d.same(u, v))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}