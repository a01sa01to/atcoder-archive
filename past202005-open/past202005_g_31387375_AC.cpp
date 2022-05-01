/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202005-open/submissions/31387375
 * Submitted at: 2022-05-02 01:25:23
 * Problem URL: https://atcoder.jp/contests/past202005-open/tasks/past202005_g
 * Result: AC
 * Execution Time: 35 ms
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

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  constexpr int INF = 1e9, REL = 500;
  vector dist(1000, vector<int>(1000, INF));
  dist[REL][REL] = 0;
  Debug("CP1");
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    dist[a + REL][b + REL] = -1;
    Debug(a, b, dist[a + REL][b + REL]);
  }
  Debug("CP2");
  queue<pair<int, int>> q;
  q.push({ 0, 0 });
  auto c = [&](int nx, int ny, int d) {
    if (nx + REL < 0 || nx + REL >= 1000 || ny + REL < 0 || ny + REL >= 1000) return;
    if (dist[nx + REL][ny + REL] != INF) return;
    dist[nx + REL][ny + REL] = d + 1;
    q.push({ nx, ny });
    Debug(nx, ny, dist[nx + REL][ny + REL]);
  };
  Debug("CP3");
  Debug(q);
  while (!q.empty()) {
    auto [nx, ny] = q.front();
    Debug(nx, ny);
    Debug(q);
    q.pop();
    int d = dist[nx + REL][ny + REL];
    c(nx + 1, ny + 1, d);
    c(nx, ny + 1, d);
    c(nx - 1, ny + 1, d);
    c(nx + 1, ny, d);
    c(nx - 1, ny, d);
    c(nx, ny - 1, d);
  }
  Debug("CP4");
  if (dist[x + REL][y + REL] == INF) {
    cout << -1 << endl;
  }
  else {
    cout << dist[x + REL][y + REL] << endl;
  }
  return 0;
}