/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo2/submissions/37256245
 * Submitted at: 2022-12-14 00:24:12
 * Problem URL: https://atcoder.jp/contests/joi2023yo2/tasks/joi2023_yo2_c
 * Result: AC
 * Execution Time: 1590 ms
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
  int h, w;
  cin >> h >> w;
  vector a(h, vector(w, 0));
  rep(i, h) rep(j, w) cin >> a[i][j];

  auto id = [&](int i, int j) {
    return i * w + j;
  };
  auto inrange = [&](int i, int j) {
    return 0 <= i && i < h && 0 <= j && j < w;
  };
  const vector<int> dx = { 1, 0, -1, 0 };
  const vector<int> dy = { 0, 1, 0, -1 };

  dsu d(h * w);
  {
    vector visited(h, vector(w, false));
    rep(i, h) rep(j, w) {
      if (visited[i][j]) continue;
      visited[i][j] = true;
      queue<pair<int, int>> q;
      q.push({ i, j });
      while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        rep(di, 4) {
          int nx = x + dx[di];
          int ny = y + dy[di];
          if (!inrange(nx, ny)) continue;
          if (visited[nx][ny]) continue;
          if (a[x][y] != a[nx][ny]) continue;
          visited[nx][ny] = true;
          d.merge(id(x, y), id(nx, ny));
          q.push({ nx, ny });
        }
      }
    }
  }
  Debug(d.groups());
  map<int, map<int, set<int>>> tonari;
  rep(i, h) rep(j, w) {
    rep(di, 4) {
      int nx = i + dx[di];
      int ny = j + dy[di];
      if (!inrange(nx, ny)) continue;
      if (a[i][j] == a[nx][ny]) continue;
      tonari[d.leader(id(i, j))][a[nx][ny]].insert(d.leader(id(nx, ny)));
    }
  }
  Debug(tonari);
  int ans = 0;
  rep(i, h) rep(j, w) {
    ans = max(ans, d.size(id(i, j)));
    rep(di, 4) {
      int nx = i + dx[di];
      int ny = j + dy[di];
      if (!inrange(nx, ny)) continue;
      if (a[i][j] == a[nx][ny]) continue;
      int t = d.size(id(i, j));
      auto s = tonari[d.leader(id(i, j))][a[nx][ny]];
      for (auto x : s) t += d.size(x);
      ans = max(ans, t);
    }
  }
  cout << ans << endl;
  return 0;
}