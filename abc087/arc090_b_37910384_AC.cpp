/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc087/submissions/37910384
 * Submitted at: 2023-01-10 00:26:54
 * Problem URL: https://atcoder.jp/contests/abc087/tasks/arc090_b
 * Result: AC
 * Execution Time: 156 ms
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
  vector Graph(n, vector<pair<int, ll>>(0));
  rep(i, m) {
    int l, r, dd;
    cin >> l >> r >> dd;
    --l, --r;
    Graph[l].push_back({ r, dd });
    Graph[r].push_back({ l, -dd });
  }
  constexpr ll Undefined = 1e18;
  vector<ll> dist(n, Undefined);
  rep(i, n) {
    if (dist[i] != Undefined) continue;
    dist[i] = 0;
    queue<int> q;
    q.push(i);
    while (!q.empty()) {
      int v = q.front();
      q.pop();
      for (auto [next_v, cost] : Graph[v]) {
        ll next_d = dist[v] + cost;
        if (dist[next_v] != Undefined && dist[next_v] != next_d) {
          cout << "No" << endl;
          return 0;
        }
        if (dist[next_v] == Undefined) {
          dist[next_v] = next_d;
          q.push(next_v);
        }
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}