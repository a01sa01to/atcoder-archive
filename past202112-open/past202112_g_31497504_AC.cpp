/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202112-open/submissions/31497504
 * Submitted at: 2022-05-08 00:00:06
 * Problem URL: https://atcoder.jp/contests/past202112-open/tasks/past202112_g
 * Result: AC
 * Execution Time: 287 ms
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

int main() {
  int n, q;
  cin >> n >> q;
  vector<set<int>> Graph(n);
  while (q--) {
    int t, u, v;
    cin >> t >> u >> v;
    --u, --v;
    if (t == 1) {
      if (Graph[u].count(v)) {
        Graph[u].erase(v);
        Graph[v].erase(u);
      }
      else {
        Graph[u].insert(v);
        Graph[v].insert(u);
      }
    }
    else {
      vector<bool> visited(n, false);
      queue<int> q;
      q.push(u);
      visited[u] = true;
      while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (u == v) break;
        for (int nxt : Graph[u]) {
          if (!visited[nxt]) {
            q.push(nxt);
            visited[nxt] = true;
          }
        }
      }
      if (visited[v]) {
        cout << "Yes" << endl;
      }
      else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}