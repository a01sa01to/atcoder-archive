/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/32227454
 * Submitted at: 2022-06-04 21:44:50
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_e
 * Result: WA
 * Execution Time: 1185 ms
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

ll dfs(const int v, const int k, const vector<vector<int>>& Graph, set<int>& visited, int dep) {
  if (dep > k) return 0;
  ll ret = v + 1;
  visited.insert(v);
  for (auto next_v : Graph[v]) {
    if (visited.count(next_v)) continue;
    ret += dfs(next_v, k, Graph, visited, dep + 1);
  }
  return ret;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<int>(0));
  while (m--) {
    int a, b;
    cin >> a >> b;
    Graph[a - 1].push_back(b - 1);
    Graph[b - 1].push_back(a - 1);
  }
  int q;
  cin >> q;
  while (q--) {
    int x, k;
    cin >> x >> k;
    set<int> visited;
    visited.insert(--x);
    cout << dfs(x, k, Graph, visited, 0) << endl;
  }
  return 0;
}