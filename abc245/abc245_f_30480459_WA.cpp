/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/30480459
 * Submitted at: 2022-03-26 22:39:29
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_f
 * Result: WA
 * Execution Time: 169 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int dfs(int v, vector<vector<int>>& Graph, vector<int>& visited) {
  visited[v] = 1;
  for (int next_v : Graph[v]) {
    if (visited[next_v]) return visited[v] = visited[next_v];
    if (dfs(next_v, Graph, visited) != -1) return 1;
  }
  return visited[v] = -1;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Graph[a].push_back(b);
  }
  vector<int> visited(n, 0);
  int cnt = 0;
  rep(i, n) {
    if (visited[i]) {
      if (visited[i] == 1) ++cnt;
      continue;
    }
    dfs(i, Graph, visited);
    if (visited[i] == 1) ++cnt;
  }
  Debug(visited);
  cout << cnt << endl;
  return 0;
}