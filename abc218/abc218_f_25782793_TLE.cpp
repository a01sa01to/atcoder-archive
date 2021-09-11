/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/25782793
 * Submitted at: 2021-09-11 22:35:00
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_f
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, m;
  cin >> n >> m;
  ll2d Graph(n);
  vector<P> Edges(m);
  rep(i, m) {
    int s, t;
    cin >> s >> t;
    s--;
    t--;
    Graph[s].push_back(t);
    Edges[i] = { s, t };
  }

  rep(i, m) {
    ll1d dist(n, -1);
    queue<ll> que;

    dist[0] = 0;
    que.push(0);

    while (!que.empty()) {
      ll v = que.front();
      que.pop();

      for (ll next_v : Graph[v]) {
        if (dist[next_v] != -1) continue;
        if (v == Edges[i].first && next_v == Edges[i].second) continue;
        dist[next_v] = dist[v] + 1;
        que.push(next_v);
      }
    }
    cout << dist[n - 1] << endl;
  }
  return 0;
}