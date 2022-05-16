/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/31441149
 * Submitted at: 2022-05-05 01:14:13
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_g
 * Result: AC
 * Execution Time: 612 ms
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
typedef pair<int, int> P;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector Graph(n, vector<P>(0));
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    Graph[a].push_back({ b, c });
    Graph[b].push_back({ a, c });
  }

  priority_queue<P, vector<P>, greater<P>> pq;
  vector<bool> visited(n, false);
  visited[0] = true;
  for (auto [b, c] : Graph[0]) pq.push({ c, b });

  int ans = 1;
  rep(i, q) {
    int x;
    cin >> x;
    vector<P> nxt;
    while (!pq.empty()) {
      auto [c, b] = pq.top();
      if (c <= x) {
        pq.pop();
        if (!visited[b]) {
          ++ans;
          visited[b] = true;
          for (auto [d, e] : Graph[b])
            nxt.push_back({ e, d });
        }
      }
      else {
        break;
      }
    }
    for (auto p : nxt) pq.push(p);
    cout << ans << endl;
  }
  return 0;
}