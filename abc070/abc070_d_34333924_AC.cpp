/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc070/submissions/34333924
 * Submitted at: 2022-08-26 00:12:30
 * Problem URL: https://atcoder.jp/contests/abc070/tasks/abc070_d
 * Result: AC
 * Execution Time: 286 ms
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
  int n;
  cin >> n;
  vector Graph(n, vector<pair<int, ll>>(0));
  rep(i, n - 1) {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    Graph[a].push_back({ b, c });
    Graph[b].push_back({ a, c });
  }
  int q, k;
  cin >> q >> k;
  k--;
  constexpr ll INF = 1e18;
  vector<ll> dist(n, INF);
  {
    dist[k] = 0;
    queue<int> que;
    que.push(k);
    while (!que.empty()) {
      int v = que.front();
      que.pop();
      for (auto [next_v, cost] : Graph[v]) {
        if (dist[next_v] != INF) continue;
        if (dist[next_v] > dist[v] + cost) {
          dist[next_v] = dist[v] + cost;
          que.push(next_v);
        }
      }
    }
  }
  rep(i, q) {
    int x, y;
    cin >> x >> y;
    --x, --y;
    cout << dist[x] + dist[y] << endl;
  }
  return 0;
}