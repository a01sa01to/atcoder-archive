/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/34131431
 * Submitted at: 2022-08-19 00:33:24
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_e
 * Result: AC
 * Execution Time: 228 ms
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
  vector<ll> h(n);
  rep(i, n) cin >> h[i];
  vector Graph(n, vector<pair<ll, ll>>());
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    bool c = h[a] > h[b];
    Graph[a].push_back({ b, max(h[b] - h[a], 0LL) });
    Graph[b].push_back({ a, max(h[a] - h[b], 0LL) });
  }
  // Debug(Graph);
  vector<ll> dist(n, 1e18);
  dist[0] = 0;
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> que;
  que.push({ 0, 0 });
  while (!que.empty()) {
    auto [d, v] = que.top();
    que.pop();
    if (dist[v] < d) continue;
    for (auto [to, cost] : Graph[v]) {
      if (dist[to] > d + cost) {
        dist[to] = d + cost;
        que.push({ d + cost, to });
      }
    }
  }
  // Debug(dist);
  // Debug(dist);
  ll ans = -1e18;
  rep(i, n) ans = max(ans, (h[0] - h[i]) - dist[i]);
  cout << ans << endl;
  return 0;
}