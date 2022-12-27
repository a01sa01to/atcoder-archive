/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc021/submissions/37586368
 * Submitted at: 2022-12-28 00:03:34
 * Problem URL: https://atcoder.jp/contests/abc021/tasks/abc021_c
 * Result: WA
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
using mint = modint1000000007;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int m;
  cin >> m;
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    Graph[x].push_back(y);
    Graph[y].push_back(x);
  }
  vector<pair<int, int>> dist(n, { 1e9, 0 });
  dist[a - 1] = { 0, 1 };
  queue<int> q;
  q.push(a - 1);
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    int nd = dist[v].first + 1;
    for (auto next_v : Graph[v]) {
      if (dist[next_v].first > nd) {
        dist[next_v].first = nd;
        dist[next_v].second = 1;
        q.push(next_v);
      }
      else if (dist[next_v].first == nd) {
        dist[next_v].second++;
      }
    }
  }
  mint ans = 1;
  rep(i, n) ans *= dist[i].second;
  cout << ans.val() << endl;
  return 0;
}