/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc239/submissions/29451042
 * Submitted at: 2022-02-19 21:30:54
 * Problem URL: https://atcoder.jp/contests/abc239/tasks/abc239_e
 * Result: TLE
 * Execution Time: 2244 ms
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

vector<bool> visited;

multiset<int> dfs(vector<vector<int>>& Graph, vector<multiset<int>>& S, int v) {
  visited[v] = true;
  rep(i, Graph[v].size()) {
    int next_v = Graph[v][i];
    if (visited[next_v]) continue;
    S[v].merge(dfs(Graph, S, next_v));
  }
  return S[v];
}

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  vector Graph(n, vector<int>(0));
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }

  vector<multiset<int>> S(n);
  rep(i, n) S[i].insert(x[i]);
  visited.assign(n, false);
  dfs(Graph, S, 0);

  rep(_, q) {
    int v, k;
    cin >> v >> k;
    --v, --k;
    Debug(S[v]);
    auto itr = S[v].rbegin();
    rep(_, k)++ itr;
    cout << *itr << endl;
  }
  return 0;
}