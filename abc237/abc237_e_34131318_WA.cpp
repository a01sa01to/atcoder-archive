/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/34131318
 * Submitted at: 2022-08-19 00:23:51
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_e
 * Result: WA
 * Execution Time: 225 ms
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
  constexpr ll Pot = 3e13;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    bool c = h[a] > h[b];
    Graph[a].push_back({ b, Pot + abs(h[a] - h[b]) * (-1 + 3 * (!c)) });
    Graph[b].push_back({ a, Pot + abs(h[a] - h[b]) * (-1 + 3 * (c)) });
  }
  Debug(Graph);
  vector<ll> dist(n, 1e18);
  dist[0] = Pot;
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> que;
  que.push({ Pot, 0 });
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
  Debug(dist);
  rep(i, n) {
    dist[i] %= Pot;
    if (dist[i] > 2e13) dist[i] -= Pot;
    dist[i] = -dist[i];
  }
  Debug(dist);
  ll ans = -1e18;
  rep(i, n) ans = max(ans, dist[i]);
  cout << ans << endl;
  return 0;
}