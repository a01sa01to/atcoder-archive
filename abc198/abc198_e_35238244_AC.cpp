/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc198/submissions/35238244
 * Submitted at: 2022-09-30 00:02:41
 * Problem URL: https://atcoder.jp/contests/abc198/tasks/abc198_e
 * Result: AC
 * Execution Time: 322 ms
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

set<int> good;
vector<int> c;
void dfs(int v, vector<vector<int>>& Graph, vector<bool>& visited, vector<bool>& used) {
  visited[v] = true;
  if (!used[c[v]]) {
    good.insert(v);
    used[c[v]] = true;
  }

  for (auto u : Graph[v]) {
    if (!visited[u]) dfs(u, Graph, visited, used);
  }

  if (good.count(v)) {
    used[c[v]] = false;
  }
  visited[v] = false;
}

int main() {
  int n;
  cin >> n;
  c.resize(n);
  rep(i, n) cin >> c[i];
  vector Graph(n, vector<int>(0));
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  vector<bool> visited(n, false);
  vector<bool> used(1e5 + 1, false);
  dfs(0, Graph, visited, used);

  for (auto x : good) cout << x + 1 << endl;
  return 0;
}