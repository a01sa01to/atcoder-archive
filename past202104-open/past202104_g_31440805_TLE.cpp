/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/31440805
 * Submitted at: 2022-05-05 00:44:41
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_g
 * Result: TLE
 * Execution Time: 2206 ms
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
    priority_queue<P, vector<P>, greater<P>> nxt;
    set<int> tmp;
    while (!pq.empty()) {
      auto [c, b] = pq.top();
      pq.pop();
      if (!visited[b] && c <= x) {
        visited[b] = true;
        ++ans;
        for (auto [d, e] : Graph[b])
          if (!visited[d]) nxt.push({ e, d });
      }
      else if (visited[b]) {
        // do nothing
      }
      else {
        nxt.push({ c, b });
      }
    }
    swap(pq, nxt);
    cout << ans << endl;
  }
  return 0;
}