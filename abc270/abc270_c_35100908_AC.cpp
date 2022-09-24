/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35100908
 * Submitted at: 2022-09-24 21:13:24
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_c
 * Result: AC
 * Execution Time: 229 ms
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

bool dfs(int goal, int v, vector<vector<int>>& Graph, vector<int>& ans, vector<bool>& visited) {
  if (v == goal) {
    ans.push_back(v);
    return true;
  }
  visited[v] = true;
  for (auto next_v : Graph[v]) {
    if (visited[next_v]) continue;
    if (dfs(goal, next_v, Graph, ans, visited)) {
      ans.push_back(v);
      return true;
    }
  }
  return false;
}

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  --x, --y;
  vector Graph(n, vector<int>(0));
  rep(i, n - 1) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    Graph[u].push_back(v);
    Graph[v].push_back(u);
  }
  vector<int> ans(0);
  vector<bool> visited(n, false);
  dfs(x, y, Graph, ans, visited);
  for (auto x : ans) cout << x + 1 << " ";
  cout << endl;
  return 0;
}