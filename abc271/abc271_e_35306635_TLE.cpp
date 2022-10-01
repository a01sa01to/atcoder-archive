/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35306635
 * Submitted at: 2022-10-01 22:08:33
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

ll dfs(int v, int goal, vector<vector<tuple<ll, int, int>>>& Graph, vector<bool>& visited, vector<vector<int>>& e, int pl, ll cost) {
  if (v == goal) {
    return cost;
  }
  ll ret = 1e18;
  for (auto [c, idx, nxt_v] : Graph[v]) {
    if (visited[nxt_v]) continue;
    auto itr = upper_bound(e[idx].begin(), e[idx].end(), pl);
    if (itr == e[idx].end()) continue;
    visited[nxt_v] = true;
    ll res = dfs(nxt_v, goal, Graph, visited, e, *itr, cost + c);
    ret = min(ret, res);
    visited[nxt_v] = false;
  }
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
  vector<bool> visited(n, false);
  visited[0] = true;
  ll ans = dfs(0, n - 1, Graph, visited, e, -1, 0);
  if (ans == 1e18) ans = -1;
  cout << ans << endl;
  return 0;
}