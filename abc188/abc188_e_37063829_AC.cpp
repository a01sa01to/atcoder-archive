/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc188/submissions/37063829
 * Submitted at: 2022-12-07 00:03:08
 * Problem URL: https://atcoder.jp/contests/abc188/tasks/abc188_e
 * Result: AC
 * Execution Time: 183 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector Graph(n, vector<int>());
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    Graph[--x].push_back(--y);
  }
  vector<pair<int, int>> v(n);
  rep(i, n) v[i] = { a[i], i };
  sort(v.begin(), v.end());
  vector<bool> seen(n, false);
  int ans = -1e9;
  for (auto [x, i] : v) {
    if (seen[i]) continue;
    seen[i] = true;
    queue<int> q;
    q.push(i);
    while (!q.empty()) {
      int now = q.front();
      q.pop();
      for (auto next_v : Graph[now]) {
        ans = max(ans, a[next_v] - x);
        if (seen[next_v]) continue;
        seen[next_v] = true;
        q.push(next_v);
      }
    }
  }
  cout << ans << endl;
  return 0;
}