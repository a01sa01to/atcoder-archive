/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37856024
 * Submitted at: 2023-01-08 00:00:27
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_e
 * Result: AC
 * Execution Time: 167 ms
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

constexpr int INF = 1e6;
void dfs(int& ans, int v, vector<bool>& visited, const vector<vector<int>>& Graph) {
  if (ans >= INF) return;
  visited[v] = true;
  ans++;
  for (int next_v : Graph[v]) {
    if (visited[next_v]) continue;
    dfs(ans, next_v, visited, Graph);
  }
  visited[v] = false;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    Graph[u].push_back(v);
    Graph[v].push_back(u);
  }
  vector<bool> visited(n, false);
  visited[0] = true;
  int ans = 0;
  dfs(ans, 0, visited, Graph);
  cout << ans << endl;
  return 0;
}