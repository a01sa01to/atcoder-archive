/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc075/submissions/33190420
 * Submitted at: 2022-07-13 00:23:21
 * Problem URL: https://atcoder.jp/contests/abc075/tasks/abc075_c
 * Result: AC
 * Execution Time: 7 ms
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

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> vec(m);
  rep(i, m) {
    cin >> vec[i].first >> vec[i].second;
    vec[i].first--, vec[i].second--;
  }
  int ans = 0;
  rep(i, m) {
    vector Graph(n, vector<int>(0));
    rep(j, m) {
      if (i == j) continue;
      auto [u, v] = vec[j];
      Graph[u].push_back(v);
      Graph[v].push_back(u);
    }
    vector<bool> visited(n, false);
    queue<int> que;
    que.push(0);
    while (!que.empty()) {
      int v = que.front();
      que.pop();
      visited[v] = true;
      Debug(i, Graph[v]);
      for (auto u : Graph[v]) {
        if (!visited[u]) que.push(u);
      }
      Debug(i, visited, v);
    }

    bool chk = true;
    rep(j, n) if (!visited[j]) chk = false;
    if (!chk) ans++;
  }
  cout << ans << endl;
  return 0;
}