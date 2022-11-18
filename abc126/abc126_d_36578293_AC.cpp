/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc126/submissions/36578293
 * Submitted at: 2022-11-19 01:13:16
 * Problem URL: https://atcoder.jp/contests/abc126/tasks/abc126_d
 * Result: AC
 * Execution Time: 245 ms
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

struct Edge {
  int from, to;
  ll cost;
  Edge(int from, int to, ll cost): from(from), to(to), cost(cost) {}
};

int main() {
  int n;
  cin >> n;
  vector<vector<Edge>> v(n, vector<Edge>(0, Edge(0, 0, 0)));
  rep(i, n - 1) {
    int a, b;
    ll c;
    cin >> a >> b >> c;
    --a, --b;
    v[a].push_back(Edge(a, b, c));
    v[b].push_back(Edge(b, a, c));
  }
  vector<int> ans(n, -1);
  ans[0] = 0;
  queue<int> q;
  q.push(0);
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    for (auto e : v[now]) {
      if (ans[e.to] != -1) continue;
      ans[e.to] = ans[now] ^ (e.cost % 2 == 1);
      q.push(e.to);
    }
  }
  rep(i, n) cout << ans[i] << endl;
  return 0;
}