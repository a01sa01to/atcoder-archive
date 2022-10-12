/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc031/submissions/35610054
 * Submitted at: 2022-10-13 00:12:14
 * Problem URL: https://atcoder.jp/contests/arc031/tasks/arc031_2
 * Result: AC
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

int main() {
  constexpr int n = 10;
  vector Graph(n, vector<char>(n));
  rep(i, n) rep(j, n) cin >> Graph[i][j];

  rep(i, n) rep(j, n) {
    if (Graph[i][j] == 'o') continue;
    vector dist(n, vector(n, false));
    dist[i][j] = true;
    queue<pair<int, int>> que;
    que.push({ i, j });
    vector<int> dx = { 1, 0, -1, 0 };
    vector<int> dy = { 0, 1, 0, -1 };
    while (!que.empty()) {
      auto [x, y] = que.front();
      que.pop();
      rep(k, 4) {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
        if (dist[nx][ny]) continue;
        if (Graph[nx][ny] == 'x') continue;
        dist[nx][ny] = true;
        que.push({ nx, ny });
      }
    }
    bool ok = true;
    rep(x, n) rep(y, n) {
      if (Graph[x][y] == 'o' && !dist[x][y]) ok = false;
    }
    if (ok) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}